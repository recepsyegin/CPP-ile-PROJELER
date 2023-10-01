#include <iostream>
using namespace std;
/*	ASALLIK TESTÝ	*/
int main()
{
	int sayi;
	int sayac = 1;
	char secim;
	cout << "e'ye basarak baslayabilirsiniz" << endl;
	cin >> secim;
	
	while(secim == 'e')
	{
		cout << "Sayi giriniz: "<< endl;
		cin >> sayi;
		if(sayi > 2)
		{
			while(sayac < sayi-1)
			{
				sayac ++;
				if(sayi % sayac == 0)
				{
					cout << "Sayi asal degildir" << endl;
					break;
				}
				else if(sayac + 1 == sayi)
				{
					cout << "Sayi asaldir" << endl;
				}
			}	
		}
		else if(sayi == 2)
		{
			cout << "Girilen sayi en kucuk asal sayidir" << endl;
		}
		else
		{
			cout << "Asallik pozitif sayilarda aranir" << endl;
		}
		cout << "-e- devam, -h- cikis :";
		cin >> secim;
		sayac = 1;
		
	}	
	return 0;
}
