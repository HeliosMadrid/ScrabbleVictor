#include "../headers/Case.h"
#include <iostream>

using namespace std;

Case::Case() {

}

void Case::printCase() {
    cout << " ___ " << endl;
    cout << " |" << this -> value << "| " << endl;
    cout << " --- " << endl;
}

void Case::setValue(char value) {
    this->value = value;
}
