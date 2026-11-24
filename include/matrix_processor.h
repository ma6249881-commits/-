#ifndef MATRIX_PROCESSOR_H
#define MATRIX_PROCESSOR_H

/**
 * @brief Вычисляет сумму элементов побочной диагонали, которые делятся на 3.
 * @param matrix Указатель на матрицу.
 * @param n Размер матрицы.
 * @return Сумма подходящих элементов.
 */
int sumSecondaryDiagonalDiv3(int** matrix, const int n);

/**
 * @brief Заменяет элементы ниже побочной диагонали на сумму их цифр.
 * @param matrix Указатель на матрицу.
 * @param n Размер матрицы.
 */
void replaceBelowSecondaryDiagonal(int** matrix, const int n);

#endif // MATRIX_PROCESSOR_H
