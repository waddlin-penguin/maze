/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   randomized_kruskal.cpp
 * Author: jonathan
 * 
 * Created on June 1, 2017, 3:38 AM
 */
#include "randomized_kruskal.h"

Randomized_Kruskal::Randomized_Kruskal(int arg_width, int arg_length)
    : Maze_Algorithm(arg_width, arg_length) {
    width = arg_width;
    length = arg_length;
}

Randomized_Kruskal::Randomized_Kruskal(const Randomized_Kruskal& orig)
    : Maze_Algorithm(orig) {
}

Randomized_Kruskal::~Randomized_Kruskal() {
}

Graph Randomized_Kruskal::generate_maze() {
    // TODO: Actually implement this
    return Graph(0,0);
}