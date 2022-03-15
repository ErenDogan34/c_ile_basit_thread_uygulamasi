#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

void *iplik1()
{
    int sayi,sonuc;
    printf("\nikiye bolunecek sayiyi giriniz:\n");
    scanf("%d",&sayi);
    sonuc=sayi%2;
    printf("\n2'ye bolumunden kalan:%d \n",sonuc);
    return NULL;
}

void *iplik2()
{
    int sayi,sonuc;
    printf("\nuce bolunecek sayiyi giriniz:\n");
    scanf("%d",&sayi); 
    sonuc=sayi%3;
    printf("\n3'e bolumunden kalan:%d \n",sonuc);
    return NULL;
}

int main()
{
   pthread_t thread1,thread2;

   pthread_create(&thread1,NULL,iplik1,NULL);
   pthread_join(thread1,NULL);

   pthread_create(&thread2,NULL,iplik2,NULL);
   pthread_join(thread2,NULL);
  pthread_exit(NULL);

}

