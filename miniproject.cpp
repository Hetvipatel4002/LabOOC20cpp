#include <iostream>
#include <vector>
using namespace std;

class MenuItem {
private:
    int id;
    string name;
    double price;

public:
    MenuItem(int i, string n, double p) {
        id = i;
        name = n;
        price = p;
    }

    virtual void display() {
        cout << id << ". " << name << " - Rs." << price << endl;
    }

    int getId() {
        return id;
    }

    string getName() {
        return name;
    }

    double getPrice() {
        return price;
    }
};

class Food : public MenuItem {
private:
    string type;

public:
    Food(int i, string n, double p, string t)
        : MenuItem(i, n, p) {
        type = t;
    }

    void display() override {
        MenuItem::display();
        cout << "   Type: " << type << endl;
    }
};

class Restaurant {
private:
    vector<MenuItem*> menuItems;

public:
    void addItems() {
        menuItems.push_back(new Food(1, "Burger", 120, "Fast Food"));
        menuItems.push_back(new Food(2, "Pizza", 250, "Fast Food"));
        menuItems.push_back(new Food(3, "Biryani", 180, "Indian"));
    }

    void showMenu() {
        cout << "\n===== RESTAURANT MENU =====\n";

        for (MenuItem* item : menuItems) {
            item->display();
        }
    }

    void order() {
        int id, quantity;

        showMenu();

        cout << "\nEnter Item ID: ";
        cin >> id;

        cout << "Enter Quantity: ";
        cin >> quantity;

        if (id >= 1 && id <= menuItems.size()) {
            double total = menuItems[id - 1]->getPrice() * quantity;

            cout << "\nItem: " << menuItems[id - 1]->getName();
            cout << "\nQuantity: " << quantity;
            cout << "\nTotal Bill: Rs." << total << endl;
        } else {
            cout << "Invalid Item ID!\n";
        }
    }

    void menu() {
        int choice;

        do {
            cout << "\n===== RESTAURANT MANAGEMENT =====\n";
            cout << "1. Show Menu\n";
            cout << "2. Place Order\n";
            cout << "3. Exit\n";
            cout << "Enter choice: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    showMenu();
                    break;

                case 2:
                    order();
                    break;

                case 3:
                    cout << "Thank you!\n";
                    break;

                default:
                    cout << "Invalid choice!\n";
            }

        } while (choice != 3);
    }

    ~Restaurant() {
        for (MenuItem* item : menuItems) {
            delete item;
        }
    }
};

int main() {
    Restaurant restaurant;
    restaurant.menu();

    return 0;
}