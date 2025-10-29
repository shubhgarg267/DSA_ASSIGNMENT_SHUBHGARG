#include <iostream>
using namespace std;
// Node structure
struct Node {
    int data;
    Node* next;
};
// Function to insert node at end
Node* insert(Node* head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL)
        return newNode;
    Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    return head;
}

// Function to check if list is sorted in non-decreasing order
bool isSorted(Node* head) {
    Node* temp = head;
    while (temp != NULL && temp->next != NULL) {
        if (temp->data > temp->next->data)
            return false;
        temp = temp->next;
    }
    return true;
}

// Function to remove duplicates from sorted linked list
void removeDuplicates(Node* head) {
    Node* current = head;
    while (current != NULL && current->next != NULL) {
        if (current->data == current->next->data) {
            Node* duplicate = current->next;
            current->next = current->next->next;
            delete duplicate;
        } else {
            current = current->next;
        }
    }
}

// Function to display linked list
void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data;
        if (temp->next != NULL)
            cout << "->";
        temp = temp->next;
    }
    cout << "->NULL" << endl;
}

int main() {
    int n, value;
    cout << "Enter number of nodes: ";
    cin >> n;

    Node* head = NULL;
    cout << "Enter " << n << " values (should be in non-decreasing order):\n";

    for (int i = 0; i < n; i++) {
        cin >> value;
        head = insert(head, value);
    }

    cout << "\nOriginal Linked List:\n";
    display(head);

    // Check sorted condition
    if (!isSorted(head)) {
        cout << "\nError: The linked list is not sorted in non-decreasing order!" << endl;
        return 0;
    }

    removeDuplicates(head);
    cout << "\nLinked List after removing duplicates:\n";
    display(head);

    return 0;
}
