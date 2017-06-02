/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jonathan
 *
 * Created on June 1, 2017, 3:37 AM
 */

#include <cstdlib>
#include <iostream>
#include "../generation_logic/maze_algorithm.h"
#include "../generation_logic/randomized_kruskal.h"
#include "user_prompter.h"
#include "../drawing/grid_drawer.h"


using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int width, length;
    User_Prompter::initial_prompt(&width, &length);
    
    // Include functionality on choosing which maze algorithm.
    
    Maze_Algorithm *generator;
    Randomized_Kruskal rk = Randomized_Kruskal(width, length);
    generator = static_cast<Maze_Algorithm*>(&rk);
    Graph test = generator->generate_maze();

    Grid_Drawer::draw_grid(test);
    
    return 0;
}


