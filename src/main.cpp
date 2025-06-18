#include "OrderBook.h"
#include <iostream>
#include <string>
#include <sstream>

void printHelp() {
    std::cout << "Available commands:\n";
    std::cout << "help - print this help message\n";
    std::cout << "add <side> <price> <quantity> - add an order to the order book\n";
    std::cout << "print - print the order book\n";
    std::cout << "quit - exit the program\n";
}

int main() {
    OrderBook book;
}