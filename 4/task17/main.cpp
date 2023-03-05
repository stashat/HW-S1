#include<iostream>
#include<string>
using namespace std;

// Schreiben Sie eine Funktion, die einen String und ein Zeichen als Parameter erhält. 
// Zu retournieren ist die Position, an der das Zeichen zum ersten Mal im String auftritt als int Wert.
// Der String darf Teile in doppelten Hochkommatas enthalten, die bei der Suche nach dem Zeichen zu ignorieren sind.
// Überlegen Sie sich Sonderfälle und wie Ihre Funktion darauf reagieren sollte. Zum Beispiel:

// Parameter: "Er sagte:\"ich habe keine Ahnung.\" und haute ab"  'h'
// Returnwert: 38

int ReturnLetterPosition(string str_to_search, char letter);

int main()
{

    cout<< ReturnLetterPosition("Er sagte:\"innnch habe kei\"e Ahg.\" nund haute ab", 'n');
    // cout<< ReturnLetterPosition("s\"t\"t\"s\"a", 't');

    return 0;
}

int ReturnLetterPosition(string str_to_search, char letter)
{   
    int start {0};
    for (start; start <= str_to_search.length(); start++)
    {
        if(str_to_search[start] == letter) return start;
        if(str_to_search[start] == '"')
        {
            for (int i = start+1; i <= str_to_search.length(); i++)
            {
                if(str_to_search[i] == '"')
                {   
                    start = i;
                    i = str_to_search.length() + 1;
                }
            }

        }
    }
    return 0;
}