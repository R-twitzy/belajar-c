#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;

  struct tst
  {
    int id;
    string name;
  } test[n];

  for (int i = 0; i < n; i++)
  {
    cout << "masukan id:";
    cin >> test[i].id;
    cout << "name:";
    cin >> test[i].name;
  }
  
  cout << "hasil:" << endl;
  for (int i = 0; i < n; i++)
  {
    cout << "id: " << test[i].id << endl;
    cout << "name: " << test[i].name << endl;
    cout << endl;
  }
  
  

  return 0;
}