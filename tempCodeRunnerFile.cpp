#include <iostream>
using namespace std;
int main()
{
    int counter, sum, N;
    cout << "Enter the number of positive integers :";
    cin >> N;
    sum = 0;
    counter = 0;
    while (counter <= N)
    {
       sum += counter;
       counter++;
    }
    cout << "The sum of the first " << N
         << " positive integers is " << sum << endl;
    return 0;
}