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
    cout << (c[0]*(c[0]-1)*(c[0]-2))/6<< endl;
    cout << c[0]*c[1]*c[3]<< endl;
    cout << c[0]*c[2]*(c[2]-1)*0.5<< endl;
    cout << c[2]*c[1]*(c[1]-1)*0.5<< endl;
    cout << c[2]*c[3]*(c[3]-1)*0.5<< endl;
    return 0;
}
