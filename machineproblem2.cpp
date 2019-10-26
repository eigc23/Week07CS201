//
//  machineproblem2.cpp
//  machineproblem2
//
//  Created by Eira Isabel Cuartero on 10/26/19.
//  Copyright © 2019 Isabelle. All rights reserved.
//  Oct. 26, 2019
// Machine Problem 002

#include <iostream>
#include <iomanip>

using namespace std;


int main() {


    int seatNum[5][7] = {{1,2,3,4,5,6,7},{8,9,10,11,12,13,14},{15,16,17,18,19,20,21},{22,23,24,25,26,27,28},{29,30,31,32,33,34,35}};
    int reserveSeatNum = 0;
    int i, j;
    int temp[5][7] = {0};
    
    userInput:

    std::cout << "\n" << "\n";
    cout << "          --SEATS AVAILABLE--          " << "\n" << endl;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 7; j++) {
            cout << setw(5) << seatNum[i][j];
        }
        cout << endl;
    }

    cout << "_______________________________________" << endl;

    //accepts user input
    cout << "Enter seat number to reserve:" << "\t";
    cin >> reserveSeatNum;

    //check if input is zero
    if (reserveSeatNum != 0) {

    //prompt if seat is taken
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 7; j++) {
            if (reserveSeatNum == temp[i][j]) {
                    cout << "\n" << "\n" << "Sorry, seat is already taken. Please try again." << endl << endl;
            }
        }
    }

    //update selected seat number to zero
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 7; j++) {
            if (reserveSeatNum == seatNum[i][j]) {
                    temp[i][j] = seatNum[i][j];
                    seatNum[i][j] = 0;
                cout << "\n" << "\n" << "Seat sucessfully reserved." << "\n" << endl << endl;
            }
        }
    }

    //prompt if invalid seat number
        if ((reserveSeatNum = 0 || reserveSeatNum > 35)) {
        cout << "\n" << "\n" << "Error: You entered an invalid seat number." << endl << endl;
    }
    }
    else {
        cout << "\n" << "\n" << "Error: You entered an invalid seat number." << endl << endl;
    }
    
    goto userInput;
    
}
