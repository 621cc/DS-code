#include <iostream>
#include "BITreefun.cpp"
using namespace std; //��дԪ��ֵ��Ҫ����10����Ϊ�ַ���
// p13 03
void Max(BTNode *p, char &max)
{
  if (p != NULL)
  {
    if (p->data > max)
      max = p->data;
    Max(p->lchild, max);
    Max(p->rchild, max);
  }
}
int main()
{
  BTNode *T = aaaa();
  char max = '0';
  Max(T, max);
  cout << "���ֵΪ:" << max << endl;
}