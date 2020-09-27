#include <iostream>
#include <cstring>
using namespace std;

class Dog
{
  public:
    Dog();
    Dog(char *name, int age, int weight);
    ~Dog();
    Dog &operator =(Dog &obj); // ���� ������ �����ε�
    void DataShow();
  private:
    char *Name;
    int Age;
    int Weight;
};

Dog::Dog()  // ������ ����
{
  Name = new char[20];  //new �����ڷ� ���� �޸𸮸� �Ҵ�
  strcpy(Name, "      "); 
  Age = 3;
  Weight = 4;
}

Dog::Dog(char *name, int age, int weight)
// �Ű������� �ִ� ������ ����
{
  Name = new char[20];
  strcpy(Name, name);
  Age = age;
  Weight = weight;
}

Dog::~Dog()
{
  delete[] Name;
}

Dog &Dog::operator =(Dog &obj) // ���� ������ �����ε� ����
{
  strcpy(Name, obj.Name);
  Age = obj.Age;
  Weight = obj.Weight;
  return *this;  // ��ü�� ��� ��ü(*this)�� ��ȯ�Ѵ�.
}

void Dog::DataShow()
{
  cout << "��  ��: " << Name << endl;
  cout << "��  ��: " << Age << endl;
  cout << "������: " << Weight << endl;
}

int main()
{
  Dog pet;
  Dog marry("�ֿϵ���", 5, 7);
  Dog nuri = Dog("�ֿ�", 8, 9);

  pet = marry; // ���� ������ �����ε带 ȣ���Ͽ� ��ü ���� �����Ѵ�. 
  pet.DataShow();

  pet = nuri; // ���� ������ �����ε带 ȣ���Ͽ� ��ü ���� �����Ѵ�.
  pet.DataShow();

  system("PAUSE");
  return 0;
}
