#include <iostream>
using namespace std;
void swap(int &x, int &y); // �Լ��� ���� ����

int main()
{
  int x = 3, y = 7;
  
  cout << "swap ȣ�� ��, x: " << x << " y: " << y << "\n";
  swap(x, y);            // �Լ� ȣ��, x�� y�� �� �μ�
  cout << "swap ȣ�� ��, x: " << x << " y: " << y << "\n";

  system("PAUSE"); 
  return 0;
}

void swap(int &px, int &py)  // px�� py�� ���� ���� 
{
  int temp;
  
  temp = px;
  px = py;
  py = temp;
}
