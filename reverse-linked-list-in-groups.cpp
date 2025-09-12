#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

class Solution {
public:
    Node* reverseKGroup(Node* head, int k) {

        // code here
        int headCheck = 1;
        int count = k;
        Node* temp = head;
        Node* current = head;
        Node* prev = NULL;
        Node* starter = head;
        Node* starter2 = NULL;
        Node* tempHead = NULL;


        while (temp)
        {
            temp = current->next;
            current->next = prev;
            prev = current;
            current = temp;
            count--;
            if (count == 0)
            {
                count = k;
                if (tempHead == NULL)
                {
                    head = prev;
                    tempHead = prev;
                    starter2 = current;

                }
                else
                {
                    tempHead = prev;
                    starter->next = tempHead;
                    starter = starter2;
                    starter2 = current;
                }
                prev = NULL;
            }


        }

        if (count != k && tempHead == NULL)
        {
            head = prev;
        }

        if (count != k && tempHead != NULL)
        {
            tempHead = prev;
            starter->next = tempHead;
        }

        return head;
    }
};

// Helper function to insert at end
Node* insert(Node* head, int val) {
    Node* newNode = new Node(val);
    if (head == nullptr) return newNode;

    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}

// Helper function to print list
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

    // Build linked list
    head = insert(head, 1);
    head = insert(head, 2);
    head = insert(head, 3);
    head = insert(head, 4);
    head = insert(head, 5);
    head = insert(head, 6);
    head = insert(head, 7);

    cout << "Original list: ";
    printList(head);

    int k = 3;
    head = sol.reverseKGroup(head, k);

    cout << "Reversed in groups of " << k << ": ";
    printList(head);

    return 0;
}
