// void * Ÿ�� ������ ����ϱ� 
#include <iostream>
using namespace std;

void iswap(void *px, void *py);
void dswap(void *px, void *py);

int main()
{
  int x = 3, y = 7;
  double dx = 2.4, dy = 77.88;
  
  cout << "swap ȣ�� ��, x: " << x << " y: " << y << "\n";
  iswap(&x, &y);  // ���� x, y�� �ּҸ� ���μ��� ���� (call by ref) 
  cout << "swap ȣ�� ��, x: " << x << " y: " << y << "\n";

  cout << "swap ȣ�� ��, dx: " << dx << " dy: " << dy << "\n";
  dswap(&dx, &dy);
  cout << "swap ȣ�� ��, dx: " << dx << " dy: " << dy << "\n";
  system("PAUSE");
  return 0;
}

void iswap(void *px, void *py) // �Լ� ȣ��� �ּҸ� �Ѱܹޱ� ���� void *�����ͷ� ���μ� ����   
{
  int temp;
  temp = *(int *)px; // int * �������� ĳ��Ʈ ��ȯ�Ͽ� ���� ��ȯ
  *(int *)px = *(int *)py;
  *(int *)py = temp;
}

void dswap(void *px, void *py)
{
  double temp;
  temp = *(double *)px; // double * �������� ĳ��Ʈ ��ȯ�Ͽ� ���� ��ȯ
  *(double *)px = *(double *)py;
  *(double *)py = temp;
}
