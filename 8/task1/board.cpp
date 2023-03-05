#include "board.h"
#include<vector>
#include<string>
#include<iostream>
using namespace std;


void Board::set_type(WoodType w_type){
    wood_type = wood_types_v.at(static_cast<size_t>(w_type));
}
string Board:: get_type(){
    return wood_type;
}
void Board::set_length(const int len){
	length = len;
}

int Board::get_length(){
	return length;
}

Board::Board(WoodType wood_type, int length) {
    set_type(wood_type);
    if(length<=0) throw runtime_error("Length has to be a positive number!");
    else set_length(length);
};

void Board::cut_board(const int cut){
    length -= cut;
}

void Board::print(){
    cout << "Wood type: " << wood_type << "\n" << "Length: " << length << "\n";
}

bool Board::operator==(const Board rop){
    if(wood_type == rop.wood_type && length == rop.length)
        return true;
    return false;
}