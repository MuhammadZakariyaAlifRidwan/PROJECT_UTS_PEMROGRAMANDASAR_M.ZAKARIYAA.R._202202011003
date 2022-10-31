/*
UTS PEMROGRAMAN DASAR
NAMA:MUHAMMAD ZAKARIYA ALIF RIDWAN
NIM:202202011003
*/

#include <stdio.h>
#include <stdlib.h>

        //Program UTS Kalkulator Bangun Datars
        int main()
{
        int pilih,ulang;
        float phi,p,l,a,r,t,s,aj,tj,d1,d2,db1,db2,luas_belahketupat,luas_layanglayang,luas_jajargenjang,
        luas_persegi,luas_segitiga,luas_lingkaran,luas_persegipanjang;

          //Menu Utama

        start:
    {
            printf("\nUTS PEMROGRAMAN DASAR\nNAMA:MUHAMMAD ZAKARIYA ALIF RIDWAN\nNIM:202202011003\n");
            printf("*********************************************************\n");
            printf("=========================================================\n");
            printf("|\t Program Menghitung Luas Bangun Datar\t\t|\n");
            printf("=========================================================\n");
            printf("*********************************************************\n");
            printf("| 1. Hitung Luas Lingkaran\t\t\t\t|\n");
            printf("| 2. Hitung Luas Persegi Panjang\t\t\t|\n");
            printf("| 3. Hitung Luas Persegi \t\t\t\t|\n");
            printf("| 4. Hitung Luas Segitiga \t\t\t\t|\n");
            printf("| 5. Hitung Luas Jajar Genjang \t\t\t\t|\n");
            printf("| 6. Hitung Luas Layang-Layang \t\t\t\t|\n");
            printf("| 7. Hitung Luas Belah Ketupat \t\t\t\t|\n");
            printf("| 8. Keluar \t\t\t\t\t\t|\n");
            printf("=========================================================\n");
            printf(" Pilih Menu Yang Akan Anda Gunakan : ");
            scanf("%d", &pilih);

         //Menu Cabang

        switch(pilih)
    {

        case 1:
            printf("=========================================================\n");
            printf("| Program Menghitung Luas Bangun Lingkaran\t\t|\n");
            printf("=========================================================\n");
            printf("Masukkan Panjang Jari-Jari Lingkaran (cm) :");
            scanf("%f",&r);
            phi=3.14;
            luas_lingkaran =phi * r * r;
            printf("\nMaka Luas Bangun Lingkaran Yang Kamu Cari Adalah :%.2f cm\n\n",luas_lingkaran);
        break;

        case 2:
            printf("=========================================================\n");
            printf("| Program Menghitung Luas Bangun Persegi \t\t|\n");
            printf("=========================================================\n");
            printf("Masukkan Panjang Sisi (cm)  :");
            scanf("%f",&p);
            printf("Masukkan Lebar Sisi (cm)  :");
            scanf("%f",&l);
            luas_persegipanjang =p*l;
            printf("\nMaka Luas Bangun Persegi Panjang Yang Kamu Cari Adalah :%.2f cm\n\n",luas_persegipanjang);
        break;

        case 3:
            printf("\n========================================================\n");
            printf("| Program Menghitung Luas Bangun Persegi \t\t|\n");
            printf("=========================================================\n");
            printf("Masukkan Panjang Sisi (cm)  :");
            scanf("%f",&s);
            luas_persegi =s*s;
            printf("\nMaka Luas Bangun Segitiga Yang Kamu Cari Adalah :%.2f cm\n\n",luas_persegi);
        break;

        case 4:
            printf("\n========================================================\n");
            printf("| Program Menghitung Luas Bangun Segitiga \t\t|\n");
            printf("=========================================================\n");
            printf("Masukkan Sisi Alas (cm) :");
            scanf("%f",&a);
            printf("Masukkan Panjang Tinggi (cm) :");
            scanf("%f",&t);
            luas_segitiga =0.5*a*t;
            printf("\nMaka Luas Bangun Segitiga Yang Kamu Cari Adalah :%.2f cm\n\n",luas_segitiga);
        break;

        case 5:
            printf("\n========================================================\n");
            printf("| Program Menghitung Luas Bangun Jajar Genjang\t\t|\n");
            printf("=========================================================\n");
            printf("Masukkan Sisi Alas (cm) :");
            scanf("%f",&aj);
            printf("Masukkan Panjang Tinggi (cm) :");
            scanf("%f",&tj);
            luas_jajargenjang =aj*tj;
            printf("\nMaka Luas Bangun Jajar Genjang Yang Kamu Cari Adalah :%.2f cm\n\n",luas_jajargenjang);
        break;

        case 6:
            printf("\n========================================================\n");
            printf("| Program Menghitung Luas Bangun Jajar Layang-Layang\t\t|\n");
            printf("=========================================================\n");
            printf("Masukkan Panjang Diagonal 1 (cm) :");
            scanf("%f",&d1);
            printf("Masukkan Panjang Diagonal 2 (cm) :");
            scanf("%f",&d2);
            luas_layanglayang =d1*d2*0.5;
            printf("\nMaka Luas Bangun Layang-Layang Yang Kamu Cari Adalah :%.2f cm\n\n",luas_layanglayang);
        break;

        case 7:
            printf("\n========================================================\n");
            printf("| Program Menghitung Luas Bangun Belah Ketupat\t\t|\n");
            printf("=========================================================\n");
            printf("Masukkan Panjang Diagonal 1 (cm) :");
            scanf("%f",&db1);
            printf("Masukkan Panjang Diagonal 2 (cm) :");
            scanf("%f",&db2);
            luas_belahketupat=db1*db2*0.5;
            printf("\nMaka Luas Bangun Jajar Genjang Yang Kamu Cari Adalah :%.2f cm\n\n",luas_belahketupat);
        break;

        case 8: printf("\nTerimakasih Telah menggunakan Program Saya\n");
        break;

        default :printf("\nMohon Maaf Program Tidak Dapat Membaca Maksud Anda\n\n");
        break;
    }

            printf("=========================================================\n");
            printf("|1. Kembali Ke Menu Utama\t\t\t\t| \n");
            printf("|2. Keluar\t\t\t\t\t\t| \n");
            printf("=========================================================\n");
            printf("Apakah anda ingin kembali ke  Menu Utama (1/2):");
            scanf("%d", &ulang);
        if(ulang == 1)
        goto start;
        else
            printf("\nTerimakasih Telah menggunakan Program Saya\n");
        return 0;

    }


}
