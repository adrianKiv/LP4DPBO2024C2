/* 
    Saya Adrian Mulianto NIM [2200939] mengerjakan soal Latihan Praktikum-2 dalam mata kuliah DPBO
    untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin 
*/

// Menggunakan pragma once agar header file hanya di-include satu kali
#pragma once
// Memasukan library yang digunakan
#include <iostream>
#include <string>

// Deklarasi namespace
using namespace std;

/*
    Kelas Vehicle yang digunakan untuk merepresentasikan data Vehicle
*/
class Vehicle {
private:
    // Atribut yang digunakan pada kelas Vehicle terdiri dari merk Vehicle beserta jenis prosesornya
    string plat_nomor;
    string merek;
    string tahun_produksi;
    string warna;
public:
    // Constructor
    Vehicle(){

    }

    // Add a virtual getType method
    virtual string getType() const {
        return "Vehicle";
    }

    // Constructor : Overloading
    Vehicle(string plat_nomor){
        this->plat_nomor = plat_nomor;
        merek = "";
        tahun_produksi = "";
        this->warna = "";
    }

    // Constructor : Overloading
    Vehicle(string plat_nomor, string merek){
        this->plat_nomor = plat_nomor;
        this->merek = merek;
        tahun_produksi = "";
        this->warna = "";
    }

    // Constructor : Overloading
    Vehicle(string plat_nomor, string merek, string tahun_produksi){
        this->plat_nomor = plat_nomor;
        this->merek = merek;
        this->tahun_produksi = tahun_produksi;
        this->warna = "";
    }

    // Constructor : Overloading
    Vehicle(string plat_nomor, string merek, string tahun_produksi, string warna){
        this->plat_nomor = plat_nomor;
        this->merek = merek;
        this->tahun_produksi = tahun_produksi;
        this->warna = warna;
    }

    // Method setter untuk set nilai setiap atribut pada kelas Vehicle
    void setplat_nomor(string plat_nomor){
        this->plat_nomor = plat_nomor;
    }

    void setmerek(string merek){
        this->merek = merek;
    }

    void settahun_produksi(string tahun_produksi){
        this->tahun_produksi = tahun_produksi;
    }

    void setwarna(string warna){
        this->warna = warna;
    }

    // Method getter untuk mendapatkan nilai setiap atribut pada kelas Vehicle
    string getplat_nomor(){
        return plat_nomor;
    }

    string getmerek(){
        return merek;
    }

    string gettahun_produksi(){
        return tahun_produksi;
    }

    string getwarna(){
        return warna;
    }

    // Destructor
    ~Vehicle(){

    }
};
