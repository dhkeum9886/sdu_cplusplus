#include <iostream>
using namespace std;
#include <vector>

int main()
{
  const int size = 7;
  int element[] = {10,20,30,40,50,60,70};

  vector<int> gamok(size); // int Ÿ�� ��Ұ� 7���� ���� ��ü ���� 
  
  vector<int> gamok2(element, element+size);
  //���� ��ü gamok2�� �����ϰ�, 
  //�迭 element[0]~element[size-1]�� ������ �ʱ�ȭ

  for(int i = 0; i < gamok2.size(); i++)
    cout << gamok2[i] << "  ";
  cout << endl;

  system("PAUSE");
  return 0;
}
