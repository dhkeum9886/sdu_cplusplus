#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

int main()
{
  int data[10] = {1,2,3,4,5,6,7,8,9,0};
  vector<int> vec(10); // int Ÿ�� ��Ұ� 10���� ���� vec�� ���� 

  copy(data, data + 10, vec.begin());
  //�迭 data[0]���� data[9]������ ��Ҹ� ���� vec�� ���� ��ġ���� ����
  ostream_iterator<int, char> show(cout, " ");
  //ȭ������ ����ϱ� ���� cout�� ostream_iterator �ݺ��� show�� 
  //�����Ѵ�. ostream_iterator<int, char>���� int�� ��� ��Ʈ��
  //���� ������ ���� ������ Ÿ���� �ǰ�, char�� ��� ��Ʈ������ ���� 
  //���� ���� �����ϱ� ���� ����ϴ� �������� ������ Ÿ���� �ȴ�.
  //show(cout, " ")�� " "�� ��� ��Ʈ���� �������� �� �ڿ� ǥ�õǴ�
  //�������̴�

  copy(vec.begin(), vec.end(), show);
  //copy(���� ���� ��ġ, ���� �� ��ġ, ����� ��ġ)
  //���Ϳ��� ��� ��Ʈ������ ������ �����Ͽ� ȭ������ ��½�Ų��. 
  cout << endl << endl;

  cout << "������ ���ͷ������� �Ͻ��� ���:\n";
  copy(vec.rbegin(), vec.rend(), show);
  // ���� vec�� ������ ���� ��ġ���� �������� �������� ��Ҹ�
  // show�� ������ ǥ�� ��� ��ġ�� ȭ������ ����Ѵ�.
  cout << endl << endl;

  cout << "������ ���ͷ������� ����� ���:\n";
  vector<int>::reverse_iterator ri;
  // ������ �ݺ��� ri, �����ͷ� ����
  
  for (ri = vec.rbegin(); ri != vec.rend(); ++ri)
    cout << *ri << ' ';
  cout << endl << endl;
 
  system("PAUSE");
  return 0;
}
