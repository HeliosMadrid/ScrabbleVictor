using namespace std;

#include <iostream>
#include "../headers/Functions.h"

void printGrid(int height, int width) {
    cout << endl;
    for(int j = 0; j < width; j++) {
        cout << "   " << j + 1 << "  ";
    }
    for(int i = 0; i < height; i++) {
        cout << endl;
        for (int j = 0; j < width; j++) {
            cout << "  ___ ";
        }
        cout << endl;
        for (int j = 0; j < width; j++) {
            if(j == 0) {
                cout << i + 1 << " | | ";
            } else {
                cout << "  | | ";
            }
        }
        cout << endl;
        for (int j = 0; j < width; j++) {
            cout << "  --- ";
        }
    }
}
int requestInt(string requestMSG) {
    int rep;
    cout << requestMSG << " :";
    cin >> rep;
    return rep;
}


