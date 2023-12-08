#include <iostream>

#include <fstream>
#include <sstream>
#include <array>

constexpr int numRows = 4;
constexpr int numCols = 4;

std::array < std::array < float, numCols >, numRows > matrix;

int main()
{

    std::ifstream file("numbers.csv");


    if (!file) {
        std::cerr << "Datei ist nicht lesbar !!";
        return 1;
    }

    for (unsigned int i=0; i<numRows; i++) {
        for (unsigned int j=0; j<numCols; j++) {    
            auto &row = matrix[i];
            file >> row[j];
            std::cout << row[j] << " ";
        }  
        std::cout << " " << std::endl;
    }

    //Calculate the Sums
    std::array <float, numRows> sumRows;
    std::array <float, numCols> sumCols;
    sumRows.fill(0.0f);
    sumCols.fill(0.0f);

    for (unsigned int i=0; i<size(sumRows); i++) {
        for (unsigned int j=0; j<size(sumCols); j++) {
            auto &row = matrix[i];
            sumRows[i] += row[j];
            sumCols[j] += row[j];
        }
    }

    //Display the Sums
    for (unsigned int i=0; i<size(sumRows); i++) {
        std::cout << "sumRows["<< i <<"] = " << sumRows[i];
        std::cout << std::endl;
    }

    for (unsigned int j=0; j<size(sumCols); j++) {
        std::cout << "sumCols["<< j <<"] = " << sumCols[j];
        std::cout << std::endl;
    }

    return 0;

}


