#ifndef BOARD_H
#define BOARD_H
#include<string>
#include<vector>
using namespace std;

enum WoodType
    {
      beech,
      oak,
      mahogany
    };

static vector<string> wood_types_v{"beech","oak","mahogany"};

class Board{
    string wood_type;
    int length;

    public:
    explicit Board(WoodType, int);
    void set_type(const WoodType);
    string get_type();
    void set_length(const int);
    int get_length();
    void cut_board(const int);
    void print();
    bool operator==(const Board);

   
    
};


#endif