#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* top = NULL;


void push(int x) {
    Node* n = new Node();
    n->data = x;
    n->next = top;
    top = n;
    cout << x << " pushed\n";
}


void pop() {
    if (top == NULL) {
        cout << "Stack is Underflow\n";
        return;
    }
    cout << "Element Popped: " << top->data << endl;
    Node* temp = top;
    top = top->next;
    delete temp;
}


void peek() {
    if (top == NULL) {
        cout << "Stack is Empty\n";
    } else {
        cout << "Top Element: " << top->data << endl;
    }
}


void display() {
    if (top == NULL) {
        cout << "Stack is Empty\n";
        return;
    }

    Node* temp = top;
    cout << "Stack elements: ";
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    int n, arr[10];

    
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    
    for (int i = 0; i < n; i++) {
        push(arr[i]);
    }

    int choice, x;

    do {
        cout << "\n1.Push  2.Pop  3.Peek  4.Display  5.Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> x;
                push(x);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                cout << "Exit\n";
                break;
            default:
                cout << "Invalid choice\n";
        }

    } while (choice != 5);

    return 0;
}