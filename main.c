#include<stdio.h>
void DESIMALTOBINNER();//berfungsi untuk mendeklarasikan fungsi DESIMALTOBINNER
int main()
{
int nilai;
printf("Masukkan nilai DESIMAL : ");//Perintah untuk user memasukkan nilai DESIMAL
scanf("%d",&nilai);//Inputan nilai dari user yang di tampung dalam variable integer
printf("\nNilai dari DESIMAL %d adalah : ",nilai);//Keluaran nilai yang di tampung dalam variable nilai integer 
DESIMALTOBINNER(nilai);//Pemangilan fungsi DESIMALTOBINNER yang telah kita deklarasikan
}

void DESIMALTOBINNER(int desimal)//Fungsi DESIMALTOBINNER yang bertipe Void yang tidak memiliki nilai jadi tidak memerlukan nilai balik / return 
{
   if (desimal>1)//Fungsi IF deperlukan untuk membandingkan dan melakukan perulangan sampai bernilai FALSE
   {
      DESIMALTOBINNER(desimal/2);//Fungsi if akan menjalankan perintah jika IF bernilai TRUE
   }
   printf("%d",desimal%2);//Fungsi if akan keluar dari perintah jika bernilai FALSE
}
