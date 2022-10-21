#include <iostream>

using namespace std;

//function penjumlahan
int tambah () {
    int a;
    int b;
    int hasil;

    cout << "\n-----Operasi Penjumlahan-----\n" << endl;
    cout << "Angka Pertama: "; cin >> a;
    cout << "Angka Kedua: "; cin >> b;
    hasil = a + b;
    cout << "\nHasil " << a << " + " << b << " = "<< hasil;
    return 0;
}

//function pengurangan
int kurang () {
    int a;
    int b;
    int hasil;

    cout << "\n-----Operasi Pengurangan-----\n" << endl;
    cout << "Angka Pertama: "; cin >> a;
    cout << "Angka Kedua: "; cin >> b;
    hasil = a - b;
    cout << "\nHasil " << a << " - " << b << " = " << hasil;
    return 0;
}

//function perkalian
int kali() {
    int a;
    int b;
    int hasil;

    cout << "\n-----Operasi Perkalian-----\n" << endl;
    cout << "Angka Pertama: "; cin >> a;
    cout << "Angka Kedua: "; cin >> b;
    hasil = a * b;
    cout << "\nHasil " << a << " + " << b << " = " << hasil;
    return 0;
}

//function pembagian
int bagi() {
    float a;
    float b;
    float hasil;

    cout << "\n-----Operasi Pembagian-----\n" << endl;
    cout << "Angka Pertama: "; cin >> a;
    cout << "Angka Kedua: "; cin >> b;
    hasil = a / b;
    cout << "\nHasil " << a << " : " << b << " = "<< hasil;
    return 0;
}

//function tampilan
int tampilan () {
    //Tampilan Main Page Kalkulator
    int pilih;

    cout << "========== Kalkulator Sederhana ==========" << endl;
    cout << "1.Penjumlahan" << endl;
    cout << "2.Pengurangan" << endl;
    cout << "3.Perkalian" << endl;
    cout << "4.Pembagian\n" << endl;

    cout << "Pilih Operasi Matematika : "; cin >> pilih;

    //switch condition sudah beres!
    switch(pilih){
        case 1:
            tambah();
            break;
        case 2:
            kurang();
            break;
        case 3:
            kali();
            break;
        case 4:
            bagi();
            break;
        default:
            cout << "\nNomor Yang Anda Masukan Tidak Masuk Dalam Menu!" << endl;
            cout << "Pilih Nomor Yang Sesuai Dengan Menu!" << endl;
    }
    return 0;
}

//Menu Keluar atau Lanjut sudah beres

int main () {
    char exit;
    tampilan();

    cout << "\nExit (y/t) : "; cin >> exit;
    cout << endl;

    if (exit == 't'){
        do{
            system("clear");
            tampilan();
            cout << "\nExit (y/t) : "; cin >> exit;
            cout << endl;
        }while(exit == 't');

        if (exit == 'y') {
            cout << "\n-----Exited-----";
        }else
            (cout << "Invalid Karakter!");

    }else if (exit == 'y') {
         cout << "\n-----Exited-----";
    }else
        (cout << "Invalid Karakter!");
    return 0;
}



