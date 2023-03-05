#ifndef CAR_H
#define CAR_H
#include<string>
#include<vector>
using namespace std;

const vector<string> color_names {"red","green","blue"};
const vector<string> extra_names {"extra1","extra2"};

struct Car{
    string brand;
    string type;
    int kW;
    enum class Colors {red, green, blue}  color;
    enum class Extras {extra1, extra2} extra;

    void print();
    void read();
};

#endif