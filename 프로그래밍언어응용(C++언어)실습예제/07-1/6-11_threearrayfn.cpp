#include <iostream>
using namespace std;
void show(int p[]);  // �Լ��� ����, ÷�� ���� 

int main(void)
{
   int a[] = {4,5,6};
   
   show(a); // show() �Լ��� ȣ���ϸ鼭 
            // a �迭�� ���� �ּҸ� p���� ����
   system("PAUSE");
   return 0;
}

void show(int p[])
{
  for(int i = 0; i < 3; i++)
  {
    cout << "P[" << i << "]����" << p + i << "   ";
    cout << "p[" << i << "] = " << p[i] << endl;
  }
}

