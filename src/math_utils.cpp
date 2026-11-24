#include "math_utils.h"
#include <cmath> // Для std::abs

// Рекурсивное вычисление суммы цифр
int sumDigits(int number) {
    int absNum = std::abs(number); // Берем модуль для отрицательных чисел
    
    // Базовый случай рекурсии
    if (absNum < 10) {
        return absNum;
    }
    
    // Рекурсивный случай: последняя цифра + сумма цифр остального числа
    return (absNum % 10) + sumDigits(absNum / 10);
}

// Проверка делимости на 3
bool isDivisibleBy3(int number) {
    return (number % 3 == 0);
}
