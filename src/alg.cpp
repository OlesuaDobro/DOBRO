// Copyright 2022 NNTU-CS

#include "alg.h"

bool checkPrime(uint64_t value) { // функция для проверки является ли число простым
    bool isPrime = true;
    if (value < 1) {
        isPrime = false;
    } else {
        for (int i = 2; i < value / 2; i++) {
            if (value % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    return isPrime;
}

uint64_t nPrime(uint64_t n){ // функция для нахождения n-го простого числа

    uint64_t pos = 0;
    for (uint64_t i = 2; i < 1000; i++) {
        if (checkPrime(i) == true)
        {
            pos++;
        }
        if (pos == n) {
            return i;
        }
    }
    return 000;
}

uint64_t nextPrime(uint64_t value) { // функция для нахождения следующего простого числа после переданного числа value

    for (uint64_t i = value + 1; i < 1000; i++) {
        if (checkPrime(i) == true) {
            return i;
        }
    }
    return 1;
}

uint64_t sumPrime(uint64_t hbound) { // функция для суммирования простых чисел в пределах от 1 до переданного числа hbound

    uint64_t summa = 0;
    for (uint64_t i = 1; i <= hbound; i++) {
        if (checkPrime(i) == true) {
            summa += i;
        }
    }
    return summa;
}
