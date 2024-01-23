#include <iostream> //átraukiame bibliotekas

using namespace std;

void skaiciai (int skaicius1, int skaicius2); //sukuriame funkcijà skaiciai
int skaicius1_1;
int skaicius2_2;
int main() //pagridinë funkcija
{
    setlocale(LC_ALL, "Lithuanian"); //nustatome lietuviø kalbà
    cout<<"Árağykite pirmàjá skaièiø: "; //paprağome árağyti skaièiø
    cin>>skaicius1_1; //ávedamas skaièius
    cout<<"Árağykite antrà skaièiø: "; //paprağome árağyti skaièiø
    cin>>skaicius2_2; //ávedamas skaièius
     skaiciai(skaicius1_1, skaicius2_2); //iğkvieèiame antràfunkcijà
}

void skaiciai (int skaicius1, int skaicius2){ //aprağoma skaièiø funkcija
if(skaicius1 == skaicius2){ //tikriname ar skaièiai lygûs
    cout<<"skaièiai lygûs"; //jeigu skaièiai lygûs tai iğvedame informacijà
}else if (skaicius1 > skaicius2){ //jeigu skaièiai nëra lygûs tikriname, ar 1 skaièius yra didesnis
cout<<skaicius1; //jeigu 1 yra didesnis, iğvedame já
}else //jeigu nëra didesnis
{
    cout<<skaicius2; //iğvedame antrà skaièiø
}
}
