#include <iostream>
using namespace std;

// Kullanicidan alinan kelimenin ters cevrilmesi:
int main()
{
	char kelime[100], temp;
	int uzunluk;
	cout << "TERS CEVRILECEK KELIMEYI GIRINIZ:";
	cin >> kelime;
	
	// Kelimenin uzunlugunu bulmak:
	for(uzunluk = 0; kelime[uzunluk] != '\0'; ++uzunluk);
	
	// Kelimenin ortasina kadar sol ve sag indexleri yer degistirmek
	for(int i = 0; i < uzunluk/2 ; i++)
	{
		temp = kelime[i];
		kelime[i] = kelime[uzunluk-i-1];
		kelime[uzunluk - i - 1] = temp;
	}
	
	cout << kelime;
	
	
	return 0;
}
