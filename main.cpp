using namespace std;

#include <iostream>
#include "headers/Functions.h"

int main() {
    printGrid(requestInt("Qu'elle va être la hauteur de la grille ? >>"), requestInt("Qu'elle va etre la largeur de la grille ? >>"));
    cin.ignore();

    return 0;
}


