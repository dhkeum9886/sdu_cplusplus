#include <iostream>
using namespace std;
#include <cstring>
#include <stdlib.h>

int main()
{
  int *ip;
  double *dp;

  ip = (int *)malloc(sizeof(int));
  dp = (double *)malloc(sizeof(double));
  // ���ϰ��� �˻��Ͽ� �� ���������� Ȯ���ϴ� ��ƾ�� �����ؾ� �����ϴ�.
  if(ip == NULL || dp == NULL)
  // �� ������ ���ϴ� ũ���� �޸𸮰� �����ϸ�
  {
     cout << "�޸𸮰� �����մϴ�!\n";
     exit(1);
  }
  else
  {
     *ip = 777;
     *dp = 3.14;
     cout << "ip ����: " << *ip << endl;
     cout << "dp ����: " << *dp << endl; 
     cout << "ip �ּ�: " << ip << endl;
     cout << "dp �ּ�: " << dp << endl;
  }
  free(ip);
  free(dp);
  // �޸𸮸� �Ҵ��Ѵ�.
  int *pt = new int;
  *pt = 200; 
  cout << "pt �ּ�: " << pt << endl;
  cout << "pt ����: " << *pt << endl;
  // �޸𸮸� �����Ѵ�.
  delete pt;
 
  system("PAUSE");
  return 0;  
}
