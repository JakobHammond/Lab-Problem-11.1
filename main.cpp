//
//  main.cpp
//  p11-1
//
//  Created by Jakob Hammond on 11/9/23.
//

#include <iostream>
using namespace std;

const int ROWS = 13;
int findRowIndex(int thisRow);
int findSeatIndex(char thisSeat);
void displaySeatColumn(char seats[][ROWS], int column);
int requestedRow;
char requestedSeat;

int main(void){
    char seats[][ROWS] = {
        {'D', 'D', 'D', 'D', 'D', 'D', 'D', 'D', 'D', 'D', 'D', 'D', ' '},
        {'C', 'C', 'C', 'C', 'C', 'C', 'C', 'C', 'C', 'C', 'C', 'C', ' '},
        {'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B'},
        {'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A'}
    };

    
    
    
    while(true){
        for(int i = 0; i < 4; i++){
            displaySeatColumn(seats, i);
            cout << endl;
        }
        cout << endl << "Enter a seat or Q to quit: ";
        cin >> requestedRow >> requestedSeat;
        
        if(cin.fail()) break;
        
        
        if(findRowIndex(requestedRow) == -1 || findSeatIndex(requestedSeat) == -1) cout << "Sorry, no such seat exists on the CRJ 200.\n";
        else if(seats[findSeatIndex(requestedSeat)][findRowIndex(requestedRow)] == 'X') cout << "Sorry, this seat is already occupied.\n";
        else seats[findSeatIndex(requestedSeat)][findRowIndex(requestedRow)] = 'X';
        
        cout << endl;
    }
    
}

int findRowIndex(int thisRow){
    int row = thisRow - 1;
    if(row < 0 || row > 12) return -1;
    if(row == 12 && (findSeatIndex(requestedSeat) == 0 || findSeatIndex(requestedSeat) == 1)) return -1;
    else return row;
}
int findSeatIndex(char thisSeat){
    if(thisSeat == 'D') return 0;
    else if(thisSeat == 'C') return 1;
    else if(thisSeat == 'B') return 2;
    else if(thisSeat == 'A') return 3;
    else return -1;
}

void displaySeatColumn(char seats[][ROWS], int column){
    
    if(column == 2){
        cout << "\n                  1 1 1 1\n1 2 3 4 5 6 7 8 9 0 1 2 3\n\n";
    }
    for(int i = 0; i < ROWS; i++){
        cout << seats[column][i] << " ";
    }
    
}
