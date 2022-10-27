// Дано 100 вещественных чисел. Определить, образуют ли они возрастающую последовательность.
#include <iostream>
using namespace std;
int main() {
    int m[10];
    int minIn = 0;
    int maxIn = 0;
    int minVal = 10000;
    int maxVal = 0;
    int i, s = 0;
    cout << "перечислите числа через пробел : ";
    for(i = 0; i < 10; i ++)  
        cin >> m[i]; // ввод массива
    for(i = 0; i < 10; i ++) {
        if (m[i] > maxVal) { 
            maxVal = m[i]; // поиск максимального числа
            maxIn = i; // индекс максимального числа
        }
        if (m[i] < minVal) { 
            minVal = m[i]; // поиск минимального числа
            minIn = i; // индекс минимального числа
        }
    }

    for (int i = minIn; i < maxIn+1; i++) {
        s = s + m[i];
    }

    cout << "сумма чисел = "<< s;
}