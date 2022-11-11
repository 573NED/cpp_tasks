#include <iostream>

using namespace std;
int main() {
    int n, k, i, t;
    cout << "введите количество чисел : ";
    cin >> n;
    int a[n]; // обозначение массива чисел
    cout << "перечислите числа через пробел : ";
    for(i = 0; i < n; i++)  
        cin >> a[i]; // ввод массива
    cout << "введите шаг сдвига : ";
    cin >> k;

    for(int i = 0; i <= k; i++){
        t = a[n-1];
        for (int j = n-2; j>=0; j--)
            a[j+1] = a[j];
        a[0] = t;
    }

    for(i = 0; i < n; i ++)  
        cout <<a[i]<<" "; // вывод массива
}