
#include <iostream>
using namespace std;

int main() {
    string name;
    int golongan, jamKerja, upah, uangLembur, totalGaji;

    cout << "Masukkan nama Anda: ";
    cin >> name;
    cout << "Masukkan golongan Anda (2 atau 3): ";
    cin >> golongan;
    cout << "Masukkan jam kerja Anda per minggu: ";
    cin >> jamKerja;

    switch (golongan) {
    case 2:
        upah = 35000;
        break;
    case 3:
        upah = 50000;
        break;
    default:
        cout << "Golongan tidak valid";
        return 0;
    }

    if (jamKerja > 48) {
        uangLembur = (jamKerja - 48) * 10000;
    }
    else {
        uangLembur = 0;
    }

    totalGaji = upah * jamKerja + uangLembur;

    cout << "Total gaji per minggu untuk " << name << " adalah: Rp " << totalGaji << endl;

    return 0;
}