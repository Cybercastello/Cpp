#include <iostream>
using namespace std;

const int n = 100; // Stack size
int stack[n], top = -1;

void push(int val) {
    if (top == n - 1) {
        cout << "Stack overflow\nStack is full\n";
    } else {
        top++;
        stack[top] = val;
    }
}

void pop() {
    if (top == -1) {
        cout << "Stack underflow\nStack is empty\n";
    } else {
        cout << "The popped element is " << stack[top] << endl;
        top--;
    }
}

void display() {
    if (top >= 0) {
        cout << "Stack elements are: ";
        for (int i = top; i >= 0; i--) {
            cout << stack[i] << " ";
        }
        cout << endl;
    } else {
        cout << "Stack is empty\n";
    }
}

int main() {
    int ch, val;
    cout << "1. Push\n2. Pop\n3. Display\n4. Exit\n";

    do {
        cout << "Enter choice: ";
        cin >> ch;
        switch (ch) {
            case 1:
                cout << "Enter the element: ";
                cin >> val;
                push(val);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                cout << "Exit\n";
                break;
            default:
                cout << "Invalid choice\n";
        }
    } while (ch != 4);

    return 0;
}