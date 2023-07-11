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

int Heuristic(int x1, int y1, int x2, int y2) {
    /*
     * Manhattan distance: |x2-x1|+|y2-y1|
     * */
    return (abs(x2 - x1) + abs(y2 - y1));
}

//Compares 2 nodes
bool Compare(vector<int> n1, vector<int> n2) {
    return (n1[2] + n1[3] > n2[2] + n2[3]);
}

void AddToOpen(int x, int y, int g, int h, vector<vector<int>> &openNodes, vector<vector<State>> &grid) {
    vector<int> node = {x, y, g, h};
    //    node[0] = static_cast<int>(State::kClosed);
    //    node[1] = static_cast<int>(State::kClosed);
    //Create a vector<int> node with the form {x, y, g, h} and push the node to the back of the open vector
    openNodes.push_back(node);
    //Set the grid value for the x and y coordinates to the enum value
    grid[x][y] = State::kClosed;
}

vector<vector<State>> Search(vector<vector<State>> board, int start[2], int goal[2]) {
    vector<vector<State>> finalBoard{};
    vector<vector<int>> open{};
/*
 * x and y are given by the init variable values,
 * Set the initial cost g = 0,
 * h is given by Heuristic function.
 * Add first node to open vector using the AddToOpen function by passing the node values: x, y, g, and h,
 * along with the open and grid vectors.
 * */
    int x = start[0];
    int y = start[1];
    int g = 0;
    int h = Heuristic(x, y, goal[0], goal[1]);
    AddToOpen(x, y, g, h, open, board);
    // TODO: while open vector is non empty {
    // TODO: Sort the open list using CellSort, and get the current node.

    // TODO: Get the x and y values from the current node,
    // and set grid[x][y] to kPath.

    // TODO: Check if you've reached the goal. If so, return grid.


    // If we're not done, expand search to current node's neighbors. This step will be completed in a later quiz.
    // ExpandNeighbors

    //} // TODO: End while loop

    cout << "No path found!!";
    return finalBoard;
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
        cout << "\n";
    }
}

int main() {
    vector<vector<State>> board = ReadBoardFile(BOARD_FILE_PATH);
    auto init = new int[0, 0];
    auto goal = new int[4, 5];

    auto solution = Search(board, init, goal);
    PrintBoard(solution);
    return EXIT_SUCCESS;
}