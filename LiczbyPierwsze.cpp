#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

bool CzyLiczbaPierwsza(int liczba)
{
  if (liczba<2) return false;
  int p = sqrt(liczba);
  for(int a=2;a<=p;a++)
  {
          if (liczba%a==0) return false;
  }
  return true;
}

int main(int argc, char *argv[])
{
    for (int a=0;a<50;a++)
    {
        if (CzyLiczbaPierwsza(a)==true)
        {
           cout<<a<<endl;
        }
    }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
