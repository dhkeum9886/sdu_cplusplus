#include <iostream>
using namespace std;

int max(int a, int b)    // �Լ� ����, a�� b�� �� �μ�
{
  return a > b ? a : b;  // a�� b���� ũ�� a�� ��ȯ
}

int main()
{
  int ret;
  ret = max(3, 5);  // �Լ� ȣ��, 3�� 5�� �� �μ�
                    // ��ȯ���� ����� ret�� ����
  cout << "�ִ밪: " << ret << endl;

  system("PAUSE");
  return 0;
}
