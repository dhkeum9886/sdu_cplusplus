#include <iostream>
#include <cstring>
using namespace std;

void showData(struct Address *st); // ����ü �����͸� �μ��� ���� �Լ��� ����

struct Address
{
  char name[20];
  char phone[20];
  char address[80];
};

int main()
{
  struct Address adr;
  strcpy(adr.name, "õ��ǥ");
  strcpy(adr.phone, "032-123-4567");
  strcpy(adr.address, "��⵵ ��õ��");
  showData(&adr); // ����ü ��ü adr�� �ּҸ� �Լ� showData()�� �� �μ��� ���

  system("PAUSE");
  return 0;
}

void showData(struct Address *st) // ����ü ������ st�� �� �μ��� ������ �Լ�
{
  cout << "�̸� : " << st->name << endl;
  cout << "��ȭ : " << st->phone << endl;
  cout << "�ּ� : " << st->address << endl;
} 
