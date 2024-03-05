/* 
    Saya Adrian Mulianto NIM [2200939] mengerjakan soal Latihan Praktikum-2 dalam mata kuliah DPBO
    untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin 
*/

// Menggunakan pragma once agar header file hanya di-include satu kali
#pragma once
// Memasukan library yang digunakan
#include <iostream>
#include <string>
#include "Vehicle.cpp"

// Deklarasi namespace
using namespace std;

/*
    Kelas Car yang digunakan untuk merepresentasikan data Car
*/
class Car : public Vehicle{
private:
    // Atribut yang digunakan pada kelas Car terdiri dari merk Car beserta jenis prosesornya
    string jumlah_kursi;
    string jumlah_pintu;
public:
    // Constructor
    Car(){

    }

    string getType() const override {
        return "Car";
    }

    // Constructor : Overloading
    Car(string jumlah_kursi, string plat_nomor, string merek, string tahun_produksi, string warna) : Vehicle(plat_nomor, merek, tahun_produksi, warna){
        this->jumlah_kursi = jumlah_kursi;
    }

    // Constructor : Overloading
    Car(string jumlah_kursi, string jumlah_pintu, string plat_nomor, string merek, string tahun_produksi, string warna) : Vehicle(plat_nomor, merek, tahun_produksi, warna){
        this->jumlah_kursi = jumlah_kursi;
        this->jumlah_pintu = jumlah_pintu;
    }

    // Method setter untuk set nilai setiap atribut pada kelas Car
    void setjumlah_kursi(string jumlah_kursi){
        this->jumlah_kursi = jumlah_kursi;
    }

    void setjumlah_pintu(string jumlah_pintu){
        this->jumlah_pintu = jumlah_pintu;
    }

    // Method getter untuk mendapatkan nilai setiap atribut pada kelas Car
    string getjumlah_kursi(){
        return jumlah_kursi;
    }

    string getjumlah_pintu(){
        return jumlah_pintu;
    }

    // Destructor
    ~Car(){

    }
};
