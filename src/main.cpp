#include <iostream>
#include <limits>
#include "matrix_io.h"
#include "matrix_processor.h"

int main() {
    // Установка локали для корректного отображения кириллицы (опционально)
    setlocale(LC_ALL, "Russian");

    int n = 0;
    
    // 1. Запрос размера матрицы с обработкой ошибок
    std::cout << "Введите размер квадратной матрицы n: ";
    while (true) {
        if (std::cin >> n && n > 0) {
            break;
        }
        std::cout << "Ошибка! Введите целое положительное число: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    // 2. Создание динамической матрицы
    int** matrix = createMatrix(n);

    // 3. Ввод матрицы с клавиатуры
    std::cout << "\nВведите элементы матрицы " << n << "x" << n << ":\n";
    inputMatrix(matrix, n);

    // 4. Вывод исходной матрицы
    std::cout << "\n--- Исходная матрица ---\n";
    printMatrix(matrix, n);

    // 5. Вычисление суммы элементов побочной диагонали, делящихся на 3
    int sum = sumSecondaryDiagonalDiv3(matrix, n);

    // 6. Замена элементов ниже побочной диагонали на сумму их цифр
    replaceBelowSecondaryDiagonal(matrix, n);

    // 7. Вывод измененной матрицы
    std::cout << "\n--- Измененная матрица ---\n";
    printMatrix(matrix, n);

    // 8. Вывод суммы
    std::cout << "\nСумма элементов побочной диагонали, делящихся на 3: " << sum << "\n";

    // 9. Освобождение памяти
    deleteMatrix(matrix, n);

    return 0;
}
