/* 
    Saya Adrian Mulianto NIM [2200939] mengerjakan soal Latihan Praktikum-2 dalam mata kuliah DPBO
    untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin 
*/

// Menggunakan pragma once agar header file hanya di-include satu kali
#pragma once
// Memasukan library yang digunakan
#include <iostream>
#include <string>
#include <vector>
#include "Car.cpp"
#include "Motorcycle.cpp"
#include "ParkingLot.cpp"

// Deklarasi namespace
using namespace std;

/*
    Kelas Garage yang digunakan untuk merepresentasikan data Garage
*/
class Garage {
private:
    // Atribut yang digunakan pada kelas Garage terdiri dari merk Garage beserta jenis prosesornya
    string nama_garasi;
    string luas_garasi;
    vector<Vehicle*> daftar_kendaraan; // Menggunakan vector untuk menyimpan daftar kendaraan
    Car mobil;
    Motorcycle motor;
    ParkingLot parkir; 
public:
    // Constructor
    Garage(){

    }

    // Fungsi untuk menambahkan kendaraan ke garasi
    void addVehicle(Vehicle* vehicle) {
        daftar_kendaraan.push_back(vehicle);
    }

    vector<Vehicle*> getdaftar_kendaraan() const {
        return daftar_kendaraan;
    }

    // Constructor : Overloading
    Garage(string nama_garasi){
        this->nama_garasi = nama_garasi;
    }

    // Constructor : Overloading
    Garage(string nama_garasi, string luas_garasi){
        this->nama_garasi = nama_garasi;
        this->luas_garasi = luas_garasi;
    }

    // Constructor : Overloading
    Garage(string nama_garasi, string luas_garasi, Car mobil){
        this->nama_garasi = nama_garasi;
        this->luas_garasi = luas_garasi;
        this->mobil = mobil;
    }

    // Constructor : Overloading
    Garage(string nama_garasi, string luas_garasi, Car mobil, Motorcycle motor){
        this->nama_garasi = nama_garasi;
        this->luas_garasi = luas_garasi;
        this->mobil = mobil;
        this->motor = motor;
    }

    // Constructor : Overloading
    Garage(string nama_garasi, string luas_garasi, Car mobil, Motorcycle motor, ParkingLot parkir){
        this->nama_garasi = nama_garasi;
        this->luas_garasi = luas_garasi;
        this->mobil = mobil;
        this->motor = motor;
        this->parkir = parkir;
    }

    // Method setter untuk set nilai setiap atribut pada kelas Garage
    void setnama_garasi(string nama_garasi){
        this->nama_garasi = nama_garasi;
    }

    void setluas_garasi(string luas_garasi){
        this->luas_garasi = luas_garasi;
    }

    void setmobil(Car mobil){
        this->mobil = mobil;
    }

    void setmotor(Motorcycle motor){
        this->motor = motor;
    }

    void setparkir(ParkingLot parkir){
        this->parkir = parkir;
    }

    // Method getter untuk mendapatkan nilai setiap atribut pada kelas Garage
    string getnama_garasi(){
        return nama_garasi;
    }

    string getluas_garasi(){
        return luas_garasi;
    }

    Car getmobil(){
        return mobil;
    }

    Motorcycle getmotor(){
        return motor;
    }

    ParkingLot getparkir(){
        return parkir;
    }

    // Destructor
    ~Garage(){

    }
};
