
    # Saya Adrian Mulianto NIM [2200939] mengerjakan soal Latihan Praktikum-4 dalam mata kuliah DPBO
    # untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin 

class ParkingLot:
    def __init__(self, kapasitas = "", jumlah_kendaraan_saat_ini = ""):
        self.kapasitas = kapasitas
        self.jumlah_kendaraan_saat_ini = jumlah_kendaraan_saat_ini

    # Method setter untuk set nilai setiap atribut pada kelas ParkingLot
    def set_kapasitas(self, kapasitas):
        self.kapasitas = kapasitas

    def set_jumlah_kendaraan_saat_ini(self, jumlah_kendaraan_saat_ini):
        self.jumlah_kendaraan_saat_ini = jumlah_kendaraan_saat_ini

    # Method getter untuk mendapatkan nilai setiap atribut pada kelas ParkingLot
    def get_kapasitas(self):
        return self.kapasitas

    def get_jumlah_kendaraan_saat_ini(self):
        return self.jumlah_kendaraan_saat_ini
