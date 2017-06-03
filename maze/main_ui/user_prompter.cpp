/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   user_prompter.cpp
 * Author: jonathan
 * 
 * Created on June 2, 2017, 6:33 AM
 */

#include "user_prompter.h"
#include <cstdlib>
#include <iostream>

using namespace std;

User_Prompter::User_Prompter() {
}

User_Prompter::User_Prompter(const User_Prompter& orig) {
}

User_Prompter::~User_Prompter() {
}

void User_Prompter::initial_prompt(int *width, int *length) {
  cout << "Enter desired width: " << endl;
  cin >> *width;
  cout << "Enter desired length: " << endl;
  cin >> *length;
}
