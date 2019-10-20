//
//  for.cpp
//  for
//
//  Created by Eira Isabel Cuarter on 10/18/19.
//  Copyright © 2019 Isabelle. All rights reserved.
//  Week 007 Laboratory Exercise 006
// Problem 2

#include <iostream>

using namespace std;

int main() {
    int height;
    
    std::cout << "Please enter height" << "\t" << ":";
    std::cin >> height;
    
    for (int row=1;row<=height;row++){ //for rows
        for (int col=1;col<=row;col++){ //for column
            std::cout << "*" ;
            
            
        }
        std::cout << endl;
    }
    
    return 0;
}
