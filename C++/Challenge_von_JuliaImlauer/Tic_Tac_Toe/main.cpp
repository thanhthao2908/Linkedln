/*****************************************************************************************************************************
    File:           main.cpp
    Created by:     Thi Thanh Thao Tran
    Version:        1
    Date:           14:40 08.12.2023
    Description:
                 This file is one of the solution for the Linkdln coding challenge Tic_Tac_Toe
                 The TASKs was given by the Roboticist, ML Expert, AI Enthusiast Julia Imlauer!
******************************************************************************************************************************/


#include <iostream>
#include <array>

char zeichenWandler (int input){
    if (input == 0)
        return ' ';
    else if (input == 1)
        return 'x';
    else
        return 'o';
}

void ausgabeSpielFeld (int array[]){
    std::cout << zeichenWandler(array[0]) << " | " << zeichenWandler(array[1]) << " | " << zeichenWandler(array[2]) << std::endl;
    std::cout << "-----------" << std::endl;
    std::cout << zeichenWandler(array[3]) << " | " << zeichenWandler(array[4]) << " | " << zeichenWandler(array[5]) << std::endl;
    std::cout << "-----------" << std::endl;
    std::cout << zeichenWandler(array[6]) << " | " << zeichenWandler(array[7]) << " | " << zeichenWandler(array[8]) << std::endl;

}

bool gewinnabfrage (int array[]){
    // Zeilen abfrage
    if ((array[0] == array[1]) && (array[1] == array[2]) && array[0] != 0)
        return 1;
    else if ((array[3] == array[4]) && (array[4] == array[5]) && array[3] != 0)
        return 1;
    else if ((array[6] == array[7]) && (array[7] == array[8]) && array[6] != 0)
        return 1;
    // Spalten abfragen
    else if ((array[0] == array[3]) && (array[3] == array[6]) && array[0] != 0)
        return 1;
    else if ((array[1] == array[4]) && (array[4] == array[7]) && array[1] != 0)
        return 1;
    else if ((array[2] == array[5]) && (array[5] == array[8]) && array[2] != 0)
        return 1;
    // Diagonalen abfragen
    else if ((array[2] == array[4]) && (array[4] == array[6]) && array[2] != 0)
        return 1;
    else if ((array[0] == array[4]) && (array[4] == array[8]) && array[0] != 0)
        return 1;

    else
        return 0;
}

int main()
{
    // Intialisieren des Arrays
    int array[9] = {};
    bool spiel_fortsetzen = true;

    while (spiel_fortsetzen){

        // Spielzug Spieler 1
        ausgabeSpielFeld(array);

        // Spieler 1 auffordern, sein x zu setzen
        std::cout << "Spieler 1: Feld? ";
        int wahl_1;
        std::cin >> wahl_1;

        // Überprüfen ob das Feld besetzt ist
        if (zeichenWandler(array[wahl_1]) != ' '){
            std::cout << "Diese Feld ist besetzt! andere Feld? ";
            std::cin >> wahl_1;
        }

        // Spieler 1 = Kreuz = Wert 1
        array[wahl_1] = 1;

        // Überprüfen ob Spieler 1 gewonnwn ist
        bool sieger_1 = gewinnabfrage(array);
        if (sieger_1){
            std::cout << "Gewinner 1" << std::endl;
            ausgabeSpielFeld(array);
            spiel_fortsetzen = false;
        }

        // Spielzug Spieler 2 nur dann wenn Spieler 1 nicht gewonnen hat
        if (spiel_fortsetzen){
            ausgabeSpielFeld(array);

            // Spieler 2 auffordern, sein o zu setzen
            std::cout << "Spieler 2: Feld? ";
            int wahl_2;
            std::cin >> wahl_2;

            // Überprüfen ob das Feld besetzt ist
            if (zeichenWandler(array[wahl_2]) != ' '){
                std::cout << "Diese Feld ist besetzt! andere Feld? ";
                std::cin >> wahl_2;
            }
            array[wahl_2] = 2;

            // Spieler 2 = Kreis = Wert 2
            bool sieger_2 = gewinnabfrage(array);
            if (sieger_2){
                std::cout << "Gewinner 2" << std::endl;
                ausgabeSpielFeld(array);
                spiel_fortsetzen = false;
            }
        }
    }
    return 0;
}
