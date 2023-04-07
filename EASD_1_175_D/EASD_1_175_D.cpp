// 1. Algoritma mempermudah dalam memecahkan segala permasalahan yang berkaitan dengan suatu program dan tidak dapat diselesaikan dengan mudah.
// 2. Statis dan dinamis.
// 3. Ada output, efektifitas dan efisiensi, jumlah langkahnya berhingga, (semi algoritma) berakhir dan terstruktur.
// 4. Algoritma Quicksort. Kelebihan dari algoritma ini adalah kinerjanya yang sangat cepat dibanding algoritma pengurutan data lainnya, bahkan untuk data yang berukuran besar. 
//Quicksort memanfaatkan metode divide and conquer yang memungkinkan untuk mengurangi kompleksitas waktu secara drastis. 
//Oleh karena itu, quicksort lebih efisien dan mudah diimplementasikan untuk data berukuran besar.
// 5. Quadratic : Bubblesort, Selectionsort, Insertionsort, dan Shellsort.
//Loglinear : Quicksort dan Mergesort

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

// Mengeksekusi Progam Selection Sort
int main() {
    int size = 95;
    int nflsat[35];

    input(nflsat, size);

    selectionSort(nflsat, size);

    display(nflsat, size);

    return 0;
}