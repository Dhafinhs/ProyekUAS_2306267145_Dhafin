# Metode Newton-Raphson untuk Kecepatan Terminal

Proyek ini mengimplementasikan metode Newton-Raphson dalam bahasa C untuk menentukan kecepatan terminal dari suatu benda yang jatuh bebas dengan adanya hambatan udara. Proyek ini merupakan bagian dari tugas mata kuliah Metode Numerik.

## 📌 Deskripsi Masalah

Dalam fisika, gaya total pada benda jatuh bebas dengan hambatan udara dimodelkan dengan:

```

f(v) = mg - cv²

```

Dengan:
- `m`: massa benda (kg)
- `g`: percepatan gravitasi (m/s²)
- `c`: koefisien hambatan udara (kg/s)
- `v`: kecepatan (m/s)

Kecepatan terminal tercapai saat gaya total bernilai nol, yaitu `f(v) = 0`.

## ⚙️ Metode yang Digunakan

Metode yang digunakan adalah **Metode Newton-Raphson**, yang merupakan metode terbuka untuk pencarian akar. Rumus iterasinya adalah:

```

v\_{n+1} = v\_n - f(v\_n) / f'(v\_n)

```

Dengan turunan:

```

f'(v) = -2cv

```

## 📄 Penjelasan Kode

- `f(v)`: menghitung gaya total pada kecepatan `v`
- `df(v)`: menghitung turunan fungsi `f(v)`
- `newton_raphson(v0)`: melakukan iterasi Newton-Raphson dari tebakan awal `v0`
- Iterasi dihentikan jika selisih nilai antar iterasi < `EPSILON = 1e-6` atau telah mencapai batas maksimum iterasi

## 🧪 Contoh Output

```

Konvergen dalam 5 iterasi.
Akar ditemukan: v = 11.800123 m/s

```

## 📌 Parameter yang Digunakan

| Parameter      | Nilai        |
|----------------|--------------|
| Massa `m`      | 68.1 kg      |
| Gravitasi `g`  | 9.8 m/s²     |
| Koefisien `c`  | 12.5 kg/s    |
| Interval       | [0, 20] m/s  |
| Toleransi `ε`  | 1e-6         |


## 📚 Referensi

- S. C. Chapra dan R. P. Canale, *Numerical Methods for Engineers*, Edisi ke-7, McGraw-Hill, 2015.
- GNU Scientific Library: [Root-Finding Methods](https://www.gnu.org/software/gsl/doc/html/roots.html)

## 🧑‍💻 Penulis

**Dhafin Hamizan Setiawan**  
NIM: 2306267145  
Email: dhafin.hs@gmail.com  
Program Studi: Teknik Komputer