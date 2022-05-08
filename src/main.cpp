#include "include/persegipanjang.hpp"
#include <iostream>
using namespace std;

// Nama:   Fardian Ahmad Zidane
// NRP:    5024211040
// Kelas: Pemrograman Lanjut (B)
// Departemen Teknik Komputer
//Tugas Operator Overloading

float xmin, xmax, ymin, ymax;
float tTengahX, tTengahY, Panjang, Lebar, pKiriKanan, lAtasBawah;

int main()
{
    while(1)
    {
    system("CLEAR || CLS");
    cout << "Selamat Datang" << endl << endl; 
    cout << "Silahkan Masukkan Data Berikut untuk Persegi Panjang Pertama" << endl;
    cout << "Titik Tengah sumbu X\t: "; cin >> tTengahX; 
    cout << "Titik Tengah sumbu Y\t: "; cin >> tTengahY; 
    cout << "Panjang Persegi Panjang\t: "; cin >> Panjang; 
    cout << "Lebar Persegi Panjang\t: "; cin >> Lebar;

    PersegiPanjang PersegiPan(tTengahX, tTengahY, Panjang, Lebar);
    cout << endl << "Berikut merupakan data yang telah diinput" << endl;
    cout << endl << "Titik Tengah Sumbu X\t: " << PersegiPan.get_tTengahX() << endl;
    cout << "Titik Tengah SUmbu Y\t: " << PersegiPan.get_tTengahY() << endl;
    cout << "Panjang\t\t\t: " << PersegiPan.getPanjang() << endl;
    cout << "Lebar\t\t\t: " << PersegiPan.getLebar() << endl << endl;
    PersegiPan.set_PanjangKiriKanan(Panjang);
    PersegiPan.set_LebarAtasBawah(Lebar);
    cout << "Panjang ke Kiri dan Kanan dari Titik Tengah X\t: ";
    cout << PersegiPan.get_PanjangKiriKanan() << endl;
    cout << "Lebar ke Atas dan Bawah dari Titik Tengah Y\t: ";
    cout << PersegiPan.get_LebarAtasBawah() << endl << endl;
    cout << "X min\t\t\t: " << PersegiPan.getXmin() << endl; 
    cout << "X max\t\t\t: " << PersegiPan.getXmax() << endl;
    cout << "Y min\t\t\t: " << PersegiPan.getYmin() << endl;
    cout << "Y max\t\t\t: " << PersegiPan.getYmax() << endl << endl;

    cout << "Silahkan Masukkan Data Berikut untuk Persegi Panjang Kedua" << endl;
    cout << "Titik Tengah sumbu X\t: "; cin >> tTengahX; 
    cout << "Titik Tengah sumbu Y\t: "; cin >> tTengahY; 
    cout << "Panjang Persegi Panjang\t: "; cin >> Panjang; 
    cout << "Lebar Persegi Panjang\t: "; cin >> Lebar;

    PersegiPanjang PersegiPan2(tTengahX, tTengahY, Panjang, Lebar);
    cout << endl << "Titik Tengah Sumbu X\t: " << PersegiPan2.get_tTengahX() << endl;
    cout << "Titik Tengah Sumbu Y\t: " << PersegiPan2.get_tTengahY() << endl;
    cout << "Panjang\t\t\t: " << PersegiPan2.getPanjang() << endl;
    cout << "Lebar\t\t\t: " << PersegiPan2.getLebar() << endl << endl;
    PersegiPan2.set_PanjangKiriKanan(Panjang);
    PersegiPan2.set_LebarAtasBawah(Lebar);
    cout << "Panjang ke Kiri dan Kanan dari Titik Tengah X\t: ";
    cout << PersegiPan.get_PanjangKiriKanan() << endl;
    cout << "Lebar ke Atas dan Bawah dari Titik Tengah Y\t: ";
    cout << PersegiPan.get_LebarAtasBawah() << endl << endl;
    cout << "X min\t\t\t: " << PersegiPan2.getXmin() << endl; 
    cout << "X max\t\t\t: " << PersegiPan2.getXmax() << endl;
    cout << "Y min\t\t\t: " << PersegiPan2.getYmin() << endl;
    cout << "Y max\t\t\t: " << PersegiPan2.getYmax() << endl << endl;
    
    cout << "Apakah kedua persegi panjang beririsan?" << endl;
    if ( PersegiPan == PersegiPan2) cout << "Ya" << endl << endl;
    else 
    {
        cout << "Tidak" << endl << endl;
        exit(1);
    }
    cout << "Koordinat hasil penggabungan kedua persegi panjang adalah: " << endl;
    PersegiPanjang hasil = (PersegiPan + PersegiPan2);
    cout << "X min\t\t\t: " << hasil.getXmin_raw() << endl;
    cout << "X max\t\t\t: " << hasil.getXmax_raw() << endl;
    cout << "Y min\t\t\t: " << hasil.getYmin_raw() << endl;
    cout << "Y max\t\t\t: " << hasil.getYmax_raw() << endl << endl;

    cout << "Koordinat irisan kedua persegi panjang:" << endl;
    hasil = (PersegiPan - PersegiPan2);
    cout << "X min\t\t\t: " << hasil.getXmin_raw() << endl;
    cout << "X max\t\t\t: " << hasil.getXmax_raw() << endl;
    cout << "Y min\t\t\t: " << hasil.getYmin_raw() << endl;
    cout << "Y max\t\t\t: " << hasil.getYmax_raw() << endl << endl;

    cout << "Silahkan Pilih Atribut yang ingin ditunjukkan" << endl;
    cout << "1. X Min\n" << "2. X Max\n";
    cout << "3. Y Min\n" << "4. Y Max\n";
    int index;
    cin >> index;
    cout << "\nAtribut untuk Persegi Panjang Pertama yang dipilih:" << endl;
    cout << PersegiPan[index] << endl;
    cout << "\nAtribut untuk Persegi Panjang Kedua yang dipilih:" << endl;
    cout << PersegiPan2[index] << endl << endl;
    cout << "Ketik 0 untuk menutup program atau angka lain untuk mengulang program" << endl;
    int close;
    cin >> close;
    if (close == 0) return 0;
    else {
        cout << "Kembali ke menu utama" << endl << endl;
        cin.ignore(); cin.ignore();
    }
    }
}