#pragma once //prevents double inclusion
#include "Order.h" 
#include <map> // STL associative container
#include <vector> // sequence container

class OrderBook {
public: // public interface
    // Add a new order into the book (or match it immediately)
    void add_order(const Order& o); // Takes a reference to const Order

    // Later: cancel, amend, query best bid/ask, print depth, etc.

private: //private data members
    // bids: highest price first
    // This is a template class to create an object, that takes a key and a value. 
    // The key is the price, and the value is a vector of orders
    // The greater<double> is a comparator that sorts the prices in descending order
    std::map<double, 
    std::vector<Order>, 
    std::greater<>> bids; 
    // asks: lowest price first
    std::map<double, 
    std::vector<Order>> asks;
    // uses default std::less<>
};