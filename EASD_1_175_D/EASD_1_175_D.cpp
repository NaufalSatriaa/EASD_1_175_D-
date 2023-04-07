#include <iostream>
#include <string>
using namespace std;

// Menginputkan Prosedur
void input(int nflsat[], int size) {
    cout << "Masukkan " << size << " Elemen Array :" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Masukkan elemen ke-" << i + 1 << " dari " << size << " elemen array:";
        cin >> nflsat[i];
    }
}

