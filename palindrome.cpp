#include <iostream>
using namespace std;
class Stack {
    int top;
    int capacity;
    char* arr;
public:
    Stack(int size) {
        arr = new char[size];
        capacity = size;
        top = -1;
    }
    ~Stack() {delete[] arr;}
    void push(char x) {
        if (top == capacity - 1) {
            cout << "Stack overflow\n";
            return;
        }
        arr[++top] = x;
    }

    char pop() {
        if (top == -1) {
            cout << "Stack underflow\n";
            return '\0';
        }
        return arr[top--];
    }

    bool isEmpty() {
        return top == -1;
    }

    char peek() {
        if (top == -1) {
            cout << "Stack is empty\n";
            return '\0';
        }
        return arr[top];
    }
};
int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    Stack st(s.size());

    for (char c : s) {
        st.push(c);
    }
    string reversed = "";
    while (!st.isEmpty()) {
        reversed += st.pop();
    }

    cout << "Reversed string: " << reversed << endl;

    if (reversed == s) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not a palindrome" << endl;
    }

    return 0;
}
