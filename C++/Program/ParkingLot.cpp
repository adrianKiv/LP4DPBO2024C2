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
    Kelas ParkingLot yang digunakan untuk merepresentasikan data ParkingLot
*/
class ParkingLot {
private:
    // Atribut yang digunakan pada kelas ParkingLot terdiri dari merk ParkingLot beserta jenis prosesornya
    string kapasitas;
    string jumlah_kendaraan_saat_ini;
public:
    // Constructor
    ParkingLot(){

    }

    // Constructor : Overloading
    ParkingLot(string kapasitas){
        this->kapasitas = kapasitas;
    }

    // Constructor : Overloading
    ParkingLot(string kapasitas, string jumlah_kendaraan_saat_ini){
        this->kapasitas = kapasitas;
        this->jumlah_kendaraan_saat_ini = jumlah_kendaraan_saat_ini;
    }

    // Method setter untuk set nilai setiap atribut pada kelas ParkingLot
    void setkapasitas(string kapasitas){
        this->kapasitas = kapasitas;
    }

    void setjumlah_kendaraan_saat_ini(string jumlah_kendaraan_saat_ini){
        this->jumlah_kendaraan_saat_ini = jumlah_kendaraan_saat_ini;
    }

    // Method getter untuk mendapatkan nilai setiap atribut pada kelas ParkingLot
    string getkapasitas(){
        return kapasitas;
    }

    string getjumlah_kendaraan_saat_ini(){
        return jumlah_kendaraan_saat_ini;
    }

    // Destructor
    ~ParkingLot(){

    }
};
