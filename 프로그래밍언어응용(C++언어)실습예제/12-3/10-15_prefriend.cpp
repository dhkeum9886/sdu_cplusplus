#include <iostream>
using namespace std;

class Cat;
// ���� ���� Ŭ�������� ���� ������ �Լ��� ����� �� �����Ͽ� ���� �����Ѵ�.
// Ŭ���� Dog���� Ŭ���� Cat�� ����ϹǷ� Cat Ŭ������ ������ �����Ѵ�.
 
class Dog
{
  public:
    Dog(int age, int weight) {Age = age; Weight = weight;};
    friend void dataShow(Dog &obj);
    friend void cpy(Dog &obj, Cat obj2);
    
  private:
    friend class Cat;
    unsigned int Age;
    unsigned int Weight;
};

class Cat
{
  public:
    Cat(int age, int weight) {Age = age; Weight = weight;};
    friend void dataShow(Dog &obj);
    friend void cpy(Dog &obj, Cat obj2);

  private:
    unsigned int Age;
    unsigned int Weight;
};

void dataShow(Dog &obj)
{
  cout << "��  ��: " << obj.Age << endl;
  cout << "������: " << obj.Weight << endl;
}

void cpy(Dog &obj, Cat obj2)
// ���� ����(&)�� ����ؾ� ��� ������ ���� ������ �� �ִ�.
{
  obj.Age = obj2.Age;
  obj.Weight = obj2.Weight;
}

int main()
{
  Dog happy = Dog(3, 4);
  Cat cat = Cat(5, 7);
  
  dataShow(happy);
  cpy(happy, cat);
  
  dataShow(happy);

  system("PAUSE");
  return 0;
}
