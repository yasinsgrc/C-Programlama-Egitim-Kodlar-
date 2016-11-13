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

void sirala(int dizi[],int diziBoyut) //icine parametre olarak bir dizi ve dizinin boyutunu alan selection sort(secmeli sýralama kucukten buyuge) fonksiyonu
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

int mukemmelSayi(int sayi) //kendinden kucuk tam bolenlerýnýn toplamý kendýne esýtse mukemmel sayýdýr
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

void mukemmelSayiB(int N)//kullanýcýdan alýnan sayýya kadar olan mukemmel sayýlarý ekrana yazdýrýr
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
		zar1 = rand() % 6 + 1; //1 eklememizin sebebi "0" diye bir zar olmamasýndan su sekýlde 1 ile 6 arasýnda random sayý uretýr
		zar2 = rand() % 6 + 1;
		if (zar1 == zar2) //zarlarýn esit gelmesi durumda toplam artýrýlýr
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
		sureler[i]=(rand() % 201 + rand() % 30)/2+100;  //programý sýnamak ve rand fonksiyonunu dibine kadar anlamak amacýyla sureler dizisine atama yaptýk
	}
	for ( i = 0; i < 30; i++) //burda selection sort kullanarak sureler dizisini sýraladýk
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
	printf("%d\n%d\n",sureler[0],sureler[1]); //dizi sýralanmýs oldugunda ilk iki elemaný en iyi iki suremiz olur
}