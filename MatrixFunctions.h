//
// Created by Felicia Chen on 10/26/23.
//

#ifndef LINEARALGEBRAMATRIXINVERSECALCULATOR_MATRIXFUNCTIONS_H
#define LINEARALGEBRAMATRIXINVERSECALCULATOR_MATRIXFUNCTIONS_H
#include <iostream>
#include <vector>
#include <iomanip>

class MatrixFunctions {
private:
    static std::vector<std::vector<double>> createIdentityMatrix(int size);
    static int getSize(std::vector<std::vector<double>>& matrix);
public:
    static void print(std::vector<std::vector<double>>& matrix);
    static std::vector<std::vector<double>> findInverse(std::vector<std::vector<double>>& A);
};

#endif //LINEARALGEBRAMATRIXINVERSECALCULATOR_MATRIXFUNCTIONS_H
