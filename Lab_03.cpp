// Lab_03_1.cpp
// < Пушкаш Максим >
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 11


#include <iostream>
#include <cmath>  
using namespace std;

int main() {
    double x, A, B1, B2, y1, y2;

    
    cout << "Введіть значення x: ";
    cin >> x;

    
    A = 2 * fabs(5 - x);  

    
    if (x <= -1) {
        B1 = exp(fabs(2 + x));
    } else if (x > -1 && x < 1) {
        B1 = -pow(sin(1 / fabs(2 + x)), 2);
    } else {
        B1 = pow(cos(x), 2) / (1 + fabs(sin(x)));
    }

    
    y1 = A + B1;

    
    if (x <= -1) {
        B2 = exp(fabs(2 + x));
    } else {
        if (x > -1 && x < 1) {
            B2 = -pow(sin(1 / fabs(2 + x)), 2);
        } else {
            B2 = pow(cos(x), 2) / (1 + fabs(sin(x)));
        }
    }

    
    y2 = A + B2;

    
    cout << "Результат (скорочена форма): y = " << y1 << endl;
    cout << "Результат (повна форма): y = " << y2 << endl;

    return 0;
}



