#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int top = -1;
    int choice, value;

    while (true) {
        cout << "1. Push\n2. Pop\n3. Exit\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                if (top < 99) {
                    arr[++top] = value;
                    cout << "Pushed " << value << endl;
                } else {
                    cout << "Stack Overflow\n";
                }
                break;
            case 2:
                if (top >= 0) {
                    cout << "Popped: " << arr[top--] << endl;
                } else {
                    cout << "Stack Underflow\n";
                }
                break;
            case 3:
                cout << "Exiting...\n";
                return 0;
            default:
                cout << "Invalid choice\n";
        }
    }

    return 0;
}
