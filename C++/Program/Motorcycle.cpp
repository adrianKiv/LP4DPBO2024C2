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
    Kelas Motorcycle yang digunakan untuk merepresentasikan data Motorcycle
*/
class Motorcycle : public Vehicle{
private:
    // Atribut yang digunakan pada kelas Motorcycle terdiri dari merk Motorcycle beserta jenis prosesornya
    string jenis_motor;
    string kapasitas_tangki;
public:
    // Constructor
    Motorcycle(){

    }

    string getType() const override {
        return "Motorcycle";
    }

    // Constructor : Overloading
    Motorcycle(string jenis_motor, string plat_nomor, string merek, string tahun_produksi, string warna) : Vehicle(plat_nomor, merek, tahun_produksi, warna){
        this->jenis_motor = jenis_motor;
    }

    // Constructor : Overloading
    Motorcycle(string jenis_motor, string kapasitas_tangki, string plat_nomor, string merek, string tahun_produksi, string warna) : Vehicle(plat_nomor, merek, tahun_produksi, warna){
        this->jenis_motor = jenis_motor;
        this->kapasitas_tangki = kapasitas_tangki;
    }

    // Method setter untuk set nilai setiap atribut pada kelas Motorcycle
    void setjenis_motor(string jenis_motor){
        this->jenis_motor = jenis_motor;
    }

    void setkapasitas_tangki(string kapasitas_tangki){
        this->kapasitas_tangki = kapasitas_tangki;
    }

    // Method getter untuk mendapatkan nilai setiap atribut pada kelas Motorcycle
    string getjenis_motor(){
        return jenis_motor;
    }

    string getkapasitas_tangki(){
        return kapasitas_tangki;
    }

    // Destructor
    ~Motorcycle(){

    }
};
