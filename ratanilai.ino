#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah nilai yang akan dihitung rata-ratanya: ";
    cin >> n;

    double sum = 0.0;
    for (int i = 0; i < n; ++i) {
        double value;
        cout << "Masukkan nilai ke-" << i + 1 << ": ";
        cin >> value;
        sum += value;
    }

    double average = sum / n;
    cout << "Nilai rata-rata adalah: " << average << endl;

    return 0;
}