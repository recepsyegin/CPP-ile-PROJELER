#include <iostream>
#include <cmath>
using namespace std;

/*SAYI TABANINI DEGISTIRME::

	Butun tabanlar once onluk tabana donusturulur. Istenen tabana ise
	onluk tabandan donusturulecek.
*/


// Fonksiyon Prototipleri
int tabani_donustur(int sayi, int sayiTaban, int istenilenTaban);
int onluk_tabana_donustur(int sayi, int sayiTaban);
int onluk_tabandan_donustur(int onluk, int istenilenTaban);

int main() {
    int sayiTabani, sayi, istenilenTaban;

    cout << "SIRAYLA SAYI TABANINI, SAYIYI VE DONUSTURULECEK TABANI GIRINIZ:" << endl;
    cin >> sayiTabani >> sayi >> istenilenTaban;

    if (sayiTabani <= 1 || istenilenTaban <= 1 || sayi <= 0) {
        cout << "Gecersiz girdi. Lutfen pozitif tam sayilari girin." << endl;
        return 1;
    }

    int sonuc = tabani_donustur(sayi, sayiTabani, istenilenTaban);
    cout << "SONUC: " << sonuc << endl;

    return 0;
}

int onluk_tabana_donustur(int sayi, int sayiTaban) {
    int onluk = 0;
    int basamak = 0;

    while (sayi > 0) {
        int rakam = sayi % 10;
        onluk += rakam * pow(sayiTaban, basamak);
        sayi /= 10;
        basamak++;
    }

    return onluk;
}

int onluk_tabandan_donustur(int onluk, int istenilenTaban) {
    int sonuc = 0;
    int basamak = 0;

    while (onluk > 0) {
        int rakam = onluk % istenilenTaban;
        sonuc += rakam * pow(10, basamak);
        onluk /= istenilenTaban;
        basamak++;
    }

    return sonuc;
}

int tabani_donustur(int sayi, int sayiTaban, int istenilenTaban) {
    int onluk = onluk_tabana_donustur(sayi, sayiTaban);
    int sonuc = onluk_tabandan_donustur(onluk, istenilenTaban);
    return sonuc;
}

