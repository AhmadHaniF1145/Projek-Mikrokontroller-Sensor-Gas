![banner-dg-logo](https://github.com/AhmadHaniF1145/Projek-Mikrokontroller-Sensor-Gas/assets/168633171/5410750e-905b-4915-b019-66d21088dd2c)
Sistem pendeteksi kebocoran gas adalah sistem elektronik yang dirancang untuk mendeteksi dan memberi peringatan tentang kebocoran gas. Peringatan yang dihasilkan adalah dalam bentuk audio sesuai gas yang dideteksi beserta tingkat bahayanya.

`WORKSHOP MIKROKONTROLLER - PROGRAM STUDI TEKNIK ELEKTRONIKA - POLITEKNIK ELEKTRONIKA NEGERI SURABAYA`

`DOSEN PENGAMPU : Akhmad Hendriawan ST, MT`
`NIP. 197501272002121003`

`TEAM`
| No.  | Nama  | NRP  | Pembagian Tugas  |
| :------------: | :------------: | :------------: | :------------: |
| 1  | Ahmad Hanif Abiyyu Khrisna  | 2122500031  | Pengujian Sistem Pada Software, Pengujian Alat  |
| 2  | Nawfal Ulinnuha F  | 2122500041  | Publikasi melalui Github, Pembelian Hardware  |
| 3  |  Clarrisa Fitria A  | 2122500046  |  Studi Literatur, Pembuatan Audio Project |
| 4  |  Fatimah Azzahro |  2122500047 | Publikasi melalui Github, Pembuatan Audio Project |
| 5  |  Muhammad Ilham K | 2122500052  |  Desain 3D, Proses Perakitan dan Soldering, Proses Pemrograman Arduino |
| 6  | Artur Ferdiansyah  |  2122500059 | Desain Skematik dan PCB Board, Proses Perakitan dan Soldering, Proses Pemrograman Arduino  |

## Daftar Isi
- [Komponen Yang Digunakan](#Komponen-Yang-Digunakan)
- [Konsep Simulasi](#Konsep-Simulasi)
- [Skematik Rangkaian](#Skematik-Rangkaian)
- [Informasi Penempatan Modul dan Komponen](#Informasi-Penempatan-Modul-dan-Komponen)
- [Audio Project](#Audio-Project)
- [Proses Pengerjaan](#Proses-Pengerjaan)
- [Hasil](#Hasil)
- [Cara Penggunaan Alat](#Cara-Penggunaan-Alat)

## Komponen Yang Digunakan
1. Arduino Mega 2560
2. Gas Sensor MQ2
3. OLED 0.96 Inch
4. Push Button
5. LED 3mm
6. SMD LED 1206
7. Speaker/Buzzer
8. Modul amplifier PAM8403
9. IC SPI Flash W25Q32JVSSIQ (4MB)

Dan Beberapa komponen pasif seperti resistor yang salah satunya digunakan sebagai pembatas arus pada LED indikator, dan kapasitor yang digunakan pada blok rangkaian SPI Flash Eksternal yang digunakan sebagai penyimpanan data tambahan.

## Blok Diagram
![blok-diagram](https://github.com/AhmadHaniF1145/Projek-Mikrokontroller-Sensor-Gas/assets/168633171/5de60579-8eb1-49ba-956a-eee95a36ae92)
Prinsip kerja dari sistem pendeteksi kebocoran gas yaitu dimulai dengan sistem pertama kali digunakan dimana sumber daya berasal dari baterai. Ketika tidak terdeteksi kebocoran gas, maka LED hijau akan selalu menyala. Ketika kebocoran gas terdeteksi oleh sensor MQ-2 dengan threshold yang telah disetting oleh push button 1, maka speaker mengeluarkan audio. Untuk informasi threshold yaitu threshold 400 dan 600 masih dalam level siaga dengan indikasi audio "terdeteksi kebocoran gas hati-hati siaga", kemudian threshold 800 sudah dalam level bahaya dengan indikasi audio "bahaya, bahaya, bahaya terdeteksi kebocoran gas". LCD OLED digunakan untuk menampilkan informasi threshold dan banyaknya gas yang terdeteksi. Jika gas yang terdeteksi melebihi threshold, maka speaker mengeluarkan audio dibarengi dengan LED merah yang juga ikut menyala. Untuk mematikan speaker, digunakan push button 2 dan LED hijau kembali menyala yang berarti kondisi sudah diatasi atau sudah aman.

## Konsep Simulasi
Berikut adalah skematik breadboard untuk simulasi menggunakan TinkerCad yang menggunakan Arduino Uno.


https://github.com/AhmadHaniF1145/Projek-Mikrokontroller-Sensor-Gas/assets/168633171/c68b0559-28a6-41bc-bea3-4cfa7fe1158b




## Skematik Rangkaian
Berikut ini adalah hasil skematik rangkaian sistem pendeteksi kebocoran gas menggunakan software KiCad.

![Schematic - Final](https://github.com/AhmadHaniF1145/Projek-Mikrokontroller-Sensor-Gas/assets/96289624/577b15af-4e1f-4909-9a41-ec3f98f00416)

Berikut adalah link tutorial dalam pembuatan skematik menggunakan KiCad bisa dilihat pada video [berikut.](https://youtu.be/a5kBzt2_dH4 "berikut.") Untuk semua file yang dibutuhkan terkait skematik rangkaian bisa diakses pada link [berikut.](https://github.com/AhmadHaniF1145/Projek-Mikrokontroller-Sensor-Gas/tree/main/PCB%20Board "berikut.")




## Desain 3D
Berikut ini adalah hasil [desain 3D](https://github.com/AhmadHaniF1145/Projek-Mikrokontroller-Sensor-Gas/tree/main/Desain%203D "Desain 3D") :
1. Desain 3D Casing
![WhatsApp Image 2024-05-21 at 08 23 37 (1)](https://github.com/AhmadHaniF1145/Projek-Mikrokontroller-Sensor-Gas/assets/168633171/a8f32070-f779-429f-9d4e-500686a4b812)
2. Desain 3D Casing + Komponen
![Casing_3D_2024-May-12_09-13-18AM-000_CustomizedView19460723771](https://github.com/AhmadHaniF1145/Projek-Mikrokontroller-Sensor-Gas/assets/168633171/9b444903-7310-4619-b300-ca68e863c4d1)
3. Desain 3D PCB dengan Komponen
![3D Image dengan komponen (tidak lengkap)](https://github.com/AhmadHaniF1145/Projek-Mikrokontroller-Sensor-Gas/assets/168683498/b7f1c2a8-1838-49a4-97ea-847170ede539)
4. Desain 3D PCB tanpa Komponen
![3D Image tanpa komponen](https://github.com/AhmadHaniF1145/Projek-Mikrokontroller-Sensor-Gas/assets/168683498/1d6cba32-6652-4590-9f34-5f4ce87ad227)

Berikut adalah video tutorial pembuatan desain casing menggunakan Autodesk Fusion versi sederhana. Klik link [youtube berikut](https://youtu.be/2gopSfegvmg?si=Se-gvMHZY0zX1dgN "youtube berikut")

Berikut adalah tutorial dalam pembuatan desain PCB menggunakan KiCad pada proyek ini. Bisa klik link [berikut.](https://youtu.be/dg8yomkr-xE "berikut.")

Asset 3D yang sudah jadi dapat di download pada [link Thingiverse berikut](https://www.thingiverse.com/thing:6621092 "link Thingiverse berikut")

## Informasi Penempatan Modul dan Komponen
Tata letak dan informasi terkait penempatan Modul dan Komponen untuk memudahkan pengguna dalam melakukan perakitan
![Configuration](https://github.com/AhmadHaniF1145/Projek-Mikrokontroller-Sensor-Gas/assets/96289624/7aa48c24-adea-40a0-a9db-cbcecc07b824)

## Manufacture Drawing untuk Casing
Berikut adalah detail ukuran casing untuk kebutuhan manufaktur
![Casing 3D Drawing v3](https://github.com/AhmadHaniF1145/Projek-Mikrokontroller-Sensor-Gas/assets/91182185/6e529cb8-5fef-47b7-8c0e-fb82138d0f7d)

https://github.com/AhmadHaniF1145/Projek-Mikrokontroller-Sensor-Gas/assets/91182185/3b76fa04-874f-4a73-a389-29a3c4dec217


## Program
Program utama dari projek ini dibagi menjadi dua, yaitu :
- [Arduino dengan C](https://github.com/AhmadHaniF1145/Projek-Mikrokontroller-Sensor-Gas/tree/main/ProgramUtama/Program%20Utama_PlatformIO "Arduino dengan C")
- [Arduino dengan Bare Metal Programming.](https://github.com/AhmadHaniF1145/Projek-Mikrokontroller-Sensor-Gas/tree/main/ProgramUtama/Program%20Utama_Bare%20Metal_PlatformIO "Arduino dengan Bare Metal Programming.")

#### Timer 0
Projek ini memakai Timer 0 untuk memainkan suara yang disimpan pada Flash Memory (dibahas lebih lanjut pada [bagian audio project](## Audio Project "bagian audio project")). Berikut adalah baris kode utama untuk memainkan audio melalui sinyal PWM melalui Timer 0.
`OCR0A = sounddata_length + lastSample - sample;`


#### EEPROM
Alat ini dapat mendeteksi gas dengan Threshold (batas deteksi) yang berbeda sesuai yang diinginkan. Pengguna dapat menekan tombol kiri untuk mengganti mode Threshold. Mode yang diatur akan disimpan pada EEPROM.
`eeprom_write_byte((uint8_t*)0, thresholdIndex);`

Kemudian dibaca menggunakan
`int pilihanLagu = eeprom_read_byte((uint8_t*)0);`


## Audio Project
[Audio Project](https://github.com/AhmadHaniF1145/Projek-Mikrokontroller-Sensor-Gas/tree/main/Audio_Project "Audio Project")
Terdapat 2 mode audio sebagai deteksi adanya kebocoran gas, yaitu :
1. Terdeteksi kebocoran gas hati-hati siaga
2. Bahaya, bahaya, bahaya terdeteksi kebocoran gas

Berikut hasil pembuatan audio dengan hasil editnya menggunakan software Audacity yang kemudian didapatkan file raw yang dibuka melalui software HxD untuk memperoleh datanya dan didapatkan program bahasa C. Program bahasa C tersebut digunakan untuk memrogram Arduino ATMega 2560 agar audio berfungsi. Berikut hasil dokumentasinya  :
1. Terdeteksi kebocoran gas hati-hati siaga
![audio1 auda](https://github.com/AhmadHaniF1145/Projek-Mikrokontroller-Sensor-Gas/assets/168633171/db14e100-4098-4b76-860f-b313bf87644a)
![audio1 hxd](https://github.com/AhmadHaniF1145/Projek-Mikrokontroller-Sensor-Gas/assets/168633171/29da9884-2d4c-4708-83c8-867e1dda656a)
![audio1 c](https://github.com/AhmadHaniF1145/Projek-Mikrokontroller-Sensor-Gas/assets/168633171/564c69fe-35a1-4499-8651-8312e3c7a250)
Hasil audio sebelum dan sesudah diedit menggunakan software Audacity [di sini](https://youtu.be/VL2fVMhNUZw "di sini").
2. Bahaya, bahaya, bahaya terdeteksi kebocoran gas
![audio2 auda](https://github.com/AhmadHaniF1145/Projek-Mikrokontroller-Sensor-Gas/assets/168633171/187c9402-27a3-49af-9626-3644c708aaee)
![audio2 hxd](https://github.com/AhmadHaniF1145/Projek-Mikrokontroller-Sensor-Gas/assets/168633171/a9354b83-d256-4b3c-a181-f101cccddfb0)
![audio2 c](https://github.com/AhmadHaniF1145/Projek-Mikrokontroller-Sensor-Gas/assets/168633171/9447c832-1cc8-4728-af79-7b8b3e97abe5)
Hasil audio sebelum dan sesudah diedit menggunakan software Audacity [di sini](https://youtu.be/l1GMS38mKNk "di sini").
3. Video Tutorial : Langkah - Langkah Convert Audio Ke Bahasa C

   https://github.com/AhmadHaniF1145/Projek-Mikrokontroller-Sensor-Gas/assets/168683498/8abb6570-371c-4412-ba63-2867d9131914



## Proses Pengerjaan
Berikut dokumentasi pada proses pengerjaan. [Dokumentasi](https://github.com/AhmadHaniF1145/Projek-Mikrokontroller-Sensor-Gas/tree/main/Dokumentasi "Dokumentasi")
1. Studi Literatur
   ![Studi Literatur](https://github.com/AhmadHaniF1145/Projek-Mikrokontroller-Sensor-Gas/assets/150546371/e9ad544b-3647-4cb4-966b-386ff4137156)
2. Pengujian Sistem Pada Software 
   ![Pengujian Pada Software](https://github.com/AhmadHaniF1145/Projek-Mikrokontroller-Sensor-Gas/assets/150546371/58fa7de5-7648-4a31-a1eb-2987f2e24bda)
3. Pembuatan Desain Skematik dan PCB Board
   ![Pembuatan Skematik dan PCB Board](https://github.com/AhmadHaniF1145/Projek-Mikrokontroller-Sensor-Gas/assets/150546371/a61b2d4b-8f7d-4307-8d9f-82e97e848a13)
4. Pembuatan 3D Desain
   ![Pembuatan 3D](https://github.com/AhmadHaniF1145/Projek-Mikrokontroller-Sensor-Gas/assets/150546371/43f4b9ed-8e2d-469c-9ec7-2e30baed2ef1)
5. Pembelian Hardware
   ![Komponen yang Sudah Dibeli](https://github.com/AhmadHaniF1145/Projek-Mikrokontroller-Sensor-Gas/assets/150546371/aad3c841-9530-4f73-ab77-41c3650a7310)
6. Proses Perakitan dan Soldering
   ![Proses Penyolderan](https://github.com/AhmadHaniF1145/Projek-Mikrokontroller-Sensor-Gas/assets/150546371/34c81782-c5ae-4519-846f-b6ffb496b3dc)
7. Proses Pembuatan Audio 
   ![Pembuatan Audio Project](https://github.com/AhmadHaniF1145/Projek-Mikrokontroller-Sensor-Gas/assets/150546371/5acbe0c3-b9a7-447f-bf3b-ef61c6bcfbeb)
8. Proses Pemrograman Arduino
   ![Pembuataan Program](https://github.com/AhmadHaniF1145/Projek-Mikrokontroller-Sensor-Gas/assets/150546371/491c5d70-fe31-4a7a-b16a-53aa4eae5b59)
9. Pengujian Alat
   GAMBAR MENYUSUL
10. Publikasi GitHub
   ![Publikasi pada Github](https://github.com/AhmadHaniF1145/Projek-Mikrokontroller-Sensor-Gas/assets/150546371/61307e4c-8f1c-4800-a24c-95b3918444b6)

## Hasil
1. PCB Print
   ![Desain PCB](https://github.com/AhmadHaniF1145/Projek-Mikrokontroller-Sensor-Gas/assets/150546371/cc4efcfb-a59f-4487-8c4c-743b52c8caa1)
2. 3D Print
   ![Hasil Desain 3D](https://github.com/AhmadHaniF1145/Projek-Mikrokontroller-Sensor-Gas/assets/150546371/f10de660-c18d-428b-9cc5-54c10c6ddce9)

## Cara Penggunaan Alat
1. Pastikan baterai dalam kondisi penuh kemudian pasang baterai pada tempatnya yaitu di dalam casing. Tutup kemasan dengan benar.
2. Pasang LCD OLED di tempatnya yaitu di luar casing.
3. Nyalakan power switch.
4. Atur threshold sesuai kebutuhan menggunakan push button sebelah kanan. Untuk informasi threshold sebagai berikut.
   Semakin besar nilai threshold maka kebocoran gas yang dideteksi semakin banyak dan bahaya.
   Semakun kecil nilai threshold maka sedikit saja kebocoran gas dapat terdeteksi.
6. Alat sudah siap digunakan untuk mendeteksi kebocoran gas dengan indikator LED hijau menyala jika tidak ada kebocoran gas yang terdeteksi.
7. Apabila sensor telah mendeteksi gas melebihi threshold yang diatur, maka LED warna merah dan audio menyala berulaang-ulang tergantung threshold yang disetting.
   threshold 400 dan 600 dalam level siaga dengan audio "Terdeteksi kebocoran gas hati-hati siaga"
   threshold 800 dalam level bahaya dengan audio "Bahaya, bahaya, bahaya terdeteksi kebocoran gas"
8. Audio bisa dimatikan dengan menekan push button sebelah kiri kemudian LED yang menyala berganti menjadi warna hijau kembali.
