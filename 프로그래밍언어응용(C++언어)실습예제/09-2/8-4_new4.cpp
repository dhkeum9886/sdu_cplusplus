#include <iostream>
using namespace std;

int main()
{
  const int size = 10;
  // �ʿ��� ��ŭ�� ���� �޸𸮸� �Ҵ��Ѵ�.
  int *arr = new int [size];
  
  for(int i = 0; i < size; ++i)
  {
    arr[i] = i + 1;
  }
  // ����� ����ϰ� ����Ѵ�.
  int sum = 0;
  for(int i = 0; i < size; ++i)
  {
    sum += arr[i];
  }
  float ave = (float)sum / (float)size;
  cout << "�� = " << sum << ", ��� = " << ave << "\n";
  
  // ����� �޸𸮸� �����Ѵ�.
  delete[] arr;
  
  system("PAUSE");
  return 0;  
}
