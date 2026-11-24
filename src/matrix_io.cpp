#include "matrix_io.h"
#include <iostream>
#include <limits>

// Создание динамической матрицы
int** createMatrix(const int n) {
    int** matrix = new int*[n];
    for (int i = 0; i < n; ++i) {
        matrix[i] = new int[n];
    }
    return matrix;
}

// Освобождение памяти
void deleteMatrix(int** matrix, const int n) {
    for (int i = 0; i < n; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;
}

// Ввод матрицы с защитой от некорректного ввода
void inputMatrix(int** matrix, const int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            while (true) {
                std::cout << "matrix[" << i << "][" << j << "] = ";
                if (std::cin >> matrix[i][j]) {
                    break; // Успешный ввод
                } else {
                    std::cout << "Ошибка! Пожалуйста, введите целое число.\n";
                    std::cin.clear(); // Сброс флага ошибки
                    // Очистка буфера ввода
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                }
            }
        }
    }
}

// Вывод матрицы на экран
void printMatrix(int** matrix, const int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << matrix[i][j] << "\t";
        }
        std::cout << "\n";
    }
}
