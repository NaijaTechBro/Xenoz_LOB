#include <iostream>
#include <string>
#include <chrono>
#include <map>
#include <vector>

// ==========================================
// PHASE 1: MARKET DATA STRUCTURES
// ==========================================

// 1. CREATE an enum class named 'Side'
enum class Side {
    BUY,
    SELL
};
// It should contain two values: BUY and SELL


// 2. CREATE a struct named 'Order'

struct Order {
    uint64_t orderId;
    Side side;
    double price;
    uint32_t quantity;
    uint64_t timestamp;
};
// Inside the struct, define these exact variables:
// - A uint64_t for 'orderId'
// - A 'Side' enum variable named 'side'
// - A double for 'price'
// - A uint32_t for 'quantity'
// - A uint64_t for 'timestamp'


int main() {
    std::cout << "Xenoz Limit Order Book Initializing...\n";

    // 3. THE MEMORY TEST
    // Instantiate a new Order right here.
    Order newOrder = { 1, Side::BUY, 65000.50, 2,  0};
    // Give it ID: 1, Side: BUY, Price: 65000.50, Quantity: 2, Timestamp: 0.
    std::cout << "Price: " << newOrder.price << " | Quantity: " << newOrder.quantity << "\n";
    // 4. Print the order's Price and Quantity to the console to prove it exists.

    // The Asks ( Sellers)q
    std::map<double, std::vector<Order>> asks;
    return 0;
}