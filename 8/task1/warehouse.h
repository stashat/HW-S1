#ifndef WAREHOUSE_H
#define WAREHOUSE_H
#include "board.h"
#include<vector>

class Warehouse{
    vector<Board> boards;
    public:
    void boardRegister();
    void buyBoard(const Board&);
    void clearWarehouse(int);
    void sellBoard(int);
};


#endif