# LP4DPBO2024
## Janji
Saya Adrian Mulianto NIM [2200939] mengerjakan soal Latihan Praktikum-4 dalam mata kuliah DPBO untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin 

## Desain dan Alur Program

1. user memasukan data kendaraan
2. mesin akan menampilkan data kendaraan yang dimasukan oleh user

![LP4DPBO drawio](https://github.com/adrianKiv/LP4DPBO2024C2/assets/134991383/d2e94dcf-758b-48e9-a300-2e5bc7d28335)

## Penjelasan Program
1. Kelas Car
   Kelas Anak dari Kelas Vehicle
   `Atribut`: Jumlah Kursi & Jumlah Pintu
   `Method`: Konstruktor, Setter & Getter
2. Kelas Motorcycle
   Kelas Anak dari Kelas Vehicle
   `Atribut`: Jenis Motor & Kapasitas Tangki
   `Method`: Konstruktor, Setter & Getter
3. Kelas Vehicle
   Kelas Induk dari Kelas Car & Kelas Motorcycle
   `Atribut`: Nama Kendaraan, Plat Nomor, Merk, Tahun Produksi, Warna
    `Method`: Konstruktor, Setter & Getter
4. Kelas Garage
   Kelas Mandiri, tidak bergantung pada kelas lain
   Memiliki Hubungan Composite dengan Kelas Car, Kelas Motorcycle dan kelas ParkingLot, karena objek dari kelas Garage memiliki atribut yang merupakan objek dari Kelas Car, Kelas Motorcycle dan Kelas           ParkingLot.
   `Atribut`: Nama Garasi, Luas Garasi, daftarKendaraan (menyimpan objek dari kelas Car dan objek dari kelas Motorcycle)
   `Method`: Konstruktor, Setter & Getter
5. Kelas Parking Lot
   Kelas Mandiri, tidak bergantung pada kelas lain
   `Atribut`: Kapasitas, Jumlah Kendaraan Saat Ini
   `Method`: Konstruktor, Setter & Getter
6. Kelas Printer
   Menampilkan semua informasi terkait data kendaraan, agar tampilan data dalam sebuah table
   `Atribut`: find_max_length, print_table_car dan print_table_motorcycle
   `Method`: Konstruktor, Membuat Tabel & Menampilkan Data


## Dokumentasi Program
- Data kendaraan di parkiran 1
![Cuplikan layar 2024-03-10 073149](https://github.com/adrianKiv/LP4DPBO2024C2/assets/134991383/a2e840ff-5cb0-4eb4-bd11-a060fddee756)
- Data kendaraan di parkiran 2
![Cuplikan layar 2024-03-10 073212](https://github.com/adrianKiv/LP4DPBO2024C2/assets/134991383/8bda711d-b7dc-4b46-84b9-9df1d05c3e5b)
