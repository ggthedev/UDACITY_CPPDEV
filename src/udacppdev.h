//
// Created by Gaurav Gupta on 10/07/2023.
//

#ifndef UDACPPDEV_H
#define UDACPPDEV_H

#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <string>
#include <cstdio>
#include <algorithm>

using namespace std;

#define BOARD_VALUES {{0, 1, 0, 0, 0, 0},{0, 1, 0, 0, 0, 0},{0, 1, 0, 0, 0, 0},{0, 1, 0, 0, 0, 0},{0, 0, 0, 0, 1, 0}};
const string BOARD_FILE_NAME = "1.board";
const string BOARD_FILE_PATH = string("./../../src/").append(BOARD_FILE_NAME);
enum class State {kEmpty, kObstacle, kClosed, kPath, kStart,kFinish};
void AddToOpen(int x, int y, int g, int h, vector<vector<int>> &openNodes,vector<vector<State>> &grid);
void CellSort(vector<vector<int>> *v);
bool Compare(vector<int> n1,vector<int> n2);
bool CheckValidCell(int x, int y, vector<vector<State>> &grid);
int Heuristic(int x1, int y1, int x2, int y2);
string CellString(State cell);
vector<vector<State>> ReadBoardFile(const string &path);
vector<vector<State>> Search(vector<vector<State>> grid, int init[2], int goal[2]);
void ExpandNeighbors(vector<int> current, int goal[2], vector<vector<int>> &open, vector<vector<State>> &grid);
#endif //UDACPPDEV_H
