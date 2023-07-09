//
// Created by Gaurav Gupta on 10/07/2023.
//

#include "udacppdev.h"

int main (){
    vector<vector<int>> board = BOARD_VALUES; //declares a vector of vector
    cout<<"Size of the board vector is "<<board.size()<<endl;
    /*
     * from clang-tidy rules: for loop with an auto iterator (const reference) since it's only copied in
     * inner loop as an iterator and is a constant reference.
    */
    for (const auto& i:board){
        // for loop which iterates inner vector
        cout<<"Size of the inner vector is "<<i.size()<<endl;
        for (auto j:i){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}