Xenoz LOB: High-Performance Matching Engine
Description:
Xenoz LOB is an ultra-low latency Limit Order Book and trade matching engine engineered in modern C++. Designed to replicate the core infrastructure of high-frequency trading (HFT) exchanges, the engine enforces strict Price-Time Priority (FIFO) matching for continuous order flow.

To achieve microsecond execution speeds, the architecture leverages optimized, cache-friendly data structures. The order book maintains state using Red-Black Trees for O(log n) price-level sorting, and constant-time O(1) lookups via Hash Maps to guarantee deterministic performance during high-throughput market volatility.

Core Architecture:

Deterministic Matching: Event-driven FIFO queues execute trades instantly when crossed market conditions (Bids meeting Asks) are triggered.

Zero-Allocation Critical Path: Engineered to minimize dynamic memory heap allocation during active trading, ensuring predictable sub-microsecond tick-to-trade latency.

Extensible OMS Integration: Built as the foundational C++ backend for a full-stack Order Management System, architected to easily integrate with ZeroMQ/Kafka for real-time market data broadcasting.

Xenoz LOB demonstrates deep institutional knowledge of market micro-structure, algorithmic time complexity, and low-level systems engineering—bridging the gap between raw hardware performance and quantitative execution.
