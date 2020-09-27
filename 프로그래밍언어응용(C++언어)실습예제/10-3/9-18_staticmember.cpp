#include <iostream>
#include <iomanip>
using namespace std;

class Dog
{
 public:
  Dog(int age, int weight);
  void showData();
  static void showMari();    // ���� ����Լ� ���� 
 private:
  static int mari;           // ���� ������� ���� 
  unsigned int Age;
  unsigned int Weight;
};

int Dog::mari = 0;   // ���� ������� mari�� Ŭ���� �ܺο��� �ʱ�ȭ 

Dog::Dog(int age, int weight)  // �Ű������� �ִ� ������ ���� 
{
  Age = age;
  Weight = weight;

  mari++;   // ��ü �� ī��Ʈ 
}

void Dog::showData()
{
  cout << setw(4) << Age;
  cout << setw(9) << Weight;
}

void Dog::showMari()
{
  cout << setw(9) << mari << endl;
}

int main()
{
  Dog happy(3, 4);
  cout << "��  ��: ������ : ���� ��\n";
  happy.showData();
  happy.showMari();

  Dog marry(5, 6);
  marry.showData();
  marry.showMari();
 
  Dog nuri(7, 8);
  nuri.showData();
  nuri.showMari();

  system("PAUSE"); 
  return 0; 
}
