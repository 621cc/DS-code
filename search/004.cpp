#include <iostream>
#include "BiTree.cpp"
using namespace std;
// p19 01
int pre = -INT_MAX;
int JudgeBST(BTNode *root)
{
  if (root == NULL)
    return 1;
  int a = JudgeBST(root->lchild);
  if (root->data <= pre || a == 0)
    return 0;
  else
    pre = root->data;
  int b = JudgeBST(root->rchild);
  return b;
}
int main()
{
  BTNode *T = aaaa();
  if (JudgeBST(T))
    cout << "�Ƕ���������!";
  else
    cout << "���Ƕ���������!";
  return 0;
}