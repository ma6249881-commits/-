#ifndef MATH_UTILS_H
#define MATH_UTILS_H

/**
 * @brief Вычисляет рекурсивную сумму цифр числа.
 * @param number Число, сумму цифр которого нужно найти.
 * @return Сумма цифр числа (для отрицательных чисел берется модуль).
 */
int sumDigits(int number);

/**
 * @brief Проверяет, делится ли число на 3.
 * @param number Проверяемое число.
 * @return true, если число делится на 3 без остатка, иначе false.
 */
bool isDivisibleBy3(int number);

#endif // MATH_UTILS_H
