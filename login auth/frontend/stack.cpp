#include <iostream>

using namespace std;


const int MAX_SIZE = 100;

int stack_arr[MAX_SIZE];

int top = -1;


void push(int data) {
    if (top == MAX_SIZE - 1) {
        cout << "Stack Overflow! Cannot add more elements." << endl;
        return;
    }
    top++;
    stack_arr[top] = data;
    cout << "Pushed " << data << " onto the stack." << endl;
}

void pop() {
    if (top == -1) {
        cout << "Stack Underflow! Cannot remove elements from an empty stack." << endl;
        return;
    }
    int popped_value = stack_arr[top];
    top--;
    cout << "Popped " << popped_value << " from the stack." << endl;
}


void display() {
    if (top == -1) {
        cout << "Stack is empty." << endl;
        return;
    }
    cout << "Stack elements (top to bottom): ";
    for (int i = top; i >= 0; i--) {
        cout << stack_arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int choice, value;

    cout << "Stack Implementation using Array in C++" << endl;

    while (true) {
        cout << "\nMenu:" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                cout << "Exiting program." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
