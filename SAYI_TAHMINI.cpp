#include <iostream>
#include <random> 
#include <time.h>

using namespace std;

int main()
{
	int tahmin;
	char cevap = 'e';
	
	srand(time(0)); // Uygulama her calistirildiginda farkli sayi uretmesi icin
	
	while(cevap == 'e')
	{
		// 0 ile 100 arasinda bir sayi belirlemek:
		int rastgele_sayi = rand() % 100;
		
		
		
		
		cout << "0-100 arasinda bir sayi tuttum, tahminini gir:" << endl;
		cin >> tahmin;
		
		while(tahmin!=rastgele_sayi)
		{
			if(tahmin > rastgele_sayi)
			{
				cout << "Tuttugum sayi tahmininden daha kucuk" << endl;	
			}
		    else 
			{
				cout << "Tuttugum sayi tahmininden daha buyuk" << endl; 
			}
			cout << "Tekrar tahmin et" << endl;
			cin >> tahmin;
		}
		cout << "Tebrikler, sayiyi buldun. Tuttugum sayi: " << rastgele_sayi <<"\nYeniden oynamak ister misin? Istersen e'ye bas, cikmak istersen h tusuna basabilirsin" << endl;
		cin >> cevap;
	}
	
	cout << "GULE GULE, YENIDEN BEKLERIM !" << endl;
	
	
	
}
