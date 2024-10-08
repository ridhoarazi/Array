#include <iostream>
using namespace std;

int main() {
    int n, max_value, search_value;
    bool found = false;

    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    int arr[n];

    cout << "Masukkan " << n << " elemen array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Elemen ke-" << i+1 << ": ";
        cin >> arr[i];
    }

    max_value = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max_value) {
            max_value = arr[i];
        }
    }

    cout << "Nilai tertinggi dalam array adalah: " << max_value << endl;

    cout << "Masukkan angka yang ingin diperiksa: ";
    cin >> search_value;

    for (int i = 0; i < n; i++) {
        if (arr[i] == search_value) {
            cout << "Angka " << search_value << " ditemukan pada indeks ke-" << i << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "Angka " << search_value << " tidak ditemukan dalam array." << endl;
    }

    return 0;
}
