//
//  main.cpp
//  p11-1
//
//  Created by Jakob Hammond on 11/9/23.
//

#include <iostream>
using namespace std;

const int ROWS = 12;
int findRowIndex(int thisRow);
int findSeatIndex(char thisSeat);
void displaySeatColumn(char seats[][ROWS], int column);

int main(void){
    char seats[][ROWS] = {
        {'D', 'D', 'D', 'D', 'D', 'D', 'D', 'D', 'D', 'D', 'D', 'D'},
        {'C', 'C', 'C', 'C', 'C', 'C', 'C', 'C', 'C', 'C', 'C', 'C'},
        {'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B'},
        {'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A'}
    };
    
    displaySeatColumn(seats, 1);
    cout << endl;
    displaySeatColumn(seats, 2);
    cout << endl;
    displaySeatColumn(seats, 3);
    cout << endl;
    displaySeatColumn(seats, 4);
    cout << endl << "Enter a seat or Q to quit: "
}

void displaySeatColumn(char seats[][ROWS], int column){
    
    for(int i = 0; i < ROWS; i++){
        cout << seats[column - 1][i] << " ";
    }
}
