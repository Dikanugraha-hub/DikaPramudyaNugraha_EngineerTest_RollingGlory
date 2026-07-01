# Rolling Glory - Engineer Test (Codility)

**Kandidat:** Dika Pramudya Nugraha

Repositori ini berisi solusi untuk *technical test* posisi Software Engineer Internship di Rolling Glory. Seluruh solusi dikembangkan menggunakan bahasa pemrograman **C++** dengan menerapkan arsitektur modular (pemisahan *file* `.hpp`, `.cpp`, dan `main.cpp`) guna memastikan *clean code*, kemudahan pemeliharaan (*maintainability*), dan performa waktu eksekusi yang optimal.

## Struktur Direktori

Solusi dibagi ke dalam tiga direktori utama sesuai dengan spesifikasi soal:

1. **`Problem I - Batu Permata/`** (Problem I)
2. **`Problem II - AJS dan Bilangan kuadrat/`** (Problem II)
3. **`Problem III - Harga Mainan AJS/`** (Problem III)

Setiap direktori berisi tiga *file*:

| File | Peran |
|------|-------|
| `[NamaKelas].hpp` | Deklarasi kelas dan *prototype* fungsi |
| `[NamaKelas].cpp` | Implementasi logika inti algoritma |
| `main.cpp` | *Driver code* untuk menangani aliran *Input/Output* |

Detail per problem:

| Problem | Kelas | Fungsi Utama |
|---------|-------|--------------|
| I | `BatuPermata` | `hitungTotalPermata()` |
| II | `BilanganKuadrat` | `hitungJumlahKuadrat()` |
| III | `LuasPermukaan3D` | `hitungHargaMainan()` |

---

## Penjelasan Solusi dan Kompleksitas Algoritma

### Problem I: Batu Permata

Mencari jenis mineral (karakter huruf) yang konsisten muncul di setiap batu dalam tumpukan.

- **Pendekatan:** Menggunakan teknik *Intersection/Elimination* dengan *array boolean* primitif berukuran 26 (representasi alfabet `a`–`z`). Batu pertama dijadikan *baseline*, dan karakter yang tidak ditemukan pada batu-batu berikutnya akan langsung dieliminasi.
- **Time Complexity:** $O(N \times M)$ — $N$ = jumlah batu, $M$ = panjang karakter maksimal per batu.
- **Space Complexity:** $O(1)$ — hanya menggunakan memori *array* statis berukuran 26 secara konstan.

### Problem II: AJS dan Bilangan Kuadrat

Menghitung total bilangan kuadrat sempurna dalam rentang angka `a` hingga `b` (inklusif).

- **Constraint:** $1 \le N \le 100$, $1 \le a \le b \le 10^9$
- **Pendekatan:** Operasi matematika $O(1)$ per *test case* dengan mencari $\lceil\sqrt{a}\rceil$ dan $\lfloor\sqrt{b}\rfloor$, lalu menghitung selisihnya. Kalibrasi manual (perulangan `while` berbasis bilangan bulat) digunakan untuk mengoreksi ketidakakuratan *floating-point* dari fungsi `sqrt()`.
- **Time Complexity:** $O(1)$ per *test case* — bebas dari ancaman *Time Limit Exceeded* (TLE) meskipun rentang angka sangat jauh.
- **Space Complexity:** $O(1)$

**Contoh:**

```
Input:  a = 24, b = 49
Output: 3  (kuadrat sempurna: 25, 36, 49)
```

### Problem III: Harga Mainan AJS

Menghitung luas permukaan dari susunan tumpukan kubus mainan pada sebuah *grid* 2D.

- **Pendekatan:** Mengevaluasi kontribusi luas tiap sel berdasarkan tinggi tumpukan kubus. Untuk setiap sel, ditambahkan 2 unit (permukaan atas dan bawah) jika tinggi > 0, serta selisih tinggi dengan empat tetangga (Utara, Selatan, Timur, Barat). Fungsi *lambda* `tinggi` menangani pengecekan batas matriks (*out-of-bounds*) agar kode tetap ringkas dan mudah dibaca.
- **Time Complexity:** $O(H \times W)$ — $H$ = tinggi *grid*, $W$ = lebar *grid*.
- **Space Complexity:** $O(H \times W)$ untuk menyimpan representasi tumpukan kubus di dalam memori.

---

## Cara Kompilasi dan Eksekusi

Pastikan *compiler* C++ (misalnya `g++` atau `clang++`) sudah terkonfigurasi di *environment* Anda.

### Problem I — Batu Permata

```bash
cd "Problem I - Batu Permata"
g++ -std=c++17 -Wall -Wextra -o main main.cpp BatuPermata.cpp
./main          # Linux / macOS
main.exe        # Windows
```

**Contoh input:**

```
3
ab
bc
cd
```

**Output:** `0`

### Problem II — AJS dan Bilangan Kuadrat

```bash
cd "Problem II - AJS dan Bilangan kuadrat"
g++ -std=c++17 -Wall -Wextra -o main main.cpp BilanganKuadrat.cpp
./main          # Linux / macOS
main.exe        # Windows
```

**Contoh input:**

```
1
24 49
```

**Output:** `3`

### Problem III — Harga Mainan AJS

```bash
cd "Problem III - Harga Mainan AJS"
g++ -std=c++17 -Wall -Wextra -o main main.cpp LuasPermukaan3D.cpp
./main          # Linux / macOS
main.exe        # Windows
```

**Contoh input:**

```
2 2
1 2
3 4
```

**Output:** `34`

---

## Catatan

- Semua solusi menggunakan standar **C++17**.
- Flag `-Wall -Wextra` digunakan saat kompilasi untuk mendeteksi peringatan potensial.
- Program membaca input dari `stdin` dan menulis output ke `stdout`, sesuai format soal Codility.
