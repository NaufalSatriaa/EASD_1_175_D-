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

// Algoritma Selection Sort
void selectionSort(int nflsat[], int size) {
    string initials = "NS";                                                    // inisial dari nama lengkap Naufal Satria
    for (int initialsIndex = 0; initialsIndex < size - 1; initialsIndex++) {
        int min_index = initialsIndex;
        for (int i = initialsIndex + 1; i < size; i++) {
            if (nflsat[i] < nflsat[min_index]) {
                min_index = i;
            }
        }
        if (min_index != initialsIndex) {
            swap(nflsat[initialsIndex], nflsat[min_index]);
        }
    }
}

// Menampilkan Prosedur
void display(int nflsat[], int size) {
    cout << "Array yang telah diurutkan : ";
    for (int i = 0; i < size; i++) {
        cout << nflsat[i] << " ";
    }
    cout << endl;
}

