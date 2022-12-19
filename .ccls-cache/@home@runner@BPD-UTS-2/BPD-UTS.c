#include <stdio.h>
#include <stdlib.h>
int main(void) {

  float nilai_akhir;
  char nim[10];
  char nama[40];

  printf("\n");
  printf("MUHAMMAD BINTANG NURUL ABRAR - 2211510496\n");
  printf("BPD-UTS\n\n");

  printf("NIM     : ");
  gets(nim);
  printf("NAMA    : ");
  gets(nama);

  printf("\n");

//   printf("Masukan Nilai Akhir : ");
//   scanf("%f", &nilai_akhir);
//   printf("\n");

  
 for (nilai_akhir>100; nilai_akhir!=123456789;){

    
    printf("Masukan Nilai Akhir : ");
    scanf("%f",&nilai_akhir);

    printf("Nilai tidak melebihi 100 atau kurang dari 0 , silahkan input ulang\n\n");
    printf("\n");

    if (nilai_akhir <= 100 && nilai_akhir > 76) {
      printf("NIM Anda    : ");
      printf(nim);
      printf("\n");
      printf("NAMA Anda   :");
      printf(nama);
      printf("\n");
      printf("Grade       : A");
      printf("\n");
      return 0;

    } else if (nilai_akhir <= 75 && nilai_akhir >= 66) {
      printf("NIM Anda    : ");
      printf(nim);
      printf("\n");
      printf("NAMA Anda   :");
      printf(nama);
      printf("\n");
      printf("Grade       : B");
      printf("\n");
      return 0;

    } else if (nilai_akhir < 65 && nilai_akhir > 51) {

      printf("NIM Anda    : ");
      printf(nim);
      printf("\n");
      printf("NAMA Anda   :");
      printf(nama);
      printf("\n");
      printf("Grade       : C");
      printf("\n");
      return 0;

    } else if (nilai_akhir <= 50 && nilai_akhir > 0) {
      printf("NIM Anda    : ");
      printf(nim);
      printf("\n");
      printf("NAMA Anda   :");
      printf(nama);
      printf("\n");
      printf("Grade       : D");
      printf("\n");
      return 0;
    }
  }
  
  
    
}
