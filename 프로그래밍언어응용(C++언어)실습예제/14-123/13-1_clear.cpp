#include <iostream>
using namespace std;

int main()
{
  double sum = 0.0;
  double x;
  
  cout << "������ �Ǽ��� �Է��ϼ���. \n";
  cout << "�հ踦 �������� ������ �Ǽ� �̿��� �����͸� �Է��ϼ���.\n";
  while(cin >> x)  // ��Ʈ���� �����̾�� true
  {
    sum += x;
  }
  cout << "�������� �Է��� ���: " << x << endl;
  cout << "�հ� = " << sum << endl;
  
  if(cin.fail() && !cin.bad())
  {     // cin�� ���ۿ� ������ ��ġ�� �ʴ� ������ �����̸�
    cin.clear(); //��Ʈ���� ���¸� �缳���Ѵ�.
    while(!isspace(cin.get())) // white space ���ڰ� �ƴϸ� ����
      continue;
  }
  else  // cin �� �� �̻� ���� �޾Ƶ��� �� ���� ġ���� �����̸�
  {
    cout << " �߸� �Է��� �� -- ";
    cout << " �ٷ� ���� �����ͱ����� �հ踦 ���ϴ�.";
    exit(1);
  }
  cout << "���ο� ����� �Է��ϼ���. \n";
  cin >> x;   // ���� ����
  
  system("PAUSE");
  return 0;
}


