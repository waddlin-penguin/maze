/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   graph.h
 * Author: jonathan
 *
 * Created on June 1, 2017, 6:39 AM
 */

#include <vector>
using namespace std;

#ifndef GRAPH_H
#define GRAPH_H

/* This class represents one node in the graph. It holds 4 neighbors, and 
 * an absence of a neighbor either represents the edge of the maze, or
 * a wall in between this node and the original node that belongs here. Either
 * way, they are behaviorally equivalent both in the modeling sense and 
 * in the visual sense. If there is no neighbor, the user cannot pass through
 * this "connection". Additionally, just draw a "wall" in every place where
 * a node does not have the neighbor. It has the dual effect of drawing
 * the edges of the maze and walls between nodes.
 * 
 * The x and y ints are the node's coordinates. The origin is the bottom
 * left and the grid is a normal Cartesian graph.
 */
class Node {
    friend class Graph;
public:
    Node(int arg_x, int arg_y);
    Node(const Node& orig);
    virtual ~Node();
private:
    int x;
    int y;
    Node *up_neighbor;
    Node *down_neighbor;
    Node *left_neighbor;
    Node *right_neighbor;
};

/* A graph encapsulates an entire maze. It models it as an undirected
 * acyclic graph. But it holds a 2d vector of them so that we can safely
 * delete neighbors without losing pointers. The maze is always drawn from the
 * bottom left and the exit could be anywhere.
 */
class Graph {
public:
    Graph(int width, int length);
    Graph(const Graph& orig);
    virtual ~Graph();
private:
    vector<Node> CreateOneRow(int width, int vertical_index);
    // Vector of vector of Nodes. Outer vector indexed by length, and
    // inner vector indexed by width.
    vector<vector<Node> > all_nodes;
};

#endif /* GRAPH_H */

