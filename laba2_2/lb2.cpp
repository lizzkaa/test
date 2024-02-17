
#include <iostream>
#include <cmath>

class tetrahedron {
    int a;

public:
    tetrahedron(int valueA)
    {
        setA(valueA);
    }

    void setA(int valueA) {
        a = valueA;
    }

    int getA() {
        return a;
    }

    float square_t() {
        return sqrt(3) * pow(a, 2);
    }
    float volume_t() {
        return (pow(a, 3) * sqrt(2)) / 12;
    }
    void print() {
        std::cout << "сторона:" << a << ", Площадь поверхности:" << square_t() << ", Объем" << volume_t();
    }
};

int main()
{
    setlocale(LC_ALL, "RUSSIAN");
    int x;
    std::cout << "Введите сторону тетраэдра:";
    std::cin >> x;
    tetrahedron a(x);
    a.square_t();
    a.print();
    system("pause");
}
