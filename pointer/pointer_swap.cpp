#include <iostream>
using namespace std;
void tukar (int *a, int *b)
{
    int temp;
    temp = *a ;
    *a = *b;
    *b = temp;
}

int main()
{
    int bil1, bil2 ;
    cout << "Masukkan Bilangan Pertama :" ;
    cin >> bil1;
    cout << "MAsukkan bilangan kedua :";
    cin >> bil2;
    cout << "Sebelum pertukaran : \n";
    cout<< "bil1: "<< bil1 <<"bil2 : " << bil2 << endl;
    tukar(&bil1,&bil2);
    cout << "Setelah pertukaran : \n";
    cout << "bil1: "<<bil1 << "bil2 :"<<bil2 << endl;
}
