#include<iostream>
#include<string>
using namespace std;


string leftToRight(string input_string)
{
    string new_string {""};
    for (int i = input_string.length()-1; i >= 0; i--)
    {
        new_string += input_string.at(i);
    }
    return new_string;
}
string recursiveLeftToRight(string input_string)
{
    if(input_string.length()==1) return input_string;
    cout << input_string.back();
    return recursiveLeftToRight(input_string.substr(0, (input_string.size()-1)));
}

int main()
{
    string string_to_reverse {""};
    cout << "Enter a string to reverse: ";
    cin >> string_to_reverse;
    cout << "Non-reversed string: " << string_to_reverse << "\n";
    cout << "Reversed string without recursion: " << leftToRight(string_to_reverse) << "\n";
    cout << "Reversed string with recursion:: " << recursiveLeftToRight(string_to_reverse)<< "\n";

    return 0;
}