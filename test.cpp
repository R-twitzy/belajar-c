#include <iostream>

using namespace std;

int main()
{
  int value1 = 5, value2 = 15;

  int *p1, *p2;

  p1 = &value1; // p1 = alamat value1

  p2 = &value2; // p2 = alamat value2

  *p1 = 10; // nilai yang ditunjuk p1=10

  *p2 = *p1; // nilai yang ditunjuk p2= nilai

  // yang ditunjuk p1

  p1 = p2;
  // p1 = p2 (nilai pointer disalin)

  *p1 = 20; // nilai yang ditunjuk p1 = 20

  cout << "value1==" << value1 << "/value2==" << value2 << endl;

  cout << "*P1==" << *p1 << "/ *P2==" << *p2 << endl;

  cout << "P1==" << p1 << "/ P2==" << p2;

  return 0;
}