#include <iostream>
using namespace std;
int main () 
{
    string nama, jawab ;
    int umur ;

    cout << "---Halo, selamat datang di PokemonQuiz!---" << endl ;
    cout << "Sebelum mulai yuk kenalin diri kamu dulu" << endl;

    cout << "Siapa nama kamu : " ;
    cin >> nama ;
    cout << "Berapa umur kamu : " ;
    cin >> umur ;

    cout << "---Mari kita mulai!---" << endl ;

    cout << "1. Ada berapa elemen di pokemon? " << endl ;
    cout << "Jawab : " ;
    cin >> jawab ;

    cout << "2. Apa pokemon kesukaanmu? " << endl ;
    cout << "Jawab : " ;
    cin >> jawab ;

    cout << "3. Siapa tim paling jahat pada series pokemon? " << endl ;
    cout << "Jawab : " ;
    cin >> jawab ;

    cout << "Terimakasih telah menjawab quiz kali ini " << nama << "." << endl ;
    cout << "kita berjumpa lagi dipekan depan yaa!" << endl ;

    return 0 ;
}
