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

using namespace std;

#define BOARD_VALUES {{0, 1, 0, 0, 0, 0},{0, 1, 0, 0, 0, 0},{0, 1, 0, 0, 0, 0},{0, 1, 0, 0, 0, 0},{0, 0, 0, 0, 1, 0}};
const string BOARD_FILE_NAME = "1.board";
const string BOARD_FILE_PATH = string("./../../src/").append(BOARD_FILE_NAME);
void TestParseLine();

#endif //UDACPPDEV_H
