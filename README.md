![SISTEM PENDETEKSI KEBOCORAN GAS (2)](https://github.com/AhmadHaniF1145/Projek-Mikrokontroller-Sensor-Gas/assets/168683498/e76d59b6-fd9b-4618-88f2-fbd6e8390744)
Sistem pendeteksi kebocoran gas adalah sistem elektronik yang dirancang untuk mendeteksi dan memberi peringatan tentang kebocoran gas. Peringatan yang dihasilkan adalah dalam bentuk audio sesuai gas yang dideteksi beserta tingkat bahayanya.
## Daftar Isi
- [Komponen Yang Digunakan](#Komponen-Yang-Digunakan)
- [Konsep Simulasi](#Konsep-Simulasi)
- [Skematik Rangkaian](#Skematik-Rangkaian)
- [Informasi Penempatan Modul dan Komponen](#Informasi-Penempatan-Modul-dan-Komponen)
- [Audio Project](#Audio-Project)
- [Proses Pengerjaan](#Proses-Pengerjaan)

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
## Konsep Simulasi
Berikut adalah skematik breadboard untuk simulasi menggunakan TinkerCad yang menggunakan Arduino Uno.


https://github.com/AhmadHaniF1145/Projek-Mikrokontroller-Sensor-Gas/assets/168633171/c68b0559-28a6-41bc-bea3-4cfa7fe1158b



## Skematik Rangkaian
Berikut ini adalah hasil skematik rangkaian sistem pendeteksi kebocoran gas menggunakan software KiCad.

![Schematic - Final](https://github.com/AhmadHaniF1145/Projek-Mikrokontroller-Sensor-Gas/assets/96289624/577b15af-4e1f-4909-9a41-ec3f98f00416)

Berikut adalah link tutorial dalam pembuatan skematik menggunakan KiCad bisa dilihat pada video [berikut.](https://youtu.be/a5kBzt2_dH4 "berikut.") Untuk semua file yang dibutuhkan terkait skematik rangkaian bisa diakses pada link [berikut.](https://github.com/AhmadHaniF1145/Projek-Mikrokontroller-Sensor-Gas/tree/main/PCB%20Board "berikut.")




## Desain 3D
Berikut ini adalah hasil desain 3D :
1. Desain 3D Casing
![WhatsApp Image 2024-05-21 at 08 23 37 (1)](https://github.com/AhmadHaniF1145/Projek-Mikrokontroller-Sensor-Gas/assets/168633171/a8f32070-f779-429f-9d4e-500686a4b812)
2. Desain 3D Casing + Komponen
![Casing_3D_2024-May-12_09-13-18AM-000_CustomizedView19460723771](https://github.com/AhmadHaniF1145/Projek-Mikrokontroller-Sensor-Gas/assets/168633171/9b444903-7310-4619-b300-ca68e863c4d1)
3. Desain 3D PCB dengan Komponen
![3D Image dengan komponen (tidak lengkap)](https://github.com/AhmadHaniF1145/Projek-Mikrokontroller-Sensor-Gas/assets/168683498/b7f1c2a8-1838-49a4-97ea-847170ede539)
4. Desain 3D PCB tanpa Komponen
![3D Image tanpa komponen](https://github.com/AhmadHaniF1145/Projek-Mikrokontroller-Sensor-Gas/assets/168683498/1d6cba32-6652-4590-9f34-5f4ce87ad227)

Berikut adalah tutorial dalam pembuatan desain PCB menggunakan KiCad pada proyek ini. Bisa klik link [berikut.](https://youtu.be/dg8yomkr-xE "berikut."). Dan file bisa diakses melalui link [berikut.](https://github.com/AhmadHaniF1145/Projek-Mikrokontroller-Sensor-Gas/tree/main/PCB%20Board/Progress%204%20Final/PCB%20Master "berikut.")


## Informasi Penempatan Modul dan Komponen
Tata letak dan informasi terkait penempatan Modul dan Komponen untuk memudahkan pengguna dalam melakukan perakitan
![Configuration](https://github.com/AhmadHaniF1145/Projek-Mikrokontroller-Sensor-Gas/assets/96289624/7aa48c24-adea-40a0-a9db-cbcecc07b824)

## Manufacture Drawing untuk Casing
Berikut adalah detail ukuran casing untuk kebutuhan manufaktur
![Casing 3D Drawing v3](https://github.com/AhmadHaniF1145/Projek-Mikrokontroller-Sensor-Gas/assets/91182185/6e529cb8-5fef-47b7-8c0e-fb82138d0f7d)

https://github.com/AhmadHaniF1145/Projek-Mikrokontroller-Sensor-Gas/assets/91182185/3b76fa04-874f-4a73-a389-29a3c4dec217


## Audio Project
Terdapat 2 mode audio sebagai deteksi adanya kebocoran gas, yaitu :
1. Terdeteksi kebocoran gas hati-hati siaga
2. Bahaya, bahaya, bahaya terdeteksi kebocoran gas

Berikut hasil pembuatan audio dengan hasil editnya menggunakan software Audacity yang kemudian didapatkan file raw yang dibuka melalui software HxD untuk memperoleh datanya dan didapatkan program bahasa C. Program bahasa C tersebut digunakan untuk memrogram Arduino ATMega 2560 agar audio berfungsi. Berikut hasil dokumentasinya :
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


   File Audio Project bisa diakses melalui link [berikut.](https://github.com/AhmadHaniF1145/Projek-Mikrokontroller-Sensor-Gas/tree/main/Audio_Project "berikut.")

## Proses Pengerjaan
Berikut dokumentasi pada proses pengerjaan.
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
   ![Pengujian Alat](https://github.com/AhmadHaniF1145/Projek-Mikrokontroller-Sensor-Gas/assets/150546371/153d02da-0511-4297-af1a-a1f9659424ae)
10. Publikasi GitHub
   ![Publikasi pada Github](https://github.com/AhmadHaniF1145/Projek-Mikrokontroller-Sensor-Gas/assets/150546371/61307e4c-8f1c-4800-a24c-95b3918444b6)

