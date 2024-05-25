![SISTEM PENDETEKSI KEBOCORAN GAS (2)](https://github.com/AhmadHaniF1145/Projek-Mikrokontroller-Sensor-Gas/assets/168683498/e76d59b6-fd9b-4618-88f2-fbd6e8390744)

Sistem pendeteksi kebocoran gas adalah sistem elektronik yang dirancang untuk mendeteksi dan memberi peringatan tentang kebocoran gas. Peringatan yang dihasilkan adalah dalam bentuk audio sesuai gas yang dideteksi beserta tingkat bahayanya.

## Komponen Yang Digunakan
1. Arduino Mega 2560
2. Gas Sensor MQ2
3. OLED 0.96 Inch
4. Push Button
5. LED 3mm
6. Speaker/Buzzer
7. Amplifier 3W
8. dll

Dan Beberapa komponen dasar seperti resistor dan kapasitor untuk *pull up* push button
## Konsep Simulasi
Berikut adalah skematik breadbord untuk simulasi menggunakan TinkerCad yang menggunakan Arduino Uno

![Simulasi Sistem Pendeteksi Gas Sederhana](https://github.com/AhmadHaniF1145/Projek-Mikrokontroller-Sensor-Gas/assets/168683498/39eb430e-0b18-4c78-bdcf-787a9f2c64ee)

Dengan hasil simulasi seperti ditunjukkan pada [video YouTube ini.](https://youtu.be/8_7WZJKQg08 "video YouTube ini.")


## Skematik Rangkaian
Berikut ini adalah hasil skematik rangkaian sistem pendeteksi kebocoran gas menggunakan software KiCad.

![Skematik Kicad](https://github.com/AhmadHaniF1145/Projek-Mikrokontroller-Sensor-Gas/assets/168683498/a380369b-9d11-4667-9d97-09f717059ece)


## Desain 3D
Berikut ini adalah hasil desain 3D :
1. Desain 3D Casing
![Casing_3D_2024-May-12_09-15-01AM-000_CustomizedView60361281327](https://github.com/AhmadHaniF1145/Projek-Mikrokontroller-Sensor-Gas/assets/168633171/e26019c6-1331-412f-831c-df3e6e7c58ba)
2. Desain 3D Casing + Komponen
![Casing_3D_2024-May-12_09-13-18AM-000_CustomizedView19460723771](https://github.com/AhmadHaniF1145/Projek-Mikrokontroller-Sensor-Gas/assets/168633171/9b444903-7310-4619-b300-ca68e863c4d1)
3. Desain 3D PCB dengan Komponen
![3D Image dengan komponen (tidak lengkap)](https://github.com/AhmadHaniF1145/Projek-Mikrokontroller-Sensor-Gas/assets/168683498/b7f1c2a8-1838-49a4-97ea-847170ede539)
4. Desain 3D PCB tanpa Komponen
![3D Image tanpa komponen](https://github.com/AhmadHaniF1145/Projek-Mikrokontroller-Sensor-Gas/assets/168683498/1d6cba32-6652-4590-9f34-5f4ce87ad227)

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
   https://github.com/AhmadHaniF1145/Projek-Mikrokontroller-Sensor-Gas/assets/168683498/06a25a4b-cfa3-4cde-b9b2-bd3c78b2ab34

## Proses Pengerjaan
Berikut dokumentasi pada proses pengerjaan.
1. Dokumentasi README.md
![WhatsApp Image 2024-05-20 at 15 47 16](https://github.com/AhmadHaniF1145/Projek-Mikrokontroller-Sensor-Gas/assets/168633171/a7ab4589-1d05-4313-b617-d1f20b48bc91)
2. Pembelian komponen 
![WhatsApp Image 2024-05-20 at 15 34 41](https://github.com/AhmadHaniF1145/Projek-Mikrokontroller-Sensor-Gas/assets/168633171/5fd885cd-d230-4474-9eed-17eb4611c2f8)
3. Cetak PCB dan berikut hasilnya
![WhatsApp Image 2024-05-18 at 21 22 45](https://github.com/AhmadHaniF1145/Projek-Mikrokontroller-Sensor-Gas/assets/168633171/d4bc5c35-9c43-4529-b818-43a35a189968)
4. Cetak desain 3D dan berikut hasilnya
![WhatsApp Image 2024-05-20 at 15 28 34](https://github.com/AhmadHaniF1145/Projek-Mikrokontroller-Sensor-Gas/assets/168633171/af957f27-7b81-4d70-8b82-c247035eec66)
5. Pembuatan audio project
![WhatsApp Image 2024-05-20 at 15 47 16 (1)](https://github.com/AhmadHaniF1145/Projek-Mikrokontroller-Sensor-Gas/assets/168633171/a41125d5-13c3-4836-8066-0919d1396c72)
6. Penyolderan komponen pada PCB
![WhatsApp Image 2024-05-20 at 15 07 58](https://github.com/AhmadHaniF1145/Projek-Mikrokontroller-Sensor-Gas/assets/168633171/b45102b9-e32f-40ad-91d2-b0300cd6ee58)
7. Pengemasan
![WhatsApp Image 2024-05-20 at 15 58 38](https://github.com/AhmadHaniF1145/Projek-Mikrokontroller-Sensor-Gas/assets/168633171/22f4a12a-be4c-4ba2-b998-24e26cb7c9ab)
8. Pembuatan program Aduino ATMega 2560
9. Finishing

