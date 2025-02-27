#include <iostream>
#include <queue>
#include <string>
#include <unordered_map>
using namespace std;

// Structure to hold order information
struct Order {
    string customerName;
    string orderDetails;
    bool isPriority;
    
    Order(string name, string details, bool priority) 
        : customerName(name), orderDetails(details), isPriority(priority) {}
};

class IceCreamShop {
private:
    queue<Order> orderQueue;
    unordered_map<string, int> ongoingOrders; // Tracks number of ongoing orders per customer

public:
    void addOrder(string customerName, string orderDetails) {
        // Check if customer is new (has no ongoing orders)
        bool isPriority = (ongoingOrders[customerName] == 0);
        
        // Add order to queue
        orderQueue.push(Order(customerName, orderDetails, isPriority));
        
        // Increment ongoing orders count
        ongoingOrders[customerName]++;
    
        // Display status
        cout << "Status: Order added for " << customerName;
        if (isPriority) {
            cout << " (New customer - Priority!)" << endl;
        } else {
            cout << " (Regular queue)" << endl;
        }
    }

    void processNextOrder() {
        if (orderQueue.empty()) {
            cout << "No orders to process!" << endl;
            return;
        }

        // First pass: look for priority orders
        queue<Order> tempQueue;
        bool foundPriority = false;
        Order* orderToProcess = nullptr;

        while (!orderQueue.empty()) {
            Order currentOrder = orderQueue.front();
            orderQueue.pop();

            if (!foundPriority && currentOrder.isPriority) {
                orderToProcess = new Order(currentOrder);
                foundPriority = true;
            } else {
                tempQueue.push(currentOrder);
            }
        }

        // If no priority order found, process the first regular order
        if (!foundPriority) {
            orderToProcess = new Order(tempQueue.front());
            tempQueue.pop();
        }

        // Restore the remaining orders
        orderQueue = tempQueue;

        // Process the selected order
        cout << "Processing order: " << orderToProcess->customerName 
             << " - " << orderToProcess->orderDetails << endl;

        // Decrease ongoing orders count
        ongoingOrders[orderToProcess->customerName]--;
        if (ongoingOrders[orderToProcess->customerName] == 0) {
            ongoingOrders.erase(orderToProcess->customerName);
        }

        delete orderToProcess;
    }

    void displayQueue() {
        if (orderQueue.empty()) {
            cout << "\nQueue is empty!" << endl;
            return;
        }

        cout << "\nCurrent Queue:" << endl;
        queue<Order> tempQueue = orderQueue;
        int position = 1;

        while (!tempQueue.empty()) {
            Order order = tempQueue.front();
            cout << position << ". " << order.customerName << " - " 
                 << order.orderDetails;
            if (order.isPriority) cout << " (Priority!)";
            cout << endl;
            tempQueue.pop();
            position++;
        }
        cout << endl;
    }

    void displayOngoingOrderCounts() {
        cout << "\nOngoing orders per customer:" << endl;
        for (const auto& pair : ongoingOrders) {
            cout << pair.first << ": " << pair.second << " orders" << endl;
        }
        cout << endl;
    }
};

int main() {
    IceCreamShop shop;
    string customerName, orderDetails;

    cout << "Ice Cream Shop Queue System" << endl;
    cout << "Enter 'exit' as customer name to end program" << endl;
    cout << "Enter 'process' as customer name to process next order" << endl;
    cout << "Enter 'status' as customer name to see order counts" << endl;

    while (true) {
        cout << "\nEnter customer name: ";
        getline(cin, customerName);

        if (customerName == "exit") {
            break;
        } else if (customerName == "process") {
            shop.processNextOrder();
            shop.displayQueue();
        } else if (customerName == "status") {
            shop.displayOngoingOrderCounts();
            shop.displayQueue();
        } else {
            cout << "Enter order details: ";
            getline(cin, orderDetails);
            
            shop.addOrder(customerName, orderDetails);
            shop.displayQueue();
        }
    }

    return 0;
}
















