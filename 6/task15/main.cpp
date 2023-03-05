#include<iostream>
#include<string>
#include<vector>
using namespace std;

// Schreiben Sie zwei Funktionen, die jeweils einen String als Parameter enthalten und einen String retournieren. 
// Dabei soll eine Funktion den String von Klarschrift in Morsecode übersetzen, die zweite Funktion übersetzt in der anderen Richtung. 
// Ist eine Übersetzung nicht möglich, so ist eine Exception vom Typ runtime_error zu werfen. Z. B.:
// Parameterwert: "Hallo Computer"
// Returnwert:  ".... .- .-.. .-.. --- / -.-. --- -- .--. ..- - . .-."

string to_morse(string input_str)
{   
    string morse_str {""};
    for (size_t i = 0; i < input_str.size(); i++)
    {
        switch (static_cast<int>(input_str.at(i)))
        {
        case 32: //Space
            morse_str+= "/ ";
            break;
        case 65: case 97: //Aa
            morse_str+= ".- ";
            break;
        case 66: case 98://Bb
            morse_str+=  "-... ";
            break;
        case 67: case 99://Cc
            morse_str+=  "-.-. ";
            break;
        case 68: case 100://Dd
            morse_str+=  "-.. ";
            break;
        case 69: case 101://Ee
            morse_str+=  ". ";
            break;
        case 70: case 102://Ff
            morse_str+=  "..-. ";
            break;
        case 71: case 103://Gg
            morse_str+=  "--. ";
            break;
        case 72: case 104://Hh
            morse_str+=  ".... ";
            break;
        case 73: case 105://Ii
            morse_str+=  ".. ";
            break;
        case 74: case 106://Jj
            morse_str+=  ".--- ";
            break;
        case 75: case 107://Kk
            morse_str+=  "-.- ";
            break;
        case 76: case 108://Ll
            morse_str+=  ".-.. ";
            break;
        case 77: case 109://Mm
            morse_str+=  "-- ";
            break;
        case 78: case 110://Nn
            morse_str+=  "-. ";
            break;
        case 79: case 111://Oo
            morse_str+=  "--- ";
            break;
        case 80: case 112://Pp
            morse_str+=  ".--. ";
            break;
        case 81: case 113://Qq
            morse_str+=  "--.- ";
            break;
        case 82: case 114://Rr
            morse_str+=  ".-. ";
            break;
        case 83: case 115://Ss
            morse_str+=  "... ";
            break;
        case 84: case 116://Tt
            morse_str+=  "- ";
            break;
        case 85: case 117://Uu
            morse_str+=  "..-- ";
            break;
        case 86: case 118://Vv
            morse_str+=  "...- ";
            break;
        case 87: case 119://Ww
            morse_str+=  ".-- ";
            break;
        case 88: case 120://Xx
            morse_str+=  "-..- ";
            break;
        case 89: case 121://Yy
            morse_str+=  "-.-- ";
            break;
        case 90: case 122://Zz
            morse_str+=  "--.. ";
            break;
        default:
            throw runtime_error("Invalid character in input!(only alphabet and spaces)");
            break;
        }
    }
    morse_str.pop_back(); //remove last space
    return morse_str;
}


string morse_to_text(string input_str)
{
    vector<string> morse_codes;
    string one_code, morse_in_text {""};
    for (size_t i {0}; i < input_str.size(); i++)
    {
        if(input_str.at(i)!=' ' )
        {
            one_code +=input_str.at(i);
        }
        else if(one_code.size()>0)
        {
            morse_codes.push_back(one_code);
            one_code.clear();
        }
        else continue;
    }
    morse_codes.push_back(one_code);

    for (size_t i {0}; i < morse_codes.size(); i++)
    {
        if(morse_codes.at(i) == ".-") morse_in_text+="a";
        else if(morse_codes.at(i) == "-...") morse_in_text+="b";
        else if(morse_codes.at(i) == "-.-.") morse_in_text+="c";
        else if(morse_codes.at(i) == "-..") morse_in_text+="d";
        else if(morse_codes.at(i) == ".") morse_in_text+="e";
        else if(morse_codes.at(i) == "..-.") morse_in_text+="f";
        else if(morse_codes.at(i) == "--.") morse_in_text+="g";
        else if(morse_codes.at(i) == "....") morse_in_text+="h";
        else if(morse_codes.at(i) == "..") morse_in_text+="i";
        else if(morse_codes.at(i) == ".---") morse_in_text+="j";
        else if(morse_codes.at(i) == "-.-") morse_in_text+="k";
        else if(morse_codes.at(i) == ".-..") morse_in_text+="l";
        else if(morse_codes.at(i) == "--") morse_in_text+="m";
        else if(morse_codes.at(i) == "-.") morse_in_text+="n";
        else if(morse_codes.at(i) == "---") morse_in_text+="o";
        else if(morse_codes.at(i) == ".--.") morse_in_text+="p";
        else if(morse_codes.at(i) == "--.-") morse_in_text+="q";
        else if(morse_codes.at(i) == ".-.") morse_in_text+="r";
        else if(morse_codes.at(i) == "...") morse_in_text+="s";
        else if(morse_codes.at(i) == "-") morse_in_text+="t";
        else if(morse_codes.at(i) == "..-") morse_in_text+="u";
        else if(morse_codes.at(i) == "...-") morse_in_text+="v";
        else if(morse_codes.at(i) == ".--") morse_in_text+="w";
        else if(morse_codes.at(i) == "-..-") morse_in_text+="x";
        else if(morse_codes.at(i) == "-.--") morse_in_text+="y";
        else if(morse_codes.at(i) == "--..") morse_in_text+="z";
        else if(morse_codes.at(i) == "/")morse_in_text+=" ";
        else throw runtime_error("Invalid input!(only morse characters(- .) and / for space)");
    }
    
    
    return morse_in_text;

}

int main()
{
    string text_or_morse, input_text, input_morse;
    cout << "For text to morse enter y.\nFor morse to text enter n.\nTo end the programm enter x.\nInput:  ";
    while(getline(cin, text_or_morse)){
    if(text_or_morse == "y")
    {
        cout << "Input text to convert to morse (no special characters, only alphabet and spaces): ";
        getline(cin, input_text);
    	cout <<"Morse: " <<to_morse(input_text)<< "\n";
        cout << "Original: " << input_text<< "\n";
    }
    else if(text_or_morse == "n")
    {
        cout << "Input morse to convert to text (only morse characters(- .) and / for space): ";
        getline(cin, input_morse);
    	cout <<"Morse: " <<input_morse  << "\n";
        cout << "Text: " << morse_to_text(input_morse) << "\n";
    }
    else if(text_or_morse == "x") break;
    else throw runtime_error("Invalid input, please enter y or n.");
    cout << "For text to morse enter y.\nFor morse to text enter n.\nTo end the programm enter x.\nInput:  ";
    }
    
    return 0;
}