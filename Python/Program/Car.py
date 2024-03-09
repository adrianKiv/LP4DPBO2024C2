
    # Saya Adrian Mulianto NIM [2200939] mengerjakan soal Latihan Praktikum-4 dalam mata kuliah DPBO
    # untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin 

from Vehicle import Vehicle

class Car(Vehicle):
    def __init__(self, plat_nomor = "", merek = "", tahun_produksi = "", warna = "", jumlah_kursi = "", jumlah_pintu = ""):
        super().__init__(plat_nomor, merek, tahun_produksi, warna)
        self.jumlah_kursi = jumlah_kursi
        self.jumlah_pintu = jumlah_pintu

    def get_type(self):
        return "Car"

    # Method setter untuk set nilai setiap atribut pada kelas car
    def set_jumlah_kursi(self, jumlah_kursi):
        self.jumlah_kursi = jumlah_kursi

    def set_jumlah_pintu(self, jumlah_pintu):
        self.jumlah_pintu = jumlah_pintu

    # Method getter untuk mendapatkan nilai setiap atribut pada kelas car
    def get_jumlah_kursi(self):
        return self.jumlah_kursi

    def get_jumlah_pintu(self):
        return self.jumlah_pintu