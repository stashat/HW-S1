#include<iostream>
#include<string>
using namespace std;

// Write a function that takes two strings as parameters. Each of the input strings should contain a natural number in decimal notation. 
// A string is to be returned that contains the result of adding the two numbers in decimal notation. However, the strings must not be converted into numbers; 
// rather, the algorithm learned in school for adding two numbers (digit by digit from right to left) must be implemented.

// Check that you can correctly add much larger numbers this way than you can in the int data range.

string AddStrings(string first_num, string second_num);

int main()
{
    // cout <<"Adding 2 integers: " <<100000000000000000000 + 4204204204200000<< "\n"; //Creates a warning
    cout << "Adding using the function: " << AddStrings("100000000000000000000", "4204204204200000") << "\n"; // can compile with the same numbers
    return 0;
}


string AddStrings(string first_num, string second_num)
{
    // Error handling
    for (int i = 0; i < first_num.length(); i++)
    {
        int current_char {0};
        current_char = static_cast<int>(first_num[i]);
        if(current_char<48 || current_char>57) return "Invalid input (first number)";
    }
    for (int i = 0; i < second_num.length(); i++)
    {
        int current_char {0};
        current_char = static_cast<int>(second_num[i]);
        if(current_char<48 || current_char>57) return "Invalid input (second number)";
    }

    // variables
    string added_number {""};
    int carry {0}, first_length {0}, second_length {0};

    first_length = first_num.length()-1;
    second_length = second_num.length()-1;

    while (first_length>=0 || second_length>=0)
    {
        int new_digit {0};
        //adding last 2 digits
        if(first_length<0) new_digit =  static_cast<int>(second_num[second_length]) - 48;
        else if(second_length<0) new_digit =  static_cast<int>(first_num[first_length]) - 48;
        else new_digit = static_cast<int>(first_num[first_length]) + static_cast<int>(second_num[second_length]) - 96;
        //check if there is a carry
        if(carry == 1) new_digit++;
        //create a carry if needed
        if(new_digit>=10)
        {
            new_digit -= 10;
            carry = 1;
        }
        else carry = 0;

        added_number = to_string(new_digit) + added_number;

        first_length--;
        second_length--;
    }
    
    
    return added_number;
}