#include <bitset>
#include <cmath>
#include <iostream>
#include <stack>

int main() {
    uint number;
    std::cout << "Wpisz liczbę całkowitą:" << std::endl;

    std::cin >> number;

    // 1. Reprezentacja binarna
    std::bitset<8> bits(number);
    std::string bit_string = bits.to_string(); 

    std::cout << bit_string << std::endl;

    std::stack<char> bit_stack;
    for (char bit: bit_string){
        bit_stack.push(bit);
    }

    std::string reversed_bits;
    while (!bit_stack.empty()) {
        reversed_bits += bit_stack.top();
        bit_stack.pop();
    }

    std::cout << "Odwrotna reprezentacja binarna: " << reversed_bits << "\n";
    std::bitset<8> reversed_bitset(reversed_bits);
    
    int num = 0;
    for(int i = 0; i < 8; i++){
        if(reversed_bitset[i])
            num += std::pow(2, i);
    }

    std::cout << "Odwrócona liczba: " << num << std::endl;
    // albo tak
    std::cout << "Odwrócona liczba: " << reversed_bitset.to_ulong() << std::endl;
}
