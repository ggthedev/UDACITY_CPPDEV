//
// Created by Gaurav Gupta on 10/07/2023.
//

#include "udacppdev.h"

int main (){
    vector<vector<int>> board = BOARD_VALUES;
    for (const auto &i:board){
        for (auto j:i){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}