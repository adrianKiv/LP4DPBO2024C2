
    # Saya Adrian Mulianto NIM [2200939] mengerjakan soal Latihan Praktikum-4 dalam mata kuliah DPBO
    # untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin 

from Car import Car;
from Motorcycle import Motorcycle;
from ParkingLot import ParkingLot;

class Garage:
    def __init__(self, nama_garasi = "", luas_garasi = "", Car = "", Motorcycle = "", ParkingLot = ""):
        self.nama_garasi = nama_garasi
        self.luas_garasi = luas_garasi
        self.daftar_kendaraan = []
        self.Car = Car
        self.Motorcycle = Motorcycle
        self.ParkingLot = ParkingLot

    # Method setter untuk set nilai setiap atribut pada kelas Garage
    def set_vehicle(self, vehicle):
        self.daftar_kendaraan.append(vehicle)

    def set_nama_garasi(self, nama_garasi):
        self.nama_garasi = nama_garasi

    def set_luas_garasi(self, luas_garasi):
        self.luas_garasi = luas_garasi

    def set_mobil(self, mobil):
        self.mobil = mobil

    def set_motor(self, motor):
        self.motor = motor

    def set_parkir(self, parkir):
        self.parkir = parkir

    # Method getter untuk mendapatkan nilai setiap atribut pada kelas Garage
    def get_daftar_kendaraan(self):
        return self.daftar_kendaraan
    
    def get_nama_garasi(self):
        return self.nama_garasi

    def get_luas_garasi(self):
        return self.luas_garasi

    def get_mobil(self):
        return self.mobil

    def get_motor(self):
        return self.motor

    def get_parkir(self):
        return self.parkir
