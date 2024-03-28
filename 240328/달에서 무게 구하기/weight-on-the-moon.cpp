#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.
    std::cout << std::fixed;
    std::cout.precision(6);
    int a = 13;
    double b = 0.165;
    std::cout << a << " * " << b << " = " << a * b;
    return 0;
}