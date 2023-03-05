#include<iostream>
#include<cmath>
using namespace std;
//Eine natürliche Zahl heißt fast perfekt, wenn die Summe ihrer echten Teiler 
//(das sind alle Teiler, die kleiner als die Zahl selbst sind) um eins kleiner ist, als die Zahl. 
//Zum Beispiel ist 4 fast perfekt, da 4=1*2*2 und 1+2=3=4-1. 
//Ermitteln Sie alle fast perfekten Zahlen im Bereich 0 bis 10 7.


int main()
{
    int num_of_near_perf{0}, num{1};

    while (num <= pow(10,7))
    {
        int sum{0};
        for (int i = 1; i <=num/2; i++)
        {   
            if (num%i==0) sum = sum + i;
        }

        if(sum == num-1) num_of_near_perf++;
        num=num*2;

    }
    cout << num_of_near_perf << "\n";

    return 0;

}