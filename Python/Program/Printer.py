
    # Saya Adrian Mulianto NIM [2200939] mengerjakan soal Latihan Praktikum-4 dalam mata kuliah DPBO
    # untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin 

class Printer:
    def __init__(self):
        # Inisialisasi panjang maksimum untuk setiap kolom dalam tabel
        self.max_no_length = 2
        self.max_jenis_length = 15
        self.max_plat_nomor_length = 10
        self.max_merek_length = 4
        self.max_tahun_produksi_length = 5
        self.max_warna_length = 10
        self.max_kursi_length = 12
        self.max_pintu_length = 12
        self.max_jenis_motor_length = 15
        self.max_kapasitas_tangki_length = 16

    def find_max_lengths(self, daftar_kendaraan):
        # Iterasi melalui setiap kendaraan untuk menemukan panjang maksimum dari setiap atribut
        for vehicle in daftar_kendaraan:
            # Atribut umum untuk Kendaraan dan Motor
            if len(str(vehicle.get_plat_nomor())) > self.max_plat_nomor_length:
                self.max_plat_nomor_length = len(vehicle.get_plat_nomor())
            if len(vehicle.get_merek()) > self.max_merek_length:
                self.max_merek_length = len(vehicle.get_merek())
            if len(str(vehicle.get_tahun_produksi())) > self.max_tahun_produksi_length:
                self.max_tahun_produksi_length = len(vehicle.get_tahun_produksi())
            if len(vehicle.get_warna()) > self.max_warna_length:
                self.max_warna_length = len(vehicle.get_warna())

            # Atribut spesifik untuk Mobil
            if vehicle.get_type() == "Car":
                if len(str(vehicle.get_jumlah_kursi())) > self.max_kursi_length:
                    self.max_kursi_length = len(vehicle.get_jumlah_kursi())
                if len(str(vehicle.get_jumlah_pintu())) > self.max_pintu_length:
                    self.max_pintu_length = len(vehicle.get_jumlah_pintu())

            # Atribut spesifik untuk Motor
            elif vehicle.get_type() == "Motorcycle":
                if len(vehicle.get_jenis_motor()) > self.max_jenis_motor_length:
                    self.max_jenis_motor_length = len(vehicle.get_jenis_motor())
                if len(str(vehicle.get_kapasitas_tangki())) > self.max_kapasitas_tangki_length:
                    self.max_kapasitas_tangki_length = len(vehicle.get_kapasitas_tangki())

    def print_table_motorcycle(self, daftar_kendaraan):
        # Memfilter daftar kendaraan untuk menyertakan hanya Motor
        motorcycles = [vehicle for vehicle in daftar_kendaraan if vehicle.get_type() == "Motorcycle"]
        if not motorcycles:
            print("Tidak ada Motor untuk ditampilkan.")
            return

        # Menampilkan baris header untuk Motor
        header = f"| {'NO':<{self.max_no_length}} | {'JENIS KENDARAAN':<{self.max_jenis_length}} | {'NO. PLAT':<{self.max_plat_nomor_length}} | {'MERK':<{self.max_merek_length}} | {'TAHUN':<{self.max_tahun_produksi_length}} | {'WARNA':<{self.max_warna_length}} | {'JENIS MOTOR':<{self.max_jenis_motor_length}} | {'KAPASITAS TANGKI':<{self.max_kapasitas_tangki_length}} |"
        line = '+' + '-' * (len(header) - 2) + '+'
        print(line)
        print(header)
        print(line)

        # Menampilkan baris data untuk Motor
        for i, vehicle in enumerate(motorcycles, start=1):
            row = f"| {i:<{self.max_no_length}} | {vehicle.get_type():<{self.max_jenis_length}} | {vehicle.get_plat_nomor():<{self.max_plat_nomor_length}} | {vehicle.get_merek():<{self.max_merek_length}} | {vehicle.get_tahun_produksi():<{self.max_tahun_produksi_length}} | {vehicle.get_warna():<{self.max_warna_length}} | {vehicle.get_jenis_motor():<{self.max_jenis_motor_length}} | {vehicle.get_kapasitas_tangki():<{self.max_kapasitas_tangki_length}} |"
            print(row)

        print(line)

    def print_table_car(self, daftar_kendaraan):
        # Memfilter daftar kendaraan untuk menyertakan hanya Mobil
        cars = [vehicle for vehicle in daftar_kendaraan if vehicle.get_type() == "Car"]
        if not cars:
            print("Tidak ada Mobil untuk ditampilkan.")
            return

        # Menampilkan baris header untuk Mobil
        header = f"| {'NO':<{self.max_no_length}} | {'JENIS KENDARAAN':<{self.max_jenis_length}} | {'NO. PLAT':<{self.max_plat_nomor_length}} | {'MERK':<{self.max_merek_length}} | {'TAHUN':<{self.max_tahun_produksi_length}} | {'WARNA':<{self.max_warna_length}} | {'JUMLAH KURSI':<{self.max_kursi_length}} | {'JUMLAH PINTU':<{self.max_pintu_length}} |"
        line = '+' + '-' * (len(header) - 2) + '+'
        print(line)
        print(header)
        print(line)

        # Menampilkan baris data untuk Mobil
        for i, vehicle in enumerate(cars, start=1):
            row = f"| {i:<{self.max_no_length}} | {vehicle.get_type():<{self.max_jenis_length}} | {vehicle.get_plat_nomor():<{self.max_plat_nomor_length}} | {vehicle.get_merek():<{self.max_merek_length}} | {vehicle.get_tahun_produksi():<{self.max_tahun_produksi_length}} | {vehicle.get_warna():<{self.max_warna_length}} | {vehicle.get_jumlah_kursi():<{self.max_kursi_length}} | {vehicle.get_jumlah_pintu():<{self.max_pintu_length}} |"
            print(row)

        print(line)