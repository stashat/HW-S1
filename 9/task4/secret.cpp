#include "secret.h"
#include<iostream>
#include<string>

Secret::Secret(const string& information) : information(information) {
}
Secret::Secret(const string& information, const string& password): information(information), password(password){
}
bool Secret::lock(const string& pw){
    if(password.empty()){
        password = pw;
        return true;
    }
    return false;
} 
bool Secret::unlock(const string& pw){
    if(password == pw){
        password.clear();
        return true;
    }
    return false;
}
Secret Secret::operator+(const Secret& secret) const{
    if(password.empty() && secret.get_pass().empty()){
        Secret new_secret {information+secret.get_info()};
        return new_secret;
    }
    else
        throw runtime_error("One or more objects are locked!\n");
}
string Secret::get_info() const{
    return information;
}
string Secret::get_pass() const{
    return password;
}
int Secret::len(){
    if(password.empty())
        return information.length();
    return 0;
}
ostream& operator<<(ostream& os, const Secret& s) {
    if(s.get_pass().empty())
        os << "Information: " << s.get_info() << "\n";
    else
        os << "The object is locked!\n";
  
    return os;
}
