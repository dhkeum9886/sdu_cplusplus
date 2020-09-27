#include <iostream>
#include <fstream>
using namespace std;
#include <cstdlib>
#include <cstring>
#include <iomanip>

struct Geecha {
  long number;   // �� ��ȣ 7 bytes
  char code[4];  // ���� �ڵ� 3 bytes
  char jasuk[4]; // �¼� �ڵ� 3 bytes
  long cal;      // ���� ��� 6 bytes
  char org[4];   // ����� �ڵ� 3 bytes
  char dest[4];  // ������ �ڵ� 3 bytes
  long soo;      // ž�� �ο�   3 bytes
  double dist;   // ���� �Ÿ�   6 bytes
  long count;    // �� �̿� Ƚ�� 2 bytes
};
  
int main()
{
  char line[256] = ""; // �� ���� ���ڵ� ������ �Է��� ���� ����
  char temp1[8], temp4[7], temp7[4], temp8[7], temp9[3];
  
  struct Geecha gc = {0};  // ����ü ���� ����� �ʱ�ȭ
  
  ifstream fin;
  
  const char *fi = "project2.txt";
  
  fin.open(fi, ios::in | ios::binary);
  // �о� �� ������ ���� ����
  cout << "����ȣ:����:�¼�:�� ��:�����:������:ž���ο�:��     ��:���̿� ��:\n";
  // ���Ͽ� ����� ������ ���ڵ� ������ �о�´�.
  // ������ ���� ������(EOF) �б⸦ �ݺ��Ѵ�.
  while(!fin.eof())
  {
    fin.getline(line, 256); // ���ڵ� ������ �б�(��� ���ڿ��� �б�)
    // ���ڿ��� ���� long Ÿ������ ��ȯ
    gc.number = atol(strncpy(temp1, line + 0, 7));
    // strncpy(dest, source, number)
    if(gc.number == 0) break;
    strncpy(gc.code, line + 7, 3);  //�����ڵ�,�ڸ��� 0+7=7
    strncpy(gc.jasuk, line + 10, 3);//�¼��ڵ�,�ڸ��� 0+7+3=10
    gc.cal = atol(strncpy(temp4, line + 13, 6));
    // ���� ���, �ڸ��� 0+7+3+3=13
    strncpy(gc.org, line + 19, 3);                  // ����� �ڵ�
    strncpy(gc.dest, line + 22, 3);                // ������ �ڵ�
    gc.soo = atol(strncpy(temp7, line + 25, 3));   //ž�� �ο�
    gc.dist = atof(strncpy(temp8, line + 28, 6)); 
    // ���� �Ÿ�, �Ҽ��� ������ �ڸ�
    gc.count = atol(strncpy(temp9, line + 34, 2)); // �� �̿� Ƚ��

    // ���� ����ü�� ��� ��� ���� ������ ȭ�鿡 ���
    cout << setw(7) << gc.number;
    cout << setw(5) << gc.code;
    cout << setw(5) << gc.jasuk;
    cout << setw(8) << gc.cal;
    cout << setw(6) << gc.org;
    cout << setw(6) << gc.dest;
    cout << setw(9) << gc.soo;
    cout << setw(10) << gc.dist;
    cout << setw(7) << gc.count << endl;
  }
  fin.close();

  system("PAUSE");
  return 0;
}


