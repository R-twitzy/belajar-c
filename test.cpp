#include <iostream>

using namespace std;

int main()
{
  int n, tmp=2;

  cout << "masukan tinggi segi3: ";
  cin >> n;

  for (int i =1; i <= n; i++)
  {
    for (int j = 0; j < i; j++)
    {
      cout << tmp << " ";
      tmp+=2;
    }
    cout << endl;
  }
  
}