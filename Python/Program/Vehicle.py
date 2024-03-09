
    # Saya Adrian Mulianto NIM [2200939] mengerjakan soal Latihan Praktikum-4 dalam mata kuliah DPBO
    # untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin 

class Vehicle:
    def __init__(self, plat_nomor = "", merek = "", tahun_produksi = "", warna = ""):
        self.plat_nomor = plat_nomor
        self.merek = merek
        self.tahun_produksi = tahun_produksi
        self.warna = warna

    def get_type(self):
        return "Vehicle"

    # Method setter untuk set nilai setiap atribut pada kelas Vehicle
    def set_plat_nomor(self, plat_nomor):
        self.plat_nomor = plat_nomor

    def set_merek(self, merek):
        self.merek = merek

    def set_tahun_produksi(self, tahun_produksi):
        self.tahun_produksi = tahun_produksi

    def set_warna(self, warna):
        self.warna = warna

    # Method getter untuk mendapatkan nilai setiap atribut pada kelas Vehicle
    def get_plat_nomor(self):
        return self.plat_nomor

    def get_merek(self):
        return self.merek

    def get_tahun_produksi(self):
        return self.tahun_produksi

    def get_warna(self):
        return self.warna
