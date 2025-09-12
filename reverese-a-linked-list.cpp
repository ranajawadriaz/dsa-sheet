#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;
    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

class Solution {
public:
    Node* reverse(Node* head) {
        Node* temp = head;
        Node* current = head;
        Node* last = NULL;

        while (temp)
        {
            temp = current->next;
            current->next = current->prev;
            current->prev = temp;
            last = current;
            current = temp;

        }

        head = last;
        return head;

    }

    // Insert at the end of the doubly linked list
    Node* insert(Node* head, int val) {
        Node* newNode = new Node(val);

        if (head == nullptr) {
            return newNode;  // first node
        }

        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }

        temp->next = newNode;
        newNode->prev = temp;

        return head;
    }
};

// Helper function to print the list
void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    Solution sol;

    // Build list using insert
    head = sol.insert(head, 1);
    head = sol.insert(head, 2);
    head = sol.insert(head, 3);
    head = sol.insert(head, 4);
    head = sol.insert(head, 5);

    cout << "Original list: ";
    printList(head);

    head = sol.reverse(head);

    cout << "Reversed list: ";
    printList(head);

    return 0;
}
