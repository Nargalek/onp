#include <iostream>
#include <fstream>
#include <vector>

using namespace std;


int arr[25]; //tablica na dane odleglosci miast
int y=0; //zmienna pomocnicza

int main(){
	int z; //zmienna pomocnicza
	
	ifstream plik("num.txt"); //uzywamy konstruktora bibliotecznego ifstream do utworzenia obieku zawierajacego nasz plik (w katalogu gdzie wykonuje sie program)
	if (plik.is_open()){        //instrukcja warunkowa, wykonuje kod jesli nie bylo problemu z otwarciem pliku
	plik>>z;		//zaimportowanie pierwszego elementu z pierwszej lini pliku do zmiennej pomocniczej z
	int tab[z];		//utworzenie tabeli o wielkosci podanej w pliku num.txt 
	for(int i;i<z;i++){  //zapelnienie dablicy numerami miast od 1 do z.
		tab[i]=i+1;
	}
	
	while (true)			//petla do wczytania reszty danych
	{
		int x;		//zmienna pomocnicza
		plik >>x;	//z obiektu plik wczytujemy kolejne dane do zmiennej x, pamietamy ze jedna liczba zostala juz wczytana do zmiennej z.
		if (plik.eof())break; //END OF FILE, sprawdza czy plik nie ma juz wiecej danych i wychodzi z petli
		
		arr[y++]=x;  //przypisanie wartosci x do miejsca w tablicy
	}
	}
	
	for(int i; i<(sizeof((arr))/sizeof((arr[0])));i++){ 	//drukowanie zawartosci tablicy, sizeof(arr) zwraca ilosc elementow tablicy w bitach, trzeba podzielic przez pojedynczy element sizeof(arr[0]), wtedy otrzymamy ilosc elementow
		cout<<" "<<arr[i];
	}
	cout<<"\n\n\n";
	system("PAUSE");
	return 0;
}
