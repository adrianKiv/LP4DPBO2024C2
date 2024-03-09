
    # Saya Adrian Mulianto NIM [2200939] mengerjakan soal Latihan Praktikum-4 dalam mata kuliah DPBO
    # untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin 

from Vehicle import Vehicle

class Motorcycle(Vehicle):
    def __init__(self, plat_nomor = "", merek = "", tahun_produksi = "", warna = "", jenis_motor = "", kapasitas_tangki = ""):
        super().__init__(plat_nomor, merek, tahun_produksi, warna)
        self.jenis_motor = jenis_motor
        self.kapasitas_tangki = kapasitas_tangki

    def get_type(self):
        return "Motorcycle"

    # Method setter untuk set nilai setiap atribut pada kelas Motorcycle
    def set_jenis_motor(self, jenis_motor):
        self.jenis_motor = jenis_motor

    def set_kapasitas_tangki(self, kapasitas_tangki):
        self.kapasitas_tangki = kapasitas_tangki

    # Method getter untuk mendapatkan nilai setiap atribut pada kelas Motorcycle
    def get_jenis_motor(self):
        return self.jenis_motor

    def get_kapasitas_tangki(self):
        return self.kapasitas_tangki
