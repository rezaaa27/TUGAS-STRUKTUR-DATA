#include <iostream>
using namespace std;

#define MAX 10
int S[MAX];
int TOP1 = -1;
int TOP2 = MAX;

void PUSH1(int data) {
    if (TOP1 + 1 == TOP2)
        cout << "Stack1 penuh!\n";
    else {
        TOP1++;
        S[TOP1] = data;
        cout << "Data " << data << " dimasukkan ke Stack1.\n";
    }
}

void POP1() {
    if (TOP1 == -1)
        cout << "Stack1 kosong!\n";
    else {
        cout << "Data " << S[TOP1] << " dihapus dari Stack1.\n";
        TOP1--;
    }
}

void PUSH2(int data) {
    if (TOP2 - 1 == TOP1)
        cout << "Stack2 penuh!\n";
    else {
        TOP2--;
        S[TOP2] = data;
        cout << "Data " << data << " dimasukkan ke Stack2.\n";
    }
}

void POP2() {
    if (TOP2 == MAX)
        cout << "Stack2 kosong!\n";
    else {
        cout << "Data " << S[TOP2] << " dihapus dari Stack2.\n";
        TOP2++;
    }
}

int main() {
    PUSH1(10);
    PUSH1(20);
    PUSH2(99);
    POP1();
    POP2();
    return 0;
}

