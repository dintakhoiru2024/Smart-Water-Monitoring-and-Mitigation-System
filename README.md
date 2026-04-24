# Smart Water Monitoring & Mitigation System 🌊🔋

Proyek ini adalah sistem otomasi berbasis Arduino Uno untuk memantau level air dan melakukan tindakan mitigasi luapan secara otomatis. Sistem ini dirancang untuk menjaga level air tetap aman dengan mengatur pompa (Motor DC) dan katup pembuangan (Servo).

---

## 🚀 Fitur Utama
- **Real-time Monitoring**: Menampilkan persentase level air pada LCD 16x2 I2C.
- **Adaptive Pumping**: Kecepatan pompa (Motor DC) menyesuaikan secara otomatis dengan level air (menggunakan PWM melalui Transistor).
- **Auto-Mitigation**: Katup (Servo) akan terbuka otomatis dan LED Alarm akan menyala saat air mencapai level bahaya (>= 80%).
- **Manual Override**: Tombol tekan (Pushbutton) untuk mengaktifkan atau mematikan seluruh sistem.

---

## 🛠️ Komponen Rangkaian
- **Arduino Uno R3**: Otak utama sistem.
- **LCD 16x2 dengan Modul I2C**: Menampilkan informasi level air dan status sistem.
- **Potensiometer**: Mensimulasikan sensor ketinggian air (Water Level Sensor).
- **DC Gearmotor**: Merepresentasikan pompa air.
- **Transistor NPN & Resistor**: Sebagai driver untuk mengatur daya motor.
- **Micro Servo**: Sebagai katup (gate) pembuangan air otomatis.
- **LED Red & Resistor**: Indikator peringatan dini saat kondisi bahaya.
- **9V Battery**: Sumber daya eksternal untuk motor dan servo.
- **Pushbutton**: Saklar kontrol sistem (ON/OFF).

---

## 📋 Cara Kerja Sistem
1. **Inisialisasi**: Saat sistem menyala, LCD akan menampilkan pesan "SYSTEM READY".
2. **Monitoring**: Sensor (Potensio) membaca level air. Data diubah menjadi skala 0-100%.
3. **Kondisi Aman**: Jika level di bawah 80%, LCD menampilkan "STATUS: AMAN", katup tertutup, dan alarm mati.
4. **Kondisi Bahaya**: Jika level menyentuh 80% atau lebih, LCD menampilkan "STATUS: BAHAYA", LED merah menyala, dan Servo berputar 90 derajat untuk membuka katup.
5. **Kontrol Motor**: Semakin tinggi level air, motor akan berputar lebih kuat untuk menyeimbangkan tekanan (Logic PWM).

---

## 📁 Dokumentasi File
- `Code.ino`: Kode program C++ untuk Arduino.
- `Component_List.csv`: Daftar detail spesifikasi komponen.
- `3D_Schematics.png`: Foto tata letak komponen dalam format 3D.
- `Video_Simulation.mp4`: Demonstrasi sistem saat beroperasi.

---

## 📁 Dokumentasi File
- `Code.ino`: Kode program C++ untuk Arduino.
- `Component_List.csv`: Daftar detail spesifikasi komponen.
- `3D_Schematics.png`: Foto tata letak komponen dalam format 3D.
- `Video_Simulation.mp4`: Demonstrasi sistem saat beroperasi.

---

## 🏗️ Simulasi
Proyek ini dikembangkan menggunakan platform **Tinkercad**.)

---

## 🏗️ Simulasi
Proyek ini dikembangkan menggunakan platform **Tinkercad**.
