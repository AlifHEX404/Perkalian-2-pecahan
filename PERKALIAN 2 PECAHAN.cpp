#include <iostream>
using namespace std;
typedef struct pecahan{
           int pembilang;
           int penyebut;
           };
int main (int argc, char *argv[])
{
cout << "|=====================================================|" << endl;
cout << "|===================== ALIF MUSTAFANAH ===============|" << endl;
cout << "|=============== PROGRAM PERKALIAN 2 PECAHAN =========|" << endl;
cout << "|=====================================================|\n" << endl;
pecahan P1,P2,P3;
    cout<<"Masukkan Pembilang P1 = ";
    cin >> P1.pembilang;              //pembilang P1
    cout<<"Masukkan Penyebutn P1 = ";
    cin >> P1.penyebut;              //penyebut P1

    cout << "\t     " << P1.pembilang <<endl;
    cout << "\tP1 = -" <<endl;
    cout<< "\t     " <<  P1.penyebut <<endl;

    cout<<"\nMasukkan Pembilang P2 = ";
    cin>> P2.pembilang;               //pembilang P2
    cout<<"Masukkan Penyebut  P2 = ";
    cin >> P2.penyebut;              //penyebut  P2

    cout << "\t     " <<  P2.pembilang <<endl;
    cout << "\tP2 = -" <<endl;
    cout << "\t     " <<  P2.penyebut <<endl;

    P3.pembilang  = P1.pembilang * P2.penyebut * P1.penyebut * P2.pembilang;     //rumus perkalian pecahan
    P3.penyebut = P1.penyebut * P2.penyebut;

    //tampilan P3 =hasil perkalian
    cout << "\nHasil perkalian P1 * P2"<<endl;
    cout << "\t     " <<  P3.pembilang <<endl;
    cout << "\tP3 = -" <<endl;
    cout << "\t     " <<  P3.penyebut <<endl;

    cout << "|=====================================================|" << endl;
cout << "|===================== ALIF MUSTAFANAH ===============|" << endl;
cout << "|======================= TERIMAKASIH =================|" << endl;
cout << "|=================== PRESS ENTER TO EXIT =============|" << endl;
cout << "|=====================================================|" << endl;
return 0;
}
