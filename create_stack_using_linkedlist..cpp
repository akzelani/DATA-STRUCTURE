#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

struct Stack {
    Node* top;

    Stack() {
        top = NULL;
    }

    void push(int data) {
        Node* new_node;
        new_node=(struct Node*)malloc (sizeof(struct Node));
        new_node->data = data;
        new_node->next = top;
        top = new_node;
    }

    void pop()
    {
        if (top == NULL)
        {
            cout << "Stack underflow" << endl;
            return;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
    }

    int peek()
    {
        if (top == NULL) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return top->data;
    }

    bool is_empty() {
        return top == NULL;
    }
};

int main() {
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);

    cout << s.peek() << endl;
    s.pop();

    cout << s.peek() << endl;
    s.pop();

    cout << s.peek() << endl;
    s.pop();

    cout << s.is_empty() << endl;

    return 0;
}
