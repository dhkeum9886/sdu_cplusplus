#include <iostream>
using namespace std;

template <class Type>
class Info
{
  public:
    void getData();
    void showData();
  private:
    Type data;
};

template <class Type>
void Info<Type>::getData()
{
  cin >> data;
  cin.ignore(255, '\n');
}

template <class Type>
void Info<Type>::showData()
{
  cout << "�Է��� ������:" << data << endl;
};

int main()
{
  Info<int> i;
  Info<double> d;
  Info<char> ch;
  
  cout << "����, �Ǽ�, ���Ϲ��� ������ �Է��ϼ���! " << endl;
  
  i.getData();
  d.getData();
  ch.getData();
  
  i.showData();
  d.showData();
  ch.showData();
  
  system("PAUSE");
  return 0;
}
