#include <iostream>
using namespace std;

class Product {
    private:
        // attributes.
        int id;
        string name;
        double price;
        int stockQuantity;

    public:
    // constructors.
    Product(int id, string name, double price) {
        this->id = id;
        this->name = name;
        this->price = price;
        stockQuantity = 1;
    }
    // overloaded constructor.
    Product(int id, string name, double price, int quantity) {
        this->id = id;
        this->name = name;
        this->price = price;
        stockQuantity = quantity;
    }

        // getters and setters.
        int getId() {
            return this->id;
        }
        string getName() {
            return this->name;
        }
        double getPrice() {
            return this->price;
        }
        int getStock() {
            return this->stockQuantity;
        }

        void setId(int id) {
            this->id = id;
        }
        void setName(string name) {
            this->name = name;
        }
        void setPrice(double price) {
            this->price = price;
        }
        void setStock(int quantity) {
            this->stockQuantity = quantity;
        }

        // methods.
        double buy(int quantity) {
            if (takeFromStock(quantity)) {
                int totalPrice = price * quantity;
                return totalPrice;
            } else {
                cout << "The purchase failed!\n";
                return 0;
            }
        }

        void addToStock(int quantity) {
            stockQuantity += quantity;
        }
        bool takeFromStock(int quantity) {
            if (stockQuantity >= quantity) {
                stockQuantity -= quantity;
                return true;
            } else {
                cout << "Not enough stock!\n";
                return false;
            }
        }
};

class Electronic : public Product{
    private:
        string specifications;

    public:
    Electronic(int id, string name, double price)
              : Product(id, name, price) {};

    Electronic(int id, string name, double price, int quantity)
              : Product(id, name, price, quantity) {};

    Electronic(int id, string name, double price, int quantity, string spec)
              : Product(id, name, price, quantity) {
        this->specifications = spec;
    };

        string getSpecifications() {
            return this->specifications;
        }
        void setSpecifications(string specifications) {
            this->specifications = specifications;
        }
};

int main() {

    Product product1(1, "Water Bottle", 8.00, 20);
    Electronic electronic1(2, "MacBook", 6199.90, 10, "");

    return 0;
}