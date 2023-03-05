#include "warehouse.h"
#include<vector>
#include<string>
#include<iostream>
using namespace std;


void Warehouse::boardRegister(){
    cout << "\nBoard register:\n-------------";
    for(auto& b : boards){
        cout <<"\n";
        b.print();
        cout << "-------------";
    }

}
void Warehouse::buyBoard(const Board& board){
    boards.push_back(board);
}


void Warehouse::sellBoard(int input_length){
    vector<Board> option_boards;
    //find all boards that have the minimum input length
    for(auto& b : boards){
        if(b.get_length()/input_length>0)
            option_boards.push_back(b);
    }
    if(option_boards.empty()) throw runtime_error("There are no available boards with this length");
    //from option boards find the shortest
    Board& min_len_b {option_boards.at(0)};
    for (size_t i {1}; i < option_boards.size(); i++)
    {
        if(option_boards.at(i).get_length()<min_len_b.get_length() ){
            min_len_b = option_boards.at(i);
        }
    }
    //find board position in boards vector
    size_t b_index{0};
    for(size_t i{0}; i<boards.size(); i++){
        if(boards.at(i)==min_len_b){
            b_index = i;
        }
    }
    //remove from boards
    if(min_len_b.get_length()==input_length){
        boards.erase(boards.begin()+static_cast<int>(b_index));
  
    }
    //cut the board
    else if(min_len_b.get_length()>input_length){
        boards.at(b_index).cut_board(input_length);
    }
}

void Warehouse::clearWarehouse(int min_len){
    for (size_t i{0}; i < boards.size(); i++)
    {
        if(boards.at(i).get_length()<=min_len){
            boards.erase(boards.begin()+static_cast<int>(i));
        }
    }
    
}
