#include <iostream>
using namespace std;

class Dog
{
  public:
    unsigned int GetAge() {return Age;};
    void SetAge(unsigned int Age);

  private:
    unsigned int Age;
    unsigned int Weight;
};

void Dog::SetAge(unsigned int Age)
{
  this->Age = Age; // ������� this->Age�� �������� Age�� ����
}

int main()
{
  Dog happy;
  happy.SetAge(3);
  cout << "happy�� ���̴� " << happy.GetAge() << "�Դϴ�.\n";
  
  system("PAUSE");
  return 0;
}
