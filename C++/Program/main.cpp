/* 
    Saya Adrian Mulianto NIM [2200939] mengerjakan soal Latihan Praktikum-2 dalam mata kuliah DPBO
    untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin 
*/

// memanggil liblary dan class yang digunakan
#include <iostream>
#include <vector>
#include <string>
#include "Vehicle.cpp"
#include "Car.cpp"
#include "Motorcycle.cpp"
#include "Garage.cpp"
#include "ParkingLot.cpp"

using namespace std; // Menggunakan namespace std untuk mengakses fungsi dan objek standar C++

int main() {
    ios::sync_with_stdio(0);
    cin.tie();

    // Deklarasi variabel
    string namaGarasi = "Parkiran alam"; // Menyimpan nama garasi
    string luasGarasi = "500"; // Menyimpan luas garasi
    string kapasitasParkingLot = "100"; // Menyimpan kapasitas tempat parkir
    string JumlahKendaraan = "6"; // Menyimpan jumlah kendaraan

    // Instansiasi objek Garage dan ParkingLot
    Garage garasi(namaGarasi, luasGarasi); // Membuat objek garasi dengan nama dan luas yang ditentukan
    ParkingLot parkingLot(kapasitasParkingLot, JumlahKendaraan); // Membuat objek parkingLot dengan kapasitas dan jumlah kendaraan yang ditentukan

    // Menambahkan kendaraan ke Garasi
    garasi.addVehicle(new Car("1", "2", "B 1234 XY1", "Toyota", "2012", "Red")); // Menambahkan mobil ke garasi
    garasi.addVehicle(new Car("3", "4", "X 3533 XYH", "Honda", "2022", "Blue")); // Menambahkan mobil ke garasi
    garasi.addVehicle(new Car("5", "6", "F 9875 XYY", "Suzuki", "2080", "Green")); // Menambahkan mobil ke garasi

    garasi.addVehicle(new Motorcycle("750cc", "Standard", "B 5678 XYF", "Honda", "2014", "Blue")); // Menambahkan motor ke garasi
    garasi.addVehicle(new Motorcycle("290cc", "Special", "B 3643 XY2", "Toyota", "2011", "Yellow")); // Menambahkan motor ke garasi
    garasi.addVehicle(new Motorcycle("440cc", "Standard", "B 4156 XYR", "Suzuki", "2029", "Pink")); // Menambahkan motor ke garasi

    // Menampilkan informasi Garasi
    cout << "|----------------------------------|" << endl;
    cout << "|Informasi Parkiran                |" << endl;
    cout << "|----------------------------------|" << endl;
    cout << "|Nama: " << garasi.getnama_garasi() << "               |" << endl;
    cout << "|Luas: " << garasi.getluas_garasi() << " meter persegi           |" << endl;
    cout << "|Kapasitas: " << parkingLot.getkapasitas() << "                    |" << endl;
    cout << "|Jumlah Kendaraan Terparkir: " << parkingLot.getjumlah_kendaraan_saat_ini() << "     |" << endl;
    cout << "|----------------------------------|" << endl;
    cout << " Daftar Kendaraan di " << garasi.getnama_garasi() << " :" << endl;

    // menampilkan data parkiran garasi pertama
    vector<Vehicle*> daftarKendaraan_a = garasi.getdaftar_kendaraan(); // Mendapatkan daftar kendaraan dari garasi
    int x = 1; // Inisialisasi counter untuk menampilkan kendaraan keberapa
    for (Vehicle* vehicle : daftarKendaraan_a) { // Iterasi melalui setiap kendaraan dalam daftar
        if (vehicle->getType() == "Car") { // Jika kendaraan adalah mobil
            Car* car = dynamic_cast<Car*>(vehicle); // Mengubah pointer kendaraan ke pointer mobil
            if(car){ // Jika konversi berhasil
                cout << " Kendaraan ke : " << (x) << endl;
                cout << " - Jenis Kendaraan: Mobil" << endl;
                cout << " - Nomor Plat     : " << car->getplat_nomor() << endl;
                cout << " - Merk           : " << car->getmerek() << endl;
                cout << " - Tahun Produksi : " << car->gettahun_produksi() << endl;
                cout << " - Warna          : " << car->getwarna() << endl;
                cout << " - Jumlah Kursi   : " << car->getjumlah_kursi() << endl;
                cout << " - Jumlah Pintu   : " << car->getjumlah_pintu() << endl;
                cout << endl;
                x++; // Menambahkan counter
            }
        } else if (vehicle->getType() == "Motorcycle") { // Jika kendaraan adalah motor
            Motorcycle* motor = dynamic_cast<Motorcycle*>(vehicle); // Mengubah pointer kendaraan ke pointer motor
            if(motor){ // Jika konversi berhasil
                cout << " Kendaraan ke : " << (x) << endl;
                cout << " - Jenis Kendaraan : Motor" << endl;
                cout << " - Nomor Plat      : " << motor->getplat_nomor() << endl;
                cout << " - Merk            : " << motor->getmerek() << endl;
                cout << " - Tahun Produksi  : " << motor->gettahun_produksi() << endl;
                cout << " - Warna           : " << motor->getwarna() << endl;
                cout << " - Jenis Motor     : " << motor->getjenis_motor() << endl;
                cout << " - Kapasitas Tangki: " << motor->getkapasitas_tangki() << endl;
                cout << endl;
                x++; // Menambahkan counter
            }
        }
    }

    // Deklarasi variabel untuk garasi kedua
    string namaGarasi2 = "Parkiran ucok"; // Menyimpan nama garasi kedua
    string luasGarasi2 = "800"; // Menyimpan luas garasi kedua
    string kapasitasParkingLot2 = "250"; // Menyimpan kapasitas tempat parkir kedua
    string JumlahKendaraan2 = "4"; // Menyimpan jumlah kendaraan kedua

    // Instansiasi objek Garage dan ParkingLot untuk garasi kedua
    Garage garasi2(namaGarasi2, luasGarasi2); // Membuat objek garasi kedua dengan nama dan luas yang ditentukan
    ParkingLot parkingLot2(kapasitasParkingLot2, JumlahKendaraan2); // Membuat objek parkingLot kedua dengan kapasitas dan jumlah kendaraan yang ditentukan

    // Menambahkan kendaraan ke Garasi kedua
    garasi2.addVehicle(new Car("6", "9", "C 8532 KHG", "CBR", "2062", "Purple")); // Menambahkan mobil ke garasi kedua
    garasi2.addVehicle(new Car("5", "17", "S 8644 XKH", "Honda", "2011", "Gray")); // Menambahkan mobil ke garasi kedua

    garasi2.addVehicle(new Motorcycle("950cc", "Ultra", "B 2477 JGF", "Suzuki", "2084", "Black")); // Menambahkan motor ke garasi kedua
    garasi2.addVehicle(new Motorcycle("770cc", "Hight", "B 3643 XY2", "Supra", "2001", "Orange")); // Menambahkan motor ke garasi kedua

    // Menampilkan informasi Garasi kedua
    cout << "\n|----------------------------------|" << endl;
    cout << "|Informasi Parkiran                |" << endl;
    cout << "|----------------------------------|" << endl;
    cout << "|Nama: " << garasi2.getnama_garasi() << "               |" << endl;
    cout << "|Luas: " << garasi2.getluas_garasi() << " meter persegi           |" << endl;
    cout << "|Kapasitas: " << parkingLot2.getkapasitas() << "                    |" << endl;
    cout << "|Jumlah Kendaraan Terparkir: " << parkingLot2.getjumlah_kendaraan_saat_ini() << "     |" << endl;
    cout << "|----------------------------------|" << endl;
    cout << " Daftar Kendaraan di " << garasi2.getnama_garasi() << " :" << endl;

    // Menampilkan data parkiran garasi kedua
    vector<Vehicle*> daftarKendaraan_b = garasi2.getdaftar_kendaraan(); // Mendapatkan daftar kendaraan dari garasi kedua

    int y = 1; // Inisialisasi counter untuk menampilkan kendaraan keberapa
    for (Vehicle* vehicle : daftarKendaraan_b) { // Iterasi melalui setiap kendaraan dalam daftar kedua
        if (vehicle->getType() == "Car") { // Jika kendaraan adalah mobil
            Car* car = dynamic_cast<Car*>(vehicle); // Mengubah pointer kendaraan ke pointer mobil
            if(car){ // Jika konversi berhasil
                cout << " Kendaraan ke : " << (y) << endl;
                cout << " - Jenis Kendaraan: Mobil" << endl;
                cout << " - Nomor Plat     : " << car->getplat_nomor() << endl;
                cout << " - Merk           : " << car->getmerek() << endl;
                cout << " - Tahun Produksi : " << car->gettahun_produksi() << endl;
                cout << " - Warna          : " << car->getwarna() << endl;
                cout << " - Jumlah Kursi   : " << car->getjumlah_kursi() << endl;
                cout << " - Jumlah Pintu   : " << car->getjumlah_pintu() << endl;
                cout << endl;
                y++; // Menambahkan counter
            }
        } else if (vehicle->getType() == "Motorcycle") { // Jika kendaraan adalah motor
            Motorcycle* motor = dynamic_cast<Motorcycle*>(vehicle); // Mengubah pointer kendaraan ke pointer motor
            if(motor){ // Jika konversi berhasil
                cout << " Kendaraan ke : " << (y) << endl;
                cout << " - Jenis Kendaraan : Motor" << endl;
                cout << " - Nomor Plat      : " << motor->getplat_nomor() << endl;
                cout << " - Merk            : " << motor->getmerek() << endl;
                cout << " - Tahun Produksi  : " << motor->gettahun_produksi() << endl;
                cout << " - Warna           : " << motor->getwarna() << endl;
                cout << " - Jenis Motor     : " << motor->getjenis_motor() << endl;
                cout << " - Kapasitas Tangki: " << motor->getkapasitas_tangki() << endl;
                cout << endl;
                y++; // Menambahkan counter
            }
        }
    }

    return 0;
}
