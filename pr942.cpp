#include <iostream>

int main() {
    int a;
    std::cout << "Vvedit' nomer palcya'(1-5): ";
    std::cin >> a;
    if (a== 1) {
        std::cout << "Velikiy\n";
    } else if (a == 2) {
        std::cout << "Ukazatelniy\n";
    } else if (a == 3) {
        std::cout << "Seredniy\n";
    } else if (a== 4) {
        std::cout << "Bezimyanniy\n";
    } else if (a == 5) {
        std::cout << "Mizinec\n";
    } else {
        std::cout << "Pomilka\n";
    }

    return 0;
