# Hotel Management System

## Overview

This project is a **Hotel Management System** developed in C. The system helps to manage room allocations, cancellations, customer details, and even provides a restaurant menu service. It is intended to assist hotels in efficiently managing their operations, room availability, customer information, and more.

### Features
1. **Room Features**: Provides detailed information about different types of rooms available (e.g., Special Deluxe, Deluxe, General, Couple, Couple Deluxe).
2. **Room Availability**: Displays the current availability of rooms.
3. **Allocate Room**: Allows allocation of rooms to customers with details like name, city, nationality, period of stay, etc.
4. **Deallocate Room**: Handles the process of checking out and freeing up a room.
5. **Cancel Room**: Allows a customer to cancel a room reservation.
6. **Restaurant Service**: A small restaurant service where customers can order from a menu, and the system calculates the total bill.
7. **Customer Details**: Displays detailed information of customers currently occupying rooms.

### Getting Started

1. **Installation**: 
   - Clone the repository or download the source code.
   - Compile the code using any modern C compiler.
   - Run the executable generated.

   For example, using GCC:
   ```bash
   gcc hotel_management_system.c -o hotel_management_system
   ./hotel_management_system
