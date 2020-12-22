using namespace std;

#include <iostream>
#include "headers/Functions.h"

int height = 0, width = 0;

int main() {
    height = requestInt("Qu'elle va être la hauteur de la grille ? >>");
    width = requestInt("Qu'elle va etre la largeur de la grille ? >>");

    printGrid(height, width);

    cin.ignore();

    return 0;
}


