#include <iostream>

using namespace std;
/* 1. + ������ �����
   2. + �������� ���-�� ����� ��������� �� 4 � ��������(0,1,2,3)
   3. ��������� ����������(000,013,022,112,233)
   4. ������� ����������
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
