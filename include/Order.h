#pragma once // Ensures headers are included only once per TU
#include <cstdint> // Pulls in defs for fixed-width int types
#include <chrono> // Pulls in time-point machinery

enum class Side // Define a scoped enum Side
{ 
    Buy,
    Sell
};

struct Order { // Declares a POD-style type Order whose instances live in contiguous 
                // memory (fields laid out in order)
    uint64_t id; // 8 byte unsigned integer
    Side side; // enum Buy or Sell
    double price; // 8-byte floating point for limit price
    uint64_t quantity; // 8-byte unsigned int. How many units to trade.
    std::chrono::steady_clock::time_point timestamp; 
    // Composite type holding a monotonically increasing clock tick

    Order(uint64_t id_, Side side_, double price_, uint64_t qty_)
      : id(id_), side(side_), price(price_), quantity(qty_),
        timestamp(std::chrono::steady_clock::now()) {}
    // Constructor: takes parameters by value, initialises in the order listed, 
    // calls the clock at runtime, storing a snapshot

    // 32-40 bytes struct
};