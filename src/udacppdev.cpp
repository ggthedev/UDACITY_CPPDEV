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
    PrintBoard(board);
    return EXIT_SUCCESS;
}