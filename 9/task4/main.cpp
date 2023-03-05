#include<iostream>
#include "secret.h"
using namespace std;

int main(){
    Secret s1{"A Random String"};
    Secret s2{"Some Info 123", "pass123"};
    Secret s3{"test test"};
    cout << "#Operator + test#\n";
    cout << s1+s3;
    //cout << s1+s2; //Throws error
    cout << "-----------------\n";

    cout << "#Len methode test#\n";
    cout << s1;
    cout <<"Length of info s1: " << s1.len() << "\n";
    cout << "-----------------\n";

    cout << "#Lock methode test#\n";
    s1.lock("lock123");
    cout << s1;
    cout << "The object is already locked so it returns 0: " << s1.lock("lock123");
    cout << "\n-----------------\n";

    cout << "#Unlock methode test#\n";
    s1.unlock("123");
    cout << "Wrong password: " << s1;
    s1.unlock("lock123");
    cout << "Right password: " << s1;

    return 0;
}