#include <iostream>

using namespace std;
/* 1. + ввести числа
   2. + вы€снить кол-во чисел дел€щихс€ на 4 с остатком(0,1,2,3)
   3. вычислить комбинации(000,013,022,112,233)
   4. сложить комбинации
*/
int main()
{
    int n(0);
	int c[4] = {0,0,0,0};
	int cur_num(0);
	cin >> n ;
	for(int i(0);i<n;i++)
	    {
	    	cin >> cur_num;
	    	c[cur_num%4] ++;
		}
    return 0;
}
