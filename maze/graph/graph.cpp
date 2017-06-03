/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   graph.cpp
 * Author: jonathan
 * 
 * Created on June 1, 2017, 6:39 AM
 */

#include "graph.h"

Node::Node(int arg_x, int arg_y) {
  x = arg_x;
  y = arg_y;
}

Node::Node(const Node& orig) {

}

Node::~Node() {

}

Graph::Graph(int width, int length) {
  all_nodes.reserve(length);
  // Keep track of last made row.
  vector<Node> previous_row = CreateOneRow(width, 0);
  all_nodes[0] = previous_row;
  for (int vertical = 1; vertical < length; vertical++) {
    // Create one row 
    vector<Node> current_row = CreateOneRow(width, vertical);
    all_nodes[vertical] = current_row;
    // Stitch together the last row and this row.
    for (int horizontal = 0; horizontal < width; horizontal++) {
      current_row[horizontal].down_neighbor = &previous_row[horizontal];
      previous_row[horizontal].up_neighbor = &current_row[horizontal];
    }
    previous_row = current_row;
  }
}

vector<Node> Graph::CreateOneRow(int width, int vertical_index) {
  vector<Node> row;
  row.reserve(width);
  // Make row of nodes without neighbors.
  for (int horizontal = 0; horizontal < width; horizontal++) {
    row[horizontal] = Node(horizontal, vertical_index);
  }
  // Give everyone their right neighbor.
  for (int horizontal = 0; horizontal < width - 1; horizontal++) {
    row[horizontal].right_neighbor = &row[horizontal + 1];
  }
  // Give everyone their left neighbor.
  for (int horizontal = 1; horizontal < width; horizontal++) {
    row[horizontal].left_neighbor = &row[horizontal - 1];
  }
  return row;
}

Graph::Graph(const Graph& orig) {
}

Graph::~Graph() {
}