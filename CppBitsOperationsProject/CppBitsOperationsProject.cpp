#include <iostream>
#include <bitset>

int main()
{
    /*
    int a{ 180 };
    int b{ 109 };

    std::cout << "a = " << a << " " << std::bitset<8>(a) << "\n";
    std::cout << "b = " << b << " " << std::bitset<8>(b) << "\n";

    std::cout << "a & b = " << (a & b) << " " << std::bitset<8>(a & b) << "\n";
    std::cout << "a | b = " << (a | b) << " " << std::bitset<8>(a | b) << "\n";
    std::cout << "a ^ b = " << (a ^ b) << " " << std::bitset<8>(a ^ b) << "\n";
    std::cout << "~a = " << (~a) << " " << std::bitset<8>(~a) << "\n";

    std::cout << "a << 2 = " << (a << 2) << " " << std::bitset<16>(a << 2) << "\n";
    std::cout << "a >> 4 = " << (a >> 4) << " " << std::bitset<16>(a >> 4) << "\n";
    */

    int a{ 60 };
    std::cout << "a << 1 = " << (a << 1) << " " << std::bitset<16>(a << 1) << "\n";
    std::cout << "a << 2 = " << (a << 2) << " " << std::bitset<16>(a << 2) << "\n";
    std::cout << "a << 3 = " << (a << 3) << " " << std::bitset<16>(a << 3) << "\n";
    std::cout << "a << 4 = " << (a << 4) << " " << std::bitset<16>(a << 4) << "\n";

    std::cout << "a >> 1 = " << (a >> 1) << " " << std::bitset<16>(a >> 1) << "\n";
    std::cout << "a >> 2 = " << (a >> 2) << " " << std::bitset<16>(a >> 2) << "\n";
    std::cout << "a >> 3 = " << (a >> 3) << " " << std::bitset<16>(a >> 3) << "\n";
    std::cout << "a >> 4 = " << (a >> 4) << " " << std::bitset<16>(a >> 4) << "\n";
}
