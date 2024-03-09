
    # Saya Adrian Mulianto NIM [2200939] mengerjakan soal Latihan Praktikum-4 dalam mata kuliah DPBO
    # untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin 

from Car import Car
from Motorcycle import Motorcycle
from Garage import Garage
from ParkingLot import ParkingLot
from Vehicle import Vehicle

# Deklarasi variabel
nama_garasi = "Parkiran alam"
luas_garasi = "500"
kapasitas_parking_lot = "100"
jumlah_kendaraan = "6"

# Instansiasi objek Garage dan ParkingLot
garasi = Garage(nama_garasi, luas_garasi)
parking_lot = ParkingLot(kapasitas_parking_lot, jumlah_kendaraan)

# Menambahkan kendaraan ke Garasi
garasi.set_vehicle(Car("B 1234 XY1", "Toyota", "2012", "Red", "4", "20"))
garasi.set_vehicle(Car("X 3533 XYH", "Honda", "2022", "Blue", "5", "2"))
garasi.set_vehicle(Car("F 9875 XYY", "Suzuki", "2080", "Green", "6", "8"))

garasi.set_vehicle(Motorcycle("B 5678 XYF", "Honda", "2014", "Blue", "750cc",  "Standard"))
garasi.set_vehicle(Motorcycle("B 3643 XY2", "Toyota", "2011", "Yellow", "290cc", "Special"))
garasi.set_vehicle(Motorcycle("B 4156 XYR", "Suzuki", "2029", "Pink", "440cc", "Standard"))

# Menampilkan informasi Garasi
print("|----------------------------------|")
print("|Informasi Parkiran                |")
print("|----------------------------------|")
print(f"|Nama: {garasi.get_nama_garasi()}               |")
print(f"|Luas: {garasi.get_luas_garasi()} meter persegi           |")
print(f"|Kapasitas: {parking_lot.get_kapasitas()}                    |")
print(f"|Jumlah Kendaraan Terparkir: {parking_lot.get_jumlah_kendaraan_saat_ini()}     |")
print("|----------------------------------|")
print(f" Daftar Kendaraan di {garasi.get_nama_garasi()} :")

# Menampilkan data parkiran garasi
daftar_kendaraan = garasi.get_daftar_kendaraan()
for i, vehicle in enumerate(daftar_kendaraan, start=1):
    if vehicle.get_type() == "Car":
        print(f" Kendaraan ke : {i}")
        print(" - Jenis Kendaraan: Mobil")
        print(f" - Nomor Plat     : {vehicle.get_plat_nomor()}")
        print(f" - Merk           : {vehicle.get_merek()}")
        print(f" - Tahun Produksi : {vehicle.get_tahun_produksi()}")
        print(f" - Warna          : {vehicle.get_warna()}")
        print(f" - Jumlah Kursi   : {vehicle.get_jumlah_kursi()}")
        print(f" - Jumlah Pintu   : {vehicle.get_jumlah_pintu()}")
        print()
    elif vehicle.get_type() == "Motorcycle":
        print(f" Kendaraan ke : {i}")
        print(" - Jenis Kendaraan : Motor")
        print(f" - Nomor Plat      : {vehicle.get_plat_nomor()}")
        print(f" - Merk            : {vehicle.get_merek()}")
        print(f" - Tahun Produksi  : {vehicle.get_tahun_produksi()}")
        print(f" - Warna           : {vehicle.get_warna()}")
        print(f" - Jenis Motor     : {vehicle.get_jenis_motor()}")
        print(f" - Kapasitas Tangki: {vehicle.get_kapasitas_tangki()}")
        print()

# Deklarasi variabel untuk garasi kedua
nama_garasi2 = "Parkiran ucok"
luas_garasi2 = "800"
kapasitas_parking_lot2 = "250"
jumlah_kendaraan2 = "4"

# Instansiasi objek Garage dan ParkingLot untuk garasi kedua
garasi2 = Garage(nama_garasi2, luas_garasi2)
parking_lot2 = ParkingLot(kapasitas_parking_lot2, jumlah_kendaraan2)

# Menambahkan kendaraan ke Garasi kedua
garasi2.set_vehicle(Car("C 8532 KHG", "CBR", "2062", "Purple", "9", "12"))
garasi2.set_vehicle(Car("S 8644 XKH", "Honda", "2011", "Gray", "17", "33"))

garasi2.set_vehicle(Motorcycle("B 2477 JGF", "Suzuki", "2084", "Black", "950cc", "Ultra"))
garasi2.set_vehicle(Motorcycle("B 3643 XY2", "Supra", "2001", "Orange", "770cc", "Hight"))

# Menampilkan informasi Garasi kedua
print("\n|----------------------------------|")
print("|Informasi Parkiran                |")
print("|----------------------------------|")
print(f"|Nama: {garasi2.get_nama_garasi()}               |")
print(f"|Luas: {garasi2.get_luas_garasi()} meter persegi           |")
print(f"|Kapasitas: {parking_lot2.get_kapasitas()}                    |")
print(f"|Jumlah Kendaraan Terparkir: {parking_lot2.get_jumlah_kendaraan_saat_ini()}     |")
print("|----------------------------------|")
print(f" Daftar Kendaraan di {garasi2.get_nama_garasi()} :")

# Menampilkan data parkiran garasi kedua
daftar_kendaraan2 = garasi2.get_daftar_kendaraan()
for i, vehicle in enumerate(daftar_kendaraan2, start=1):
    if vehicle.get_type() == "Car":
        print(f" Kendaraan ke : {i}")
        print(" - Jenis Kendaraan: Mobil")
        print(f" - Nomor Plat     : {vehicle.get_plat_nomor()}")
        print(f" - Merk           : {vehicle.get_merek()}")
        print(f" - Tahun Produksi : {vehicle.get_tahun_produksi()}")
        print(f" - Warna          : {vehicle.get_warna()}")
        print(f" - Jumlah Kursi   : {vehicle.get_jumlah_kursi()}")
        print(f" - Jumlah Pintu   : {vehicle.get_jumlah_pintu()}")
        print()
    elif vehicle.get_type() == "Motorcycle":
        print(f" Kendaraan ke : {i}")
        print(" - Jenis Kendaraan : Motor")
        print(f" - Nomor Plat      : {vehicle.get_plat_nomor()}")
        print(f" - Merk            : {vehicle.get_merek()}")
        print(f" - Tahun Produksi  : {vehicle.get_tahun_produksi()}")
        print(f" - Warna           : {vehicle.get_warna()}")
        print(f" - Jenis Motor     : {vehicle.get_jenis_motor()}")
        print(f" - Kapasitas Tangki: {vehicle.get_kapasitas_tangki()}")
        print()