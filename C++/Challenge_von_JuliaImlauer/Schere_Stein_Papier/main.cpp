/*****************************************************************************************************************************
    File:           main.cpp
    Created by:     Thi Thanh Thao Tran
    Version:        1
    Date:           06.12.2023
    Description:
                 This file is one of the solution for the Linkdln coding challenge Schere-Stein-Papier
                 The TASKs was given by the Roboticist, ML Expert, AI Enthusiast Julia Imlauer!
******************************************************************************************************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <array>

void ausgabeGewinner(int int_com, int int_sp) {
    if (((int_com == 2) && (int_sp == 1)) || ((int_com == 3) && (int_sp == 2)))
        std::cout << "Es gewinnt Computer" << std::endl;
    else if (((int_com == 1) && (int_sp == 2)) || ((int_com == 3) && (int_sp == 1)))
        std::cout << "Es gewinnt Spieler" << std::endl;
    else
        std::cout << "Kein Gewinner" << std::endl;
}

//L�sung mit Anwendung von String
const std::string entscheiden(int input){
    std::string x;
    switch (input){
    case 1: x = "Schere";break;
    case 2: x = "Stein";break;
    default: x = "Papier";break;
    }
    return x;
}

int main()
{
    std::srand(std::time(0));
    int a, b = std::rand() % 3 + 1;;
    std::cout << "Geben Sie 1 fuer Schere, 2 fuer Stein, 3 fuer Papier: ";
    std::cin >> a;

    std::cout << "Der Spieler hat <"<< entscheiden(a) <<"> ausgewaehlt" << std::endl;
    std::cout << "Der Computer hat <"<< entscheiden(b) <<"> ausgewaehlt" << std::endl;
    ausgabeGewinner(a,b);
    return 0;
}
