#include <iostream>
using namespace std;

class stack {
    int* arr;
    int top;
    int total;

public:
    stack(int size) {
        arr = new int[size];
        total = size;
        top = -1;
    }

    ~stack() { delete[] arr; }

    void push(int x) {
        if (top == total - 1) {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = x;  // Increment first, then assign
    }

    int pop() {
        if (top == -1) {
            cout << "Stack Underflow\n";
            return -1;
        }
        return arr[top--];
    }

    int peek() {
        if (top == -1) {
            cout << "Stack is empty\n";
            return -1;
        }
        return arr[top];
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == total - 1;
    }
};

int main() {
    int n;
    cout << "Input Stack size: ";
    cin >> n;
    stack st(n);

    int op, val;
    while (true) {
        cout << "\nMenu:\n1. Push\n2. Pop\n3. Peek\n4. Exit\nEnter option: ";
        cin >> op;

        switch (op) {
        case 1:
            cout << "Enter value to push: ";
            cin >> val;
            st.push(val);
            break;
        case 2:
            val = st.pop();
            if (val != -1)
                cout << "Popped: " << val << endl;
            break;
        case 3:
            val = st.peek();
            if (val != -1)
                cout << "Top element: " << val << endl;
            break;
        case 4:
            cout << "Exiting...\n";
            return 0;
        default:
            cout << "Invalid option\n";
        }
    }

    return 0;
}
