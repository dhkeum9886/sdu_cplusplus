#include <iostream>        
using namespace std;     

int main()                   
{                                        
  double sum = 0.0;
  double x;
    
  cout << "������ �Ǽ��� �Է��ϼ���. \n";
  cout << "�հ踦 �������� ������ �Ǽ��̿��� �����͸� �Է��ϼ���!\n";
  while(cin >> x) {
     sum += x;
  }
  cout << "�������� �Է��� ���: " << x << endl;
  cout << "�հ� = " << sum << endl;
 if(cin.fail() && !cin.bad()) {
    cin.clear();
    while(!isspace(cin.get()))
       continue;
 }
 else {
    cout << " �߸� �Է��� �� -- ";
    cout << " �ٷ� ���� �����ͱ����� �հ� ���ϴ�.";
    cout << " ��� �ϳ��� �� �ް� ���� ���Դϴ�...\n";
    exit(1);
 }
  
 system("PAUSE");        
 return 0;
}

