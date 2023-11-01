//
// Created by Felicia Chen on 10/26/23.
//

#include "MatrixFunctions.h"

//iterates through each row and column to print every element in the matrix
void MatrixFunctions::print(std::vector<std::vector<double>> &matrix) {
    int size = getSize(matrix);

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            std::cout << std::setw(10) << std::fixed << std::setprecision(6) << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

std::vector<std::vector<double>> MatrixFunctions::findInverse(std::vector<std::vector<double>> &A) {
    int size = getSize(A);
    auto I = createIdentityMatrix(size);

    //iterates through every row
    for (int i = 0; i < size; ++i) {
        // making the element in the diagonal to be 1
        double elem = A[i][i];
        for (int j = 0; j < size; ++j) {
            A[i][j] /= elem;
            I[i][j] /= elem;
        }

        // eliminate #'s by using elem to create 0's in every other position in the column
        for (int k = 0; k < size; ++k) {
            if (k != i) {
                double factor = A[k][i];
                for (int j = 0; j < size; ++j) {
                    A[k][j] -= factor * A[i][j];
                    I[k][j] -= factor * I[i][j];
                }
            }
        }
    }
    return I;
}

//takes a size and returns a square identity matrix of that size
std::vector<std::vector<double>> MatrixFunctions::createIdentityMatrix(int size) {
    std::vector<std::vector<double>> identity(size, std::vector<double>(size, 0.0));

    for (int i = 0; i < size; ++i) {
        identity[i][i] = 1;
    }
    return identity;
}

//returns the size of a matrix
int MatrixFunctions::getSize(std::vector<std::vector<double>> &matrix) {
    return matrix.size();
}
