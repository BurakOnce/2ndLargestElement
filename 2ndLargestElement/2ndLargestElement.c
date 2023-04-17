#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

//Burak Önce  20120205052
//kullanıcıdan alınan dizi elemanlarından en büyük 2. sini bulur



int main() {

float a[10],atama; //diziyi ve döngü için gerekli elemanı belirleriz

printf("On sayi giriniz:\n");

for(int x=1; x<11; x++){ //kullanıcı girişi için döngü
scanf("%f",&a[x-1]);
}

for(int x=0; x<10; x++){ // dizi sıralanması için döngü

  for(int y=0; y<10; y++)

      if(a[x] < a[y]){

        atama=a[x];  //dizi içi yer değiştirme
        a[x]=a[y];
        a[y]=atama;

     
      }

}
float ort=(a[0]+a[1]+a[2]+a[3])/4; //ORTALAMA
float sapma=((ort-a[0])*(ort-a[0])+(ort-a[1])*(ort-a[1])+(ort-a[2])*(ort-a[2])+(ort-a[3])*(ort-a[3]))/3; //STANDART SAPMA

printf("En büyük ikinci sayı %.0f",a[8]);






  return 0;
}