#include "board.h"
#include "warehouse.h"
#include<iostream>
using namespace std;


int main(){

    Board b1(oak,4), b2(mahogany, 10), b3(beech, 2), b4(oak,15);
    Warehouse ware;
    ware.buyBoard(b1);
    ware.buyBoard(b2);
    ware.buyBoard(b3);
    ware.buyBoard(b4);
    cout <<"Original:";
    ware.boardRegister();
    ware.clearWarehouse(4);
    cout <<"\n\nAfter clearing with the value 4:";
    ware.boardRegister();
    ware.sellBoard(12);
    cout <<"\n\nAfter selling a board with length 12:";
    ware.boardRegister();
    ware.sellBoard(3);
    cout <<"\n\nAfter selling a board with length 3:";
    ware.boardRegister();
}