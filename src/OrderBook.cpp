#include "OrderBook.h"
#include <iostream>

// Define member function so linker knows how to implement it.
void OrderBook::add_order(const Order& o) { // Define add_order function as part of the OrderBook class
    // for now, just insert every order into the correct side
    if (o.side == Side::Buy) {
        bids[o.price].push_back(o); //FIFO
        std::cout << "Added Buy@" << o.price << " q=" << o.quantity << "\n";
    } else {
        asks[o.price].push_back(o); //FIFO
        std::cout << "Added SELL@" << o.price << " q=" << "\n";
    }
}