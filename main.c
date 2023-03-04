#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include <math.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    setlocale(LC_ALL, "Turkish");

    printf("\tMerhaba! Programımıza hoş geldiniz! Bu program celsius olarak girilen sıcaklık değerini fahrenheit'e dönüştürmektedir.\n"
           "Ayrıca bunun tersini de yapabilir.\n");
    printf("Istediğiniz zaman değiştirme/dönüştürme işlemini yapabilirsiniz.\n"
           "Sadece hangi değerde dönüşüm yapacacağınızı seçmeniz ve sıcaklık derecesini girmeniz gerekmektedir.\n\n");

    float celsius,fahrenheit;

    printf("1. Celsius\n2. Fahrenheit\nLütfen gireceğiniz sıcaklık derecesini hangi değere dönüştüreceğinizi seçiniz: ");

    int sayi,islem,secenek,tekrar;
    char cevap[5];
    scanf("%d",&secenek);
    sayi=secenek;
    for (islem=secenek; sayi>=0; sayi=6)
    {
        switch (secenek)
        {
            case 1:
                if (secenek==1)
                {
                    printf("Gireceğiniz sıcaklık derecesi Celsius değerine dönüştürülecektir.\n\n");
                    printf("Lütfen sıcaklık derecesini giriniz: ");
                    scanf("%f",&fahrenheit);
                    celsius=((fahrenheit*5)/9)-32;
                    printf("%.2f fahrenheit, %.2f celsius'a eşittir.\n",fahrenheit,celsius);
                }

                printf("\nYeni bir dönüşüm işlemi yapmak ister misiniz? ");
                scanf("%s", &cevap);

                if (strcmp(cevap,"evet")==0)
                {
                    printf("\n\n1. Celsius\n2. Fahrenheit\nLütfen girececiniz sıcaklık derecesini hangi değere dönüştüreceğinizi seçiniz: ");
                    scanf("%d", &secenek);
                }
                else {
                    printf("Işlem sonlandırılıyor...");
                    return  0;
                }
                islem = secenek;
                break;

            case 2:
                if (secenek==2)
                {
                    printf("Gireceğiniz sıcaklık derecesi Fahrenheit değerine dönüştürülecektir.\n\n");
                    printf("Lütfen sıcaklık derecesini giriniz: ");
                    scanf("%f",&celsius);
                    fahrenheit=((celsius/9)*5)+32;
                    printf("%.2f Celsius, %.2f Fahrenheit'a eşittir.\n",celsius,fahrenheit);
                }

                printf("\nYeni bir dönüşüm işlemi yapmak ister misiniz? ");
                scanf("%s", &cevap);

                if (strcmp(cevap,"evet")==0)
                {
                    printf("\n\n1. Celsius\n2. Fahrenheit\nLütfen girececiniz sıcaklık derecesini hangi değere dönüştüreceğinizi seçiniz: ");
                    scanf("%d", &secenek);
                }
                else {
                    printf("Program sonlandırılıyor...");
                    return  0;
                }
                islem = secenek;
                break;
        }
    }
    return 0;
}

