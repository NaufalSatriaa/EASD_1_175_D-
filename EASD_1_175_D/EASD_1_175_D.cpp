#include <iostream>
#include <string>
using namespace std;

// Menginputkan Prosedur
void input(int arr[], int size) {
    cout << "Masukkan " << size << " Elemen Array :" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Masukkan elemen ke-" << i + 1 << " dari " << size << " elemen array:";
        cin >> arr[i];
    }
}

// Algoritma Selection Sort
void selectionSort(int arr[], int size) {
    string initials = "AM";                                                    // inisial dari nama lengkap saya [Abdullah Maajid]
    for (int initialsIndex = 0; initialsIndex < size - 1; initialsIndex++) {
        int min_index = initialsIndex;
        for (int i = initialsIndex + 1; i < size; i++) {
            if (arr[i] < arr[min_index]) {
                min_index = i;
            }
        }
        if (min_index != initialsIndex) {
            swap(arr[initialsIndex], arr[min_index]);
        }
    }
}

// Menampilkan Prosedur
void display(int arr[], int size) {
    cout << "Array yang telah diurutkan : ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Mengeksekusi Progam Selection Sort
int main() {
    int size = 50;   // 60                   
    int arr[35];

    input(arr, size);

    selectionSort(arr, size);

    display(arr, size);

    return 0;
}