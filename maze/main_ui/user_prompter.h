/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   user_prompter.h
 * Author: jonathan
 *
 * Created on June 2, 2017, 6:33 AM
 */

#ifndef USER_PROMPTER_H
#define USER_PROMPTER_H

class User_Prompter {
public:
    User_Prompter();
    User_Prompter(const User_Prompter& orig);
    virtual ~User_Prompter();
    static void initial_prompt(int *width, int *length);
private:

};

#endif /* USER_PROMPTER_H */

