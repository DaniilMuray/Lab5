//
// Created by Legion on 6/1/2023.
//

#include "TIntNumber.h"


TIntNumber::TIntNumber() : value(0) {}

void TIntNumber::setValue(int val) {
    value = val;
}

int TIntNumber::getValue() const {
    return value;
}

void TIntNumber::input() {
    std::cout << "Enter an integer number: ";
    std::cin >> value;
}

void TIntNumber::output() const {
    std::cout << "Value: " << value << std::endl;
}

void TIntNumber::add(const TIntNumber& other) {
    value += other.getValue();
}

int TIntNumber::compare(const TIntNumber& other) const {
    if (value < other.getValue())
        return -1;
    else if (value == other.getValue())
        return 0;
    else
        return 1;
}

std::string TIntNumber::convertToBase(int base) const {
    std::string result;
    int num = value;

    if (num == 0)
        return "0";

    while (num > 0) {
        int digit = num % base;
        result = std::to_string(digit) + result;
        num /= base;
    }

    return result;
}

void TIntNumber2::input() {
    std::cout << "Enter a binary number: ";
    std::string binaryStr;
    std::cin >> binaryStr;
    value = std::stoi(binaryStr, nullptr, 2);
}

void TIntNumber2::output() const {
    std::cout << "Binary Value: " << convertToBase(2) << std::endl;
}

void TIntNumber8::input() {
    std::cout << "Enter an octal number: ";
    std::string octalStr;
    std::cin >> octalStr;
    value = std::stoi(octalStr, nullptr, 8);
}

void TIntNumber8::output() const {
    std::cout << "Octal Value: " << convertToBase(8) << std::endl;
}
