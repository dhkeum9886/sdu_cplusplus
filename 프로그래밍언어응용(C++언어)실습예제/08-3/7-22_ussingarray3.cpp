#include <iostream>
using namespace std;

void usingArray(int arr[][3]); // 2���� �迭�� ���ڷ� ���� �Լ��� ����

int main()
{
  int js[2][3] = {{10, 20, 30}, {40, 50, 60}};
  
  usingArray(js);

  system("PAUSE");
  return 0;
}

void usingArray(int arr[][3])
{
  for(int i = 0; i < 2; ++i)
    for(int j = 0; j < 3; ++j)
      cout << "arr[" << i << "][" << j << "] = " <<
        arr[i][j] << "\n";
}

