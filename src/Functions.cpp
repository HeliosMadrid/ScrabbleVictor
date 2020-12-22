using namespace std;

#include <iostream>
#include "../headers/Functions.h"

void printGrid(int height, int width) {
    for(int i = 0; i <= height; i++) {
        for (int j = 0; j <+ width; j++) {
            cout << "___" << endl;
            cout << "| |" << endl;
            cout << "---" << endl;
        }
    }
}
int requestInt(string requestMSG) {
    int rep;
    cout << requestMSG << " :";
    cin >> rep;
    return rep;
}
