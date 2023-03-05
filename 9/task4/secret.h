#ifndef SECRET_H
#define SECRET_H
#include<iostream>
#include<string>
using namespace std;

class Secret{
    string information;
    string password;
    public:
    string get_info() const;
    string get_pass() const;
    Secret(const string&);
    Secret(const string&, const string&);
    bool lock(const string&);
    bool unlock(const string&);
    Secret operator+(const Secret&) const;
    int len();
    friend ostream& operator<<(ostream&, const Secret&);
};

#endif