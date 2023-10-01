#include <iostream>
#include <cstring>
using namespace std;

#define MAX 1000

/*	
	KULLANICI 10 SAYI GIRMIS OLSUN, EN BUYUK 4 TANESINI EKRANA YAZDIRACAK OLSUN
*/
/*	
	MAXLAR DIZISI EN BASTA BUTUN ELEMANLARI 0DIR. UYGULAMA CALISIRKEN MAXLAR
	DIZISI 8,6,3 OLSUN VE SIRADAKI ELEMAN 7 OLSUN. ONCE MAXLAR DIZISI 
	1 KAYDIRILIR. KAYDIRMADAN SONRA DIZI: 8,8,6 OLUR. 
	MAXLAR[J] = SAYILAR[i]; SATIRI ILE MAXLAR DIZISINDE OLMASI GEREKEN YERE
	YAZILIR. NIHAI DIZI: 8,7,6 OLUR.
*/

void kaydir(int indis, int *maxlar, int n)
{
	for(int k = n - 1; k > indis; --k)
	{
		maxlar[k] = maxlar[k-1];
	}
}

int main()
{
	int n,k, sayilar[MAX],maxlar[MAX] = {0};
	cin >> k >> n;
	
	for(int i = 0; i<k; i++)
	{
		cin >> sayilar[i];
	}
	for(int i = 0; i < k; i++)
	{
		for(int j = 0; j<k ; j++)
		{
			/*Sayilar dizisinin elemanlari maxlar dizisinin elemanindan buyuk ise yer degistirilir.*/
			if(sayilar[i]>maxlar[j])
			{
				kaydir(j,maxlar,n);
				maxlar[j] = sayilar[i];
				break;	
			}	
		}	
	}
	/*Ekrana yaz*/
	
	for(int i = 0; i<n;++i)
	{
		cout << maxlar[i] << " ";
	}	
	return 0;
}
