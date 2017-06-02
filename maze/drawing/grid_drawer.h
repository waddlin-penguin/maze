/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   grid_drawer.h
 * Author: jonathan
 *
 * Created on June 2, 2017, 6:21 AM
 */

#include "../graph/graph.h"

#ifndef GRID_DRAWER_H
#define GRID_DRAWER_H

class Grid_Drawer {
public:
    Grid_Drawer();
    Grid_Drawer(const Grid_Drawer& orig);
    virtual ~Grid_Drawer();
    static void draw_grid(Graph graph);
private:

};

#endif /* GRID_DRAWER_H */

