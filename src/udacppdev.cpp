//
// Created by Gaurav Gupta on 10/07/2023.
//

#include "udacppdev.h"

string CellString(State cell) {
    switch (cell) {
        case State::kObstacle:
            return "⛰️   ";
        default:
            return "0    ";
    }
}

vector<State> ParseLine(const string &line) {
    vector<State> line_val;
    istringstream line_buf(line);
    int val;
    char c;

    while (line_buf >> val >> c && c == ',') {
        line_val.push_back(val == 0 ? State::kEmpty : State::kObstacle);
    }
    return line_val;
}

int Heuristic (int x1, int y1, int x2,int y2){
    /*
     * Manhattan distance: |x2-x1|+|y2-y1|
     * */
    return (abs(x2 - x1) + abs(y2 - y1));
}

vector<vector<State>> Search(vector<vector<State>> board, int start[2], int goal[2]) {
    vector<vector<State>> finalBoard;
    cout<<"No path found!!";
    return  finalBoard;
}

vector<vector<State>> ReadBoardFile(const string &path) {
    ifstream boardFile(path);
    vector<vector<State>> board;

    if (boardFile) {
        string line;
        while (getline(boardFile, line)) {
            vector<State> row = ParseLine(line);
            board.push_back(row);
        }
    }
    return board;
}

void PrintBoard(const vector<vector<State>> &board) {
    for (const auto &i: board) {
        for (State j: i) {
            cout << CellString(j);
        }
        cout <<"\n";
    }
}

int main() {
    vector<vector<State>> board = ReadBoardFile(BOARD_FILE_PATH);
    auto init = new int[0,0];
    auto goal = new int[4,5];

    auto  solution = Search(board, init, goal);
    PrintBoard(solution);
    return EXIT_SUCCESS;
}