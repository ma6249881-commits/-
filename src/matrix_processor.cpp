#include "matrix_processor.h"
#include "math_utils.h"

// Сумма элементов побочной диагонали, делящихся на 3
int sumSecondaryDiagonalDiv3(int** matrix, const int n) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        // Элементы побочной диагонали находятся по индексу [i][n-1-i]
        int element = matrix[i][n - 1 - i];
        if (isDivisibleBy3(element)) {
            sum += element;
        }
    }
    return sum;
}

// Замена элементов ниже побочной диагонали
void replaceBelowSecondaryDiagonal(int** matrix, const int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            // Условие нахождения ниже побочной диагонали: i + j > n - 1
            if (i + j > n - 1) {
                matrix[i][j] = sumDigits(matrix[i][j]);
            }
        }
    }
}
