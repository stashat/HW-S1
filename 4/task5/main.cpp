#include<iostream>
#include<string>
using namespace std;

// Schreiben Sei eine Funktion, die einen String als Parameter erhält 
// und als Ergebnis den reversierten Eingangsstring 
// (also von hinten nach vorne gelesen) retourniert.

string ReverseString(string string_to_reverse);

int main()
{   
    string input_string {""};
    cout << "Enter a string to reverse: ";
    getline(cin, input_string);
    if(input_string.length() <= 1) throw logic_error("Length of the input must be larger than 1.");
    cout << "Normal string: " << input_string << "\n";
    cout << "Reversed string: " << ReverseString(input_string) << "\n";

    return 0;
}

string ReverseString(string string_to_reverse)
{   
    string reversed_string {""};
    for(int i = string_to_reverse.length(); i >=0; i--)
    {
        reversed_string += string_to_reverse[i];
    }

    return reversed_string;
}