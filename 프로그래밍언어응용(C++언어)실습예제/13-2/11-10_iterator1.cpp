#include <iostream>
using namespace std;
#include <iterator>

int main()
{
  int number1, number2;
  cout << "�� ���� ���� �Է�: ";
  // Ű���忡�� �о���̱� ���� cin�� istream_iterator �ݺ��� ����
  istream_iterator<int> input(cin);

  number1 = *input; //ǥ�� �Է��� Ű���忡�� ù ��° ������ �Է�
  ++input;
  number2 = *input; //ǥ�� �Է��� Ű���忡�� �� ��° ������ �Է�

  // ȭ�鿡 ����ϱ� ���� cout�� ostream_iterator �ݺ��� ����
  ostream_iterator<int> output(cout);

  cout << number1 << "+" << number2 << "=";

  *output = number1 + number2; // cout���� ����Ѵ�.

  cout << endl; 
  
  system("PAUSE");
  return 0;
}
