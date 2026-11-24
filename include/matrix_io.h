#ifndef MATRIX_IO_H
#define MATRIX_IO_H

/**
 * @brief Создает динамическую квадратную матрицу размером n x n.
 * @param n Размер матрицы.
 * @return Указатель на массив указателей (двумерный массив).
 */
int** createMatrix(const int n);

/**
 * @brief Освобождает память, выделенную под матрицу.
 * @param matrix Указатель на матрицу.
 * @param n Размер матрицы.
 */
void deleteMatrix(int** matrix, const int n);

/**
 * @brief Вводит элементы матрицы с клавиатуры с обработкой ошибок.
 * @param matrix Указатель на матрицу.
 * @param n Размер матрицы.
 */
void inputMatrix(int** matrix, const int n);

/**
 * @brief Выводит элементы матрицы на экран.
 * @param matrix Указатель на матрицу.
 * @param n Размер матрицы.
 */
void printMatrix(int** matrix, const int n);

#endif // MATRIX_IO_H
