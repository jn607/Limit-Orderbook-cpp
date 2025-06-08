# Limit-Orderbook-cpp

## What is a Limit Order Book?

A limit order book is the core data structure exchanges use to match buyers and sellers. It is a record of outstanding limit orders. For example: <br>

**Limit Order:** type of order to buy or sell a security at a specific price or better. <br>
**Book:** <br>
- Bids (buy orders), sorted highest-price first <br>
- Asks (sell orders), sorted lowest-price first <br>

A profit is earned off of the **spread** between the difference in prices between the bid and ask orders on their book as they execute the orders.

## Project Outline

**Core classes:**
- Order (id, side, price, quantity, timestamp)
- OrderBook (two containers for bids and asks, plus matching logic)

**Data Structures:**
- std::map<double, std::vector<Order>>

**Build System:**
- CMake (easy cross-platform)

**Tests:**
