#ifndef AUTOSEARCH_H
#define AUTOSEARCH_H
#include<string>
#include<vector>
using namespace std;

struct AutoSearch{
    string brand;
    string type;
    int kW;
    vector<string> color_options;
    vector<string> extra_options;

    
};

#endif