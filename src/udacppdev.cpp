//
// Created by Gaurav Gupta on 10/07/2023.
//

#include "udacppdev.h"

vector<int> ParseLine (const string& line){
    vector<int> line_val;
    istringstream line_buf(line);
    int val;
    char c;

    while (line_buf >> val >> c){
        line_val.push_back(val);
    }
    return line_val;
}

void ReadBoardFile(const string& path) {
    ifstream boardFile(path);
    if (boardFile) {
        string line;
        while (getline(boardFile, line)) {
            cout << line << "\n";
        }
    }
}

void PrintBoard(const vector<vector<int>>& board) {
    for(const auto & i : board) {
        for (int j : i) {
            cout << j;
        }
        cout << "\n";
    }
}

int main (){
    ReadBoardFile(BOARD_FILE_PATH);
//    vector<vector<int>> board = BOARD_VALUES;
//    PrintBoard(board);
    TestParseLine();
    return EXIT_SUCCESS;
}

void PrintVector(vector<int> v) {
    cout << "{ ";
    for (auto item : v) {
        cout << item << " ";
    }
    cout << "}" << "\n";
}

//Testing the ParseLine method
void TestParseLine() {
    cout << "----------------------------------------------------------" << "\n";
    cout << "TestParseLine: ";
    string line = "0,1,0,0,0,0,";
    vector<int> solution_vect{0,1,0,0,0,0};
    vector<int> test_vect;
    test_vect = ParseLine(line);
    if (test_vect != solution_vect) {
        cout << "failed" << "\n";
        cout << "\n" << "Test input string: " << line << "\n";
        cout << "Your parsed line: ";
        PrintVector(test_vect);
        cout << "\n";
    } else {
        cout << "passed" << "\n";
    }
    cout << "----------------------------------------------------------" << "\n";
    return;
}