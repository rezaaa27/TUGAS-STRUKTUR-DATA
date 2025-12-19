#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

// Insert di akhir
void insert(int value) {
    Node* newNode = new Node();
    newNode->data = value;

    if (head == NULL) {
        head = newNode;
        newNode->next = head;
    } else {
        Node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = head;
    }
    cout << "Insert: " << value << endl;
}

// Delete berdasarkan nilai
void deleteNode(int value) {
    if (head == NULL) {
        cout << "List kosong\n";
        return;
    }

    Node* curr = head;
    Node* prev = NULL;

    // Jika node pertama yang dihapus
    if (head->data == value) {
        Node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }

        if (head->next == head) {
            head = NULL;
        } else {
            temp->next = head->next;
            head = head->next;
        }
        delete curr;
        cout << "Delete: " << value << endl;
        return;
    }

    // Node selain head
    do {
        prev = curr;
        curr = curr->next;
    } while (curr != head && curr->data != value);

    if (curr->data == value) {
        prev->next = curr->next;
        delete curr;
        cout << "Delete: " << value << endl;
    } else {
        cout << "Data " << value << " tidak ditemukan\n";
    }
}

// Traverse
void traverse() {
    if (head == NULL) {
        cout << "List kosong\n";
        return;
    }

    Node* temp = head;
    cout << "Traverse: ";
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

int main() {
    insert(10);
    insert(20);
    insert(30);
    insert(40);

    traverse();

    deleteNode(20);
    traverse();

    deleteNode(10);
    traverse();

    return 0;
}

