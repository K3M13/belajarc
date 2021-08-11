#include<stdio.h>
void DESIMALTOBINNER();
int main()
{
int nilai;
printf("Masukkan nilai DESIMAL : ");
scanf("%d",&nilai);
printf("\nNilai dari DESIMAL %d adalah : ",nilai); 
DESIMALTOBINNER(nilai);
}

void DESIMALTOBINNER(int desimal)
{
   if (desimal>1)
   {
      DESIMALTOBINNER(desimal/2);
   }
   printf("%d",desimal%2);
}
