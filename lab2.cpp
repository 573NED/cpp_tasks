// Даны натуральное n и вещественные числа x1, y1, x2, y2,…,xn, yn. Рассматривая пары xi, yi как координаты точек на плоскости, определить радиус наименьшего круга (с центром в начале координат), внутрь которого попадают все эти точки.
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n, i;
    double x, y, t, min = 0;
    cout << "введите n: ";
    cin >> n;
    for(i = 0; i < n; i ++)  {
        cout << "\nвведите x[" << i << "] = ";
        cin >> x;
        cout << "введите y[" << i << "] = ";
        cin >> y;
            t = sqrt(x*x+y*y);
            if (t > min)
                min = t;
    }
    cout << "радиус наименьшего круга  = " << min;
}