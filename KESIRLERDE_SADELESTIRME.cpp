#include <iostream>
using namespace std;

void sadelestir(int *pay, int *payda)
{
	// Kucuk olani bulmak:
	int kucuk = *pay;
	if(*payda < kucuk) { kucuk = *payda; }	

	for(int i = 2; i < kucuk; i++)
	{
		while(*pay % i == 0 && *payda % i == 0)
		{
			*pay /= i;
			*payda /= i;
		}
		// i dongu degiskeni,pay VEYA paydadan buyuk ise kontrol etmeye gerek yok.
		if(i > *pay || i > *payda) 
			break;
	}
}




int main()
{
	int pay,payda;
	char x; // Bolme islemi icin
	
	cout << "Pay ve paydayi giriniz:\n";
	cin >> pay >> x >> payda;
	
	sadelestir(&pay,&payda);
	cout << pay << "/" << payda;																																																							
	return 0;
}
