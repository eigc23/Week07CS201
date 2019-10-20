//
//  dowhile.m
//  dowhile
//
//  Created by Eira Isabel Cuartero on 10/18/19.
//  Copyright © 2019 Isabelle. All rights reserved.
//  Laboratory Exercise 006 Week 007
//  Do While Loop Task 3

#include <limits>
#include <cstring>
#include <float.h>
#include <cstdio>
#include <cstdlib>
#include <iostream>


using namespace std;

int main() {
    int n;

    std::cout << "Please enter a number" << "\t";
    std::cin >> n;

    int x, s;
    int y = 0;

    do {

        x = n - y;
        s = 0;
        if (y != 0) {
            do {
                std::cout << " ";
                ++s;
            } while (s < y);
        }

        if (x != 0) {
            do {
                std::cout << "*" << " ";
                x--;
            } while (x > 0);
        }


        std::cout << endl;
        y++;
    } while (y <= n);

    std::cin.get();
    return 0;
}
