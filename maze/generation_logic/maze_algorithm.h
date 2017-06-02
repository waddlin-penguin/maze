/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   maze_algorithm.h
 * Author: jonathan
 *
 * Created on June 1, 2017, 6:37 AM
 */

#include "../graph/graph.h"

#ifndef MAZE_ALGORITHM_H
#define MAZE_ALGORITHM_H

class Maze_Algorithm {
public:
    Maze_Algorithm(int width, int length);
    Maze_Algorithm(const Maze_Algorithm& orig);
    virtual ~Maze_Algorithm();
    virtual Graph generate_maze() = 0;
private:

};

#endif /* MAZE_ALGORITHM_H */

