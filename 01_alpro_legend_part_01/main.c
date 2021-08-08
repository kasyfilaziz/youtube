/*
 * ordinary_programmer
 *
 * 1. Membuat bentuk segitiga siku-siku dengan input tinggi segitia (dalam jumlah baris) 
 *    dan lebar (dalam jumlah karakter)
 * 2. Membuat bentuk segitiga sama kaki dengan input tinggi segitiga (dalam jumlah baris)
 *    dan lebar (dalam jumlah karakter)
 * 3. Membuat bentuk segitia seperti bendera nepal dengan input tinggi (dalam jumlah baris)
 */

#include<stdio.h>

// main function
/*
 * Script : 
 *  "Oke dari hasil identifikasi soal no 1, saya melihat disini ada beberapa bagian
 *   penting yang harus ada didalam program kita..."
 * 
 *  "Yang pertama adalah program ini harus menerima 2 input, yaitu input tinggi dan
 *   lebar,,,"
 * 
 *  "Yang kedua adalah dalam pemrosesan atau pembentukan segitiga nya, kita akan
 *   butuh 'looping' atau pengulangan,,,"
 */
int main()
{
    printf("Segitiga siku-siku\n");
    /*
     * Script : 
     * "Oke bagian pertama dan yang paling mudah adalah membuat program kita menerima
     *  input dari 'user'"
     */

    // disini kita defind dua variable, yaitu tinggi dan lebar untuk menampung value
    // dari input yang dilakukan
    int tinggi;
    
    // format inputnya itu 10x10
    printf("Tinggi Segitiga (baris) : ");
    scanf("%d", &tinggi);
    
    /*
     * Script :
     * "Setelah input berhasil kita buat maka tahap selanjutnya adalah proses membentuk
     *  segitiga siku-siku berdasarkan input dari pengguna/user"
     * 
     * "Dalam proses pembentukan segitiga ini saya akan pecahkan kedalam dua bagian,,,
     *  yang pertama adalah bagian baris dan bagian kolom"
     * 
     * "Baris harus sama dengan yang telah di-input oleh user lalu kolom nya akan
     *  menyesuaikan dengan jumlah baris"
     * 
     * Proses nya akan diilustrasikan menggukana powerpoint
     *  - dijelaskan hasil yang ingin dicapai seperti apa
     *  - dijelaskan juga step by step nya (no coding) dengan arahan dan animasi
     *    yang jelas
     */

    printf("Hasil nya :\n\n");
    int baris_sekarang = 1;
    while(baris_sekarang <= tinggi){
        int kolom;
        for(kolom = 1; kolom <= baris_sekarang; kolom++){
            printf("*");
        }
        printf("\n");
        baris_sekarang++;
    }

    printf("\n");
    return 0;
}