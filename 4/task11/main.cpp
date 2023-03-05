#include<iostream>
#include<string>
using  namespace std;

// Schreiben Sie eine Funktion, die einen String als Parameter erhält und einen "vermixten" String retourniert. 
// Dabei sollen im Ergebnis zunächst alle Zeichen mit ungeradem Index im Parameter in der ursprünglichen 
// Reihenfolge enthalten sein und daran anschließend alle Zeichen mit geradem Index im Parameter in umgekehrter Reihenfolge, z. B.:

// Parameter: "abcdefghi"
// Returnwert: "bdfhigeca"

string MixedString(string str_to_mix);
int main()
{
    string input_string{""};
    cout << "Enter a string: ";
    cin >> input_string;
    cout <<"Normal string is: " << input_string <<"\n";
    cout <<"Mixed string is: " << MixedString(input_string) <<"\n";
    return 0;
}

string MixedString(string str_to_mix)
{
    string odd_string {""}, even_string {""};
    for (int i = 0; i < str_to_mix.length(); i++)
    {
        if(i%2!=0)
        {
            odd_string += str_to_mix[i];
        }
    }
    for (int i = str_to_mix.length(); i >= 0; i--)
    {
        if(i%2==0)
        {
            even_string += str_to_mix[i];
        }
    }

    return odd_string + even_string;
    
}