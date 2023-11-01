#include "MatrixFunctions.h"

int main() {
    // random 5x5 matrix
    std::vector<std::vector<double>> A = {
            {3, 3, 0, 3, 0},
            {-3, 0, -2, 0, 0},
            {0, -1, 0, 0, -3},
            {0, 0, 0, 3, 3},
            {0, -1, 2, 0, 1}
    };

    // 5x5 identity matrix
    std::vector<std::vector<double>> I = MatrixFunctions::findInverse(A);

    // Print the result
    MatrixFunctions::print(I);

    return 0;
}