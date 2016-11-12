#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int topla(int x, int y);
int cikar(int x, int y);
int carp(int x, int y);
void ogrenci(int ogrenciSayisi);		//fonksiyonlarý void maine gostermek gerekýyor veya main fonksiyonun ustune de yazabýlýrsýnýz 
float bol(float x, float y);			
void sayiTahmin(int tahminHakki);
//Git
void main()
{
	/*int a = 5, b = 10;
	float x = 10, y = 0, z = 2;*/
	/*printf("%d\n", topla(a, b));
	printf("%d\n",cikar(a,b));
	printf("%d\n",carp(a,b));*/
	/*printf("%.2f\n",bol(x,y));*/
	/*ogrenci(3);*/
	sayiTahmin(5);//tahmin hakkýný kullanýcýdan aldýgýmýzý varsayalým

}

int topla(int x, int y)
{
	return x + y;
}
int cikar(int x, int y)
{
	return x - y;
}
int carp(int x, int y)
{
	return x*y;
}
float bol(float x, float y)
{
	if (y == 0)
	{
		printf("sonuc tanimsizdir..!\n");
		return 0;
	}
	return x/y;
}

void ogrenci(int ogrenciSayisi)
{
	int i;
	char adSoyad[20],maxAdSoyad[20];
	float vize, _final, ortalama,max=0;
	for ( i = 0; i < ogrenciSayisi; i++)
	{
		printf("Ad Soyad: ");
		scanf("%s",adSoyad);
		printf("Vize :");
		scanf("%f",&vize);
		printf("Final :");
		scanf("%f", &_final);
		ortalama = vize * 40/100 + _final * 60 / 100;
		if (ortalama > max)
		{
			max = ortalama;
			strcpy(maxAdSoyad, adSoyad);//maxAdSoyad char dizisine adSoyad char dizisini kopyalýyor Gereken kutuphane <string.h>
		}
	}
	printf("En yuksek ort sahip ogrencinin adi : %s\nortalamasý :%.2f\n",maxAdSoyad,max);
}

void sayiTahmin(int tahminHakki)
{
	int rastgeleSayi;
	int tahmin;
	int i;
	srand(time(NULL)); //bu komut program her calýstýgýnda farklý býr rastgele sayý uretir gereken kutuphane(<time.h>)
	rastgeleSayi = rand() % 101; //0-100 arasýnda rastgele sayý uretýr gereken kutuphane(<stdlib.h>)
	printf("%d\n",rastgeleSayi);
	for ( i = 0; i < tahminHakki; i++)
	{
		printf("Tahmininizi Giriniz: ");
		scanf("%d",&tahmin);
		if (tahmin > rastgeleSayi)
		{
			printf("Tahmininiz Buyuk..!");
		}
		else if (tahmin < rastgeleSayi)
		{
			printf("Tahmininiz Kucuk..!");
		}
		else
		{
			printf("Tebrikler (%d) hakta bildiniz..!",i);
			return; //tahmin dogruysa fonksiyondan cýkar
		}
	}
		printf("Haklariniz bitti..!");
}



