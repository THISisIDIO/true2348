#include <iostream>
#include <vector>
using namespace std;
/* 1. + ��������� � ������� �����
   2. + ������� ������ �����
   3. ������� ����� �����
   4. ������� ����� ��������� �� 4
   5. ������� �� ���-��
*/
int main()
{
    int n(0);
    cin >> n;
    vector<int> numbers(n);
    for(int i(0);i<n; i++)
        cin >> numbers[i];
    for(int i(0);i<n; i++)
    for(int j(i+1);j<n; j++)
    for(int l(j+1);l<n; l++)
        cout << numbers[i]+numbers[j]+numbers[l]<< endl;
    return 0;
}
