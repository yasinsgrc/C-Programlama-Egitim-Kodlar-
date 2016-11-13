#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
void sirala(int dizi[6]);
int mukemmelSayi(int sayi);
void mukemmelSayiB(int N);
void kosucu();
void zar();
void main()
{
	/*int dizi[6];
	int i;
	srand(time(NULL));
	for ( i = 0; i < 6; i++)
	{
		dizi[i]=rand()%51;
	}
	sirala(dizi,6);*/
	/*printf("%d \n",mukemmelSayi(28));*/
	/*mukemmelSayiB(3000);*/
	/*zar();*/
	kosucu();
}

void sirala(int dizi[],int diziBoyut) //icine parametre olarak bir dizi ve dizinin boyutunu alan selection sort(secmeli s�ralama kucukten buyuge) fonksiyonu
{
	int i;
	int j;
	int min;
	int temp;
	for ( i = 0; i < diziBoyut; i++)
	{
		min=i;
		for ( j = i; j < diziBoyut; j++)
		{
			if (dizi[min] > dizi[j])
			{
				min=j;
			}
		}
		temp = dizi[min];
		dizi[min]=dizi[i];
		dizi[i]=temp;
	}
	for ( i = 0; i < diziBoyut; i++)
	{
		printf("%d\n",dizi[i]);
	}
}

int mukemmelSayi(int sayi) //kendinden kucuk tam bolenler�n�n toplam� kend�ne es�tse mukemmel say�d�r
{
	int i;
	int toplam=0;
	for ( i = 1; i < sayi; i++)
	{
		if (sayi % i == 0)
		{
			toplam+=i;
		}
	}
	if (toplam == sayi)
	{
		return 1;
	}
	return 0;
}

void mukemmelSayiB(int N)//kullan�c�dan al�nan say�ya kadar olan mukemmel say�lar� ekrana yazd�r�r
{
	int i;
	for ( i = 1; i < N; i++)
	{
		if (mukemmelSayi(i))//yukardaki mukemmelSayi fonksiyonundan "1" veya "0" doner bunlar lojik ifadeler olarak dusunulurse "TRUE" veya "FALSE" 'a denk gelir
		{
			printf("%d\n",i);
		}
	}
}

void zar()
{
	int zar1;
	int zar2;
	int i;
	float cift = 0;
	srand(time(NULL));
	for ( i = 0; i < 5000000; i++)
	{		
		zar1 = rand() % 6 + 1; //1 eklememizin sebebi "0" diye bir zar olmamas�ndan su sek�lde 1 ile 6 aras�nda random say� uret�r
		zar2 = rand() % 6 + 1;
		if (zar1 == zar2) //zarlar�n esit gelmesi durumda toplam art�r�l�r
		{
			cift++;
		}
	}
	printf("%f\n",cift/50000);
}

void kosucu()
{
	int sureler[30];
	int i;
	int j;
	int min;
	int temp;
	srand(time(NULL));
	for ( i = 0; i < 30; i++)
	{
		sureler[i]=(rand() % 201 + rand() % 30)/2+100;  //program� s�namak ve rand fonksiyonunu dibine kadar anlamak amac�yla sureler dizisine atama yapt�k
	}
	for ( i = 0; i < 30; i++) //burda selection sort kullanarak sureler dizisini s�ralad�k
	{
		min=i;
		for ( j = i; j < 30; j++)
		{
			if (sureler[min] >= sureler[j])
			{
				min=j;
			}
		}
		temp=sureler[min];
		sureler[min]=sureler[i];
		sureler[i]=temp;
	}
	printf("%d\n%d\n",sureler[0],sureler[1]); //dizi s�ralanm�s oldugunda ilk iki eleman� en iyi iki suremiz olur
}