//
//  main.cpp
//  while
//
//  Created by Eira Isabel Cuartero on 10/20/19.
//  Copyright © 2019 Isabelle. All rights reserved.
//  Laboratory Exercise 006 Week 007
//  While loop task

#include <iostream>

using namespace std;

int main(){
    int row = 0;
    int col = 0;
    int height;

    std::cout << "Please enter number" << "\t" << ":";
    std::cin >> height;

// draw rows above base
    while (row < height - 1)
    {
        col = 1;
        while (col < height + row * 2)
        {
            ++col;
            if (col == height - row)
                cout << '*';
            else
            {
                if (col == height + row * 2)
                    cout << '*';

            }
        }
        cout << endl;
        ++row;
    }

// draw the base
    col = 0;

    while (col < height * 2 - 1)
    {
        cout << '*';
        ++col;
    }
    
    std::cout << "\n";
}


