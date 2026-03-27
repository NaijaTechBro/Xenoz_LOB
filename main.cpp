#include <iostream>
#include <string>
#include <chrono> // For microsecond timestamps

// ==========================================
// PHASE 1: MARKET DATA STRUCTURES
// ==========================================

// 1. CREATE an enum class named 'Side'
// It should contain two values: BUY and SELL


// 2. CREATE a struct named 'Order'
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
    // Give it ID: 1, Side: BUY, Price: 65000.50, Quantity: 2, Timestamp: 0.

    // 4. Print the order's Price and Quantity to the console to prove it exists.

    return 0;
}