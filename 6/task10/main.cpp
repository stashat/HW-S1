#include<iostream>
#include<vector>
using namespace std;

// Schreiben Sie eine Funktion, die einen Vektor von int-Werten erhält. 
// Duplikate von Werten sind aus dem Vektor zu entfernen. 
// Zu retournieren ist die Anzahl der entfernten Werte. 
// Sollte die Anzahl der Werte im bereinigten Vektor weniger als 10% 
// der ursprünglichen Werteanzahl sein, so ist eine Exception vom Typ runtime_error zu werfen.

int remove_duplicates(vector<int> input_v)
{
    int num_of_dup {0};
    const size_t num_of_elements {input_v.size()};
    for (size_t i {0}; i < input_v.size()-1; i++)
    {
        for (size_t j {i+1}; j < input_v.size(); j++)
        {
            if(input_v.at(i)==input_v.at(j)) 
            {
                input_v.erase(input_v.begin()+j);
                j--;
                num_of_dup++;
            }
        }
    }
    if(static_cast<double>(input_v.size())/static_cast<double>(num_of_elements)<0.1) throw runtime_error("Number of elements of the \"cleaned\" vector is smaller than 10% of the original vector size.");
    return num_of_dup;
}

int main()
{
    int input;
    // vector<int> test_vector1 {2,2,2,2,2,2,2,2,2,2,2}; //throws error
    // vector<int> test_vector2 {1,3,4,1,5,3,3,6,7,1};
    vector<int> input_vector;
    while (cin >> input) input_vector.push_back(input);
    // cout << "Number of duplicates: " << remove_duplicates(test_vector1) << "\n"; //throws error
    // cout << "Number of duplicates: " << remove_duplicates(test_vector2) << "\n";
    cout << "Number of duplicates: " << remove_duplicates(input_vector) << "\n";
    return 0;
}