#include <iostream> //�traukiame bibliotekas

using namespace std;

void skaiciai (int skaicius1, int skaicius2); //sukuriame funkcij� skaiciai
int skaicius1_1;
int skaicius2_2;
int main() //pagridin� funkcija
{
    setlocale(LC_ALL, "Lithuanian"); //nustatome lietuvi� kalb�
    cout<<"�ra�ykite pirm�j� skai�i�: "; //papra�ome �ra�yti skai�i�
    cin>>skaicius1_1; //�vedamas skai�ius
    cout<<"�ra�ykite antr� skai�i�: "; //papra�ome �ra�yti skai�i�
    cin>>skaicius2_2; //�vedamas skai�ius
     skaiciai(skaicius1_1, skaicius2_2); //i�kvie�iame antr�funkcij�
}

void skaiciai (int skaicius1, int skaicius2){ //apra�oma skai�i� funkcija
if(skaicius1 == skaicius2){ //tikriname ar skai�iai lyg�s
    cout<<"skai�iai lyg�s"; //jeigu skai�iai lyg�s tai i�vedame informacij�
}else if (skaicius1 > skaicius2){ //jeigu skai�iai n�ra lyg�s tikriname, ar 1 skai�ius yra didesnis
cout<<skaicius1; //jeigu 1 yra didesnis, i�vedame j�
}else //jeigu n�ra didesnis
{
    cout<<skaicius2; //i�vedame antr� skai�i�
}
}
