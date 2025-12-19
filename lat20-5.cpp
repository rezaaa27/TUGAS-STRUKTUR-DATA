#include <iostream>
using namespace std;

// Struktur node
struct Node {
    int data;
    Node* next;
};

Node* front = NULL;
Node* rear  = NULL;

// Enqueue (tambah antrian)
void enqueue(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    if (rear == NULL) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
    cout << "Enqueue: " << value << endl;
}

// Dequeue (hapus antrian)
void dequeue() {
    if (front == NULL) {
        cout << "Queue kosong\n";
        return;
    }

    Node* temp = front;
    cout << "Dequeue: " << temp->data << endl;
    front = front->next;

    if (front == NULL) {
        rear = NULL;
    }

    delete temp;
}

// Menampilkan isi queue
void display() {
    if (front == NULL) {
        cout << "Queue kosong\n";
        return;
    }

    Node* temp = front;
    cout << "Isi Queue: ";
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();

    dequeue();
    display();

    enqueue(40);
    display();

    dequeue();
    dequeue();
    display();

    return 0;
}

