#include <iostream>
using namespace std;

void swap(char* a, char* b) {
  char help{*a};
  *a = *b;
  *b = help;
}

int main() 
{
  char s[11] {"UNSERFALL"};

  swap(s+5, s+9);

  cout << s ;

  return 0;
}