#include<iostream>
#include<vector>
using namespace std;
// Schreiben Sie eine Funktion, die einen Vektor von ganzen Zahlen als Parameter erhält und einen entsprechenden Vektor von ganzen Zahlen retourniert,
// in dem jeweils zwei benachbarte Einträge vertauscht sind. Verwenden Sie keine Schleife in Ihrer Funktion.
// Z. B.: Ausgangsvektor: {1,2,3,4,5,6}    Ergebnisvektor: {2,1,4,3,6,5}
// Beachten Sie, dass der Vektor auch eine ungerade Anzahl von Einträgen enthalten kann.

vector<int> switchVector(vector<int> input_v, int i)
{
    if(input_v.size() % 2 == 0) //if even number of numbers
    {
        if(i == input_v.size()) return input_v;
    }
    else if(i == input_v.size()-1) return input_v; //if odd number of numbers
    int temp = input_v.at(i);
    input_v.at(i) = input_v.at(i+1);
    input_v.at(i+1) = temp;
    return switchVector(input_v, i+=2);
}


int main()
{
    vector<int> zv = {1,2,3,4,5,6};
    for (const auto& z : switchVector(zv, 0))
    {
        cout << z;
    }
    

    return 0;
}

