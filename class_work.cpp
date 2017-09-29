#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;


int main() {
// Вывод числа Пи, округленного до сотых:
    double roundNumPi = M_PI;
    std::cout << "1) Number pi rounded to hundredths:" <<
                 std::setprecision(3) << roundNumPi << std::endl;
    std::cout << "--" << std::endl;

// Вывод чисел 1/13/49 c одним пробелом между ними:
    std::cout << "2) 1 13 49" << std::endl;
    std::cout << "--" << std::endl;

// Вывод чисел 1/13/49 разделенные заданым символом:
    char settedString;
    std::cout << "Enter the delimiter: ";
    std::cin >> settedString;
    std::cout << "3) 1" << settedString << "13" << settedString << "49" << std::endl;
    std::cout << "--" << std::endl;

// Вывод трех любых чисел с двумя пробелами между ними:
// Как в с++ делать рэндом?(трэвис ругается на rand())
    std::cout << "4) " << "21  42  47" << std::endl;
    std::cout << "--" << std::endl;

// Вычисление значения функции1:
    double a;
    std::cout << "Enter the changeable parameter 'a': ";
    std::cin >> a;
    double x = 12*pow(a, 2) + 7*a - 12;
    std::cout << "5) Value of 'x = 12"<< a << "^2 - 7" << a << " - 12' is: "<< x << std::endl;
// Вычисление значения функции2:
    std::cout << "Enter the changeable parameter 'х': ";
    std::cin >> x;
    double y = 3*pow(x, 3) + 4*pow(x, 3) - 11*x + 1;
    std::cout << "5) Value of 'y = 3"<< x <<"^3 + 4" << x << "^2 + 1' is: " << y << std::endl;
    std::cout << "--" << std::endl;

// Определение плотности по объему и массе:
    double volume, weight;
    std::cout << "Enter volume: ";
    std::cin >> volume;
    std::cout << "Enter weight: ";
    std::cin >> weight;
    std::cout << "6) Body density is " << weight*volume << std::endl;
    std::cout << "--" << std::endl;

// Решение квадратного уравнения:
    std::cout << "Then enter first argument 'a': ";
    std::cin >> a;
    double b;
    std::cout << "Then enter second argument 'b': ";
    std::cin >> b;
    x = (-b) / a;
    std::cout << "7) The solution of equation '"<< a << "x + " << b << "' is: " << x << std::endl;
    std::cout << "--" << std::endl;

// Длина между двумя точками:
    double ax;
    std::cout << "Enter A(x): ";
    std::cin >> ax;
    double ay;
    std::cout << "Enter A(y): ";
    std::cin >> ay;
    double bx;
    std::cout << "Enter B(x): ";
    std::cin >> bx;
    double by;
    std::cout << "Enter B(y): ";
    std::cin >> by;
    double lengthBtwAB = sqrt(pow((bx-ax), 2) + pow((by-ay), 2));
    std::cout << "8) The length between A(x, y) and B(x, y) is: " << lengthBtwAB << std::endl;
    std::cout << "--" << std::endl;

// Нахождение периметра равнобедренной трапеции:
    double firstSide;
    std::cout << "Enter first side: ";
    std::cin >> firstSide;
    double secondSide;
    std::cout << "Enter second side: ";
    std::cin >> secondSide;
    double height;
    std::cout << "Enter height: ";
    std::cin >> height;
    double rib = abs(firstSide-secondSide)/2;
    rib = sqrt(pow(rib, 2) + pow(height, 2));
    double perimeter;
    perimeter = rib * 2 + a + b;
    std::cout << "9) The perimeter of an isosceles trapezoid is: " <<
                 std::setprecision(3) << perimeter << std::endl;
    std::cout << "--" << std::endl;

// Нахождение площади кольца:
    double radiusBig;
    std::cout << "Enter bigger R: ";
    std::cin >> radiusBig;
    double radiusSmall;
    std::cout << "Enter smaller r: ";
    std::cin >> radiusSmall;
    std::cout << "10) The area of ring is: " << std::setprecision(3) <<
              M_PI * pow(radiusBig, 2) - M_PI * pow(radiusSmall, 2) << std::endl;
    std::cout << "--" << std::endl;

// Нахождение объема квадрата:
    double squareSide;
    std::cout << "Enter side of square: ";
    std::cin >> squareSide;
    volume = pow(squareSide, 3);
    double squareArea = 4 * pow(squareSide, 2);
    std::cout << "11) The volume of square is: " << volume <<
              ". Amd the area of the square is: " << squareArea << std::endl;
    std::cout << "--" << std::endl;

// Периметр квадрата:
    std::cout << "Enter side of square: ";
    std::cin >> squareSide;
    std::cout << "12) The perimeter of the square is: "<< 4*squareSide << std::endl;
    std::cout << "--" << std::endl;

// Нахождение диаметра круга
    double radiusCircle;
    std::cout << "Enter r of circle: ";
    std::cin >> radiusCircle;
    std::cout << "13) The diameter of the circle is: "<< 2*radiusCircle << std::endl;
    std::cout << "--" << std::endl;
    return 0;
}
