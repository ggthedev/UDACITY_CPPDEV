//
// Created by Gaurav Gupta on 10/07/2023.
//

#include "udacppdev.h"

int main (){
    vector<vector<int>> board = BOARD_VALUES; //declares a vector of vector
    // for loop with an auto iterator (const reference) since it's only copied in inner loop as an iterator
    // from clang-tidy rules

    for (const auto& i:board){
        // for loop which iterates inner vector
        for (auto j:i){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}