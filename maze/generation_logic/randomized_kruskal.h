/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   randomized_kruskal.h
 * Author: jonathan
 *
 * Created on June 1, 2017, 3:38 AM
 */

#include "maze_algorithm.h"

#ifndef RANDOMIZED_KRUSKAL_H
#define RANDOMIZED_KRUSKAL_H

class Randomized_Kruskal: public Maze_Algorithm {
public:
    Randomized_Kruskal(int width, int length);
    Randomized_Kruskal(const Randomized_Kruskal& orig);
    virtual ~Randomized_Kruskal();
    Graph generate_maze();
private:
    int width, length;
};

#endif /* RANDOMIZED_KRUSKAL_H */

