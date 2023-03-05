// (*) Schreiben Sie eine Funktion, die eine positive Zahl n als Parameter erhält und alle unterschiedlichen Möglichkeiten ausgibt, 
// die Zahl als eine Summe von positiven Zahlen darzustellen. Für die Eingabe 4 soll z. B. Folgendes ausgegeben werden:
// 4
// 3+1
// 2+2
// 2+1+1
// 1+3
// 1+2+1
// 1+1+2
// 1+1+1+1
// Hinweis: Als ersten Summanden kann man jede positive Zahl kleiner als n wählen. 
// Die möglichen Summendarstellungen mit diesem ersten Summanden sind genau die möglichen Summendarstellungen der verbliebenen Differenz. 
// Z. B.: Ist n gleich 4 und man wählt den ersten Summanden 1, so ist die Differenz 3. Für 3 gibt es die Möglichkeiten 3, 2+1, 1+2 und 1+1+1.
// 4 kann also mit 1 als erstem Summanden auf die vier Arten 1+3, 1+2+1, 1+1+2 und 1+1+1+1 dargestellt werden.
#include<iostream>
#include<string>
using namespace std;


string allPossibleAdditions(int input_num)
{
    if(input_num == 1) return "a";
    int first_summand {input_num -1};
    int second_summand {0};
    for (first_summand;  first_summand > 0; first_summand--)
    {
        second_summand = input_num - first_summand;
        cout << first_summand << "+" << second_summand << "\n";
        if(second_summand>1) cout <<  first_summand << "+" << allPossibleAdditions(second_summand);

    }
    
    return "";
}


int main()
{

    cout << allPossibleAdditions(5);

    return 0;
}