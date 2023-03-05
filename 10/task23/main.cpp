#include <iostream>
using namespace std;
class X {
 static int no;
public:
 X(int i = 8) {
 cout << ++no;
 }
 ~X() {
 cout << --no;
 }
};
int X::no {4};
int main() {
 X x, y {2};
 for (int i {0}; i<2; ++i) {
 X x {6};
 }
 X a;
 return 0;
}



