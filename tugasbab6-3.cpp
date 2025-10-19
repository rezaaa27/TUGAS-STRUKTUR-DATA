#include <iostream>
#include <string>
using namespace std;

#define MAX 5

struct Queue {
    string data[MAX];
    int front, rear;
};

void inisialisasi(Queue &Q) {
    Q.front = 0;
    Q.rear = -1;
}

void insert(Queue &Q, string record) {
    if (Q.rear == MAX - 1)
        cout << "Queue penuh!\n";
    else {
        Q.rear++;
        Q.data[Q.rear] = record;
        cout << "Record \"" << record << "\" berhasil dimasukkan.\n";
    }
}

void del(Queue &Q) {
    if (Q.front > Q.rear)
        cout << "Queue kosong!\n";
    else {
        cout << "Record \"" << Q.data[Q.front] << "\" dihapus.\n";
        Q.front++;
    }
}

void reset(Queue &Q) {
    Q.front = 0;
    Q.rear = -1;
    cout << "Queue direset ke kondisi awal.\n";
}

int main() {
    Queue Q;
    inisialisasi(Q);

    insert(Q, "Reza");
    insert(Q, "Andi");
    del(Q);
    reset(Q);

    return 0;
}

