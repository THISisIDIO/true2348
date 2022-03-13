#include <iostream>
#include <vector>
using namespace std;
/* 1. + запомнить и вывести числа
   2. + вывести тройки чисел
   3. + вывести сумму троек
   4. вывести сумму делящююся на 4
   5. вывести их кол-во
*/
int main()
{
    int n(0);
    int k(0);
    cin >> n;
    vector<int> numbers(n);
    for(int i(0);i<n; i++)
        cin >> numbers[i];
    for(int i(0);i<n; i++)
    for(int j(i+1);j<n; j++)
    for(int l(j+1);l<n; l++)
        {
            int sum1=numbers[i]+numbers[j]+numbers[l];
            if (sum1%4==0)
                k+=1;
        }
    cout << k << endl;
    return 0;
}
