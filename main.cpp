#include <iostream>
#include <cmath>
int main() {
    double a, b, c;
    std::cout << "Shape:kseniya svidinskaya triangle" << std::endl;
    // Ввод стороны a
    do {
        std::cout << "Enter a > 0: ";
        std::cin >> a;
        if (std::cin.fail() || a <= 0) {
            std::cout << "must be positive number" << std::endl;
        }
    } while (a <= 0);
    // Ввод стороны b
    do {
        std::cout << "Enter b > 0: ";
        std::cin >> b;
        if (std::cin.fail() || b <= 0) {
            std::cout << "must be positive number" << std::endl;
        }
    } while (b <= 0);
    // Ввод стороны c
    do {
        std::cout << "Enter c > 0: ";
        std::cin >> c;
        if (std::cin.fail() || c <= 0) {
            std::cout << "must be positive number" << std::endl;
        }
    } while (c <= 0);
    // Проверка существования треугольника
    if (a + b <= c || a + c <= b || b + c <= a) {
        std::cout << "\nSuch a triangle does not exist!" << std::endl;
        return 1;
    }
    // Периметр
    double perimeter = a + b + c;
    // Площадь по формуле Герона
    double p = perimeter / 2;  // полупериметр
    double s = sqrt(p * (p - a) * (p - b) * (p - c));
    // Проверка на равнобедренность
    bool Isosceles = (a == b) || (a == c) || (b == c);

    std::cout << "\nResults:" << std::endl;
    std::cout << "Perimeter = " << perimeter << std::endl;
    std::cout << "Area = " << s << std::endl;
    
    if (Isosceles) {
        std::cout << "The triangle is isosceles" << std::endl;
    } else {
        std::cout << "The triangle is NOT isosceles" << std::endl;
    }

    return 0;
}
