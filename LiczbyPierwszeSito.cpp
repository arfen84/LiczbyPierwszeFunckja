#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;
int podana,i,wyn,flaga,licznik,blad;
int main(int argc, char *argv[])
{
  int Tablica[50];
  //wpisujemy do tablicy liczby od 0 do 50
  for (int i=0;i<50;i++)
  {
      Tablica[i]=i;    
  }
  
  //sprawdzamy czy dobrze wpisalismy liczby
  /*
  for (int i=0;i<50;i++)
  {
     cout<< Tablica[i]<<endl;    
  }
  */
  
  //teraz stosujemy Sito Erastotenesa czyli dzielimy ka�d� liczb� przesz wszystkie liczby, kit�re by�y przed ni� by sprawdzi� czy przez kt�r�� si� dzieli je�li tak to nie jest ona liczb� pierwsza :)
  for (int i=0;i<50;i++)
  { 
      if (i<2){
          Tablica[i]=0;
      }
  //dla ka�dego "j" mniejszego od liczby kt�ra jest w p�tli wy�ej czyli dla wszystkich liczb wczesniejszych sprawdzamy czy liczba i jest podzielna przez liczby, ktore byly wczesniej
      for (int j=2;j<i-1;j++)
      {
          if (Tablica[i]%j==0)
          {
          Tablica[i]=0;
          }
      }
  }
  
  //Wojtek, chcialbym �eby� zobaczy� co jest w tej tabeli po poprzedniej operacji odkomentuj, pobaw sie zobacz co jest w tablicy
  /*
   for (int i=0;i<50;i++)
  {
     cout<< Tablica[i]<<endl;    
  }
  */
  
  //Wy�wietlenie prawid�owych wynik�w (bez zer)
  for (int i=0;i<50;i++)
  {
      if(Tablica[i]!=0)
      {
         cout<< Tablica[i]<<endl;    
      }
  }
  
  system("PAUSE");	
  return 0;
}
