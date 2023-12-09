#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;

  struct hari
  {
    string tugas[100];
  } hari[n];

  string tmp;

  int i = 0, j = 0;
  while ( i <= n)
  {
    cout << "masukan tugas";
    cin >> tmp;
    if (tmp == "<")
    {
      i--;
    }
    else if (tmp == ">")
    {
      i++;
    }
    else
    {
      hari[i].tugas[j] = tmp;
      j++;
    }
    
  }



  for (int x = 0; x < n; x++)
  {
    for (int y = 0; y < 5; y++)
    {
      cout << hari[x].tugas[y] << endl;
    }
    
  }
  

  return 0;
}