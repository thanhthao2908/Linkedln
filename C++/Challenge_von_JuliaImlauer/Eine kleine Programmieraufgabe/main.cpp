/*****************************************************************************************************************************
    File:           main.cpp
    Created by:     Thi Thanh Thao Tran
    Version:        1
    Date:           05.12.2023
    Description:
                 This file is one of the solution for the Linkdln coding challenge.
                 The TASKs was given by the Roboticist, ML Expert, AI Enthusiast Julia Imlauer!
******************************************************************************************************************************/
#include <iostream>

using namespace std;

void ausgabeMeinArray (char array[], int l){
    for (int i = 0; i < l; i++){
        std::cout << array[i];
    }
}
float multiplikation (float var_1, float var_2){
    var_2 += 2;
    return var_1 * var_2;
}

bool vergleich (int a, int b, int c){
    if ((a < b) && (b < c))
        return 1;
    else
        return 0;
}

int main()
{
    char array[] = "My birthday is 29.08.1996";
    int l = sizeof(array)/sizeof(char);
    ausgabeMeinArray(array,l);
    std::cout<< "" <<std::endl;

    float var_3 = multiplikation(2.5, 2);
    std::cout << var_3 << std::endl;

    int wert = vergleich(1,3,2);
    if (wert)
    std::cout << "true" << std::endl;
    else std::cout << "false" << std::endl;

    return 0;
}
