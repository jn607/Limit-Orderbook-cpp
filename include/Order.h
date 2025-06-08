#pragma once
#include <cstdint>
#include <chrono>

enum class Side { Buy, Sell };

struct Order {
    uint64_t id;
    Side side;
    double   price;
    uint64_t quantity;
    std::chrono::steady_clock::time_point timestamp;

    Order(uint64_t id_, Side side_, double price_, uint64_t qty_)
      : id(id_), side(side_), price(price_), quantity(qty_),
        timestamp(std::chrono::steady_clock::now()) {}
};