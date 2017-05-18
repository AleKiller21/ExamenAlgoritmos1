#include "Test.h"
#include <iostream>
#include <map>
using namespace std;

bool exists(vector<int> avl_tree, int number)
{
  int pos = 0;

  while(true)
  {
    if(pos >= avl_tree.size() || pos < 0) return false;
    if(avl_tree[pos] == number) return true;
    if(avl_tree[pos] < number)
    {
      pos = pos*2 + 2;
    }
    else
    {
      pos = pos*2 + 1;
    }
  }
}
BinaryNode* convertToLinkedTree(vector<int> max_heap, int index)
{
  if(index < 0 || index >= max_heap.size()) return NULL;

    BinaryNode* node = new BinaryNode(max_heap[index]);
    int left = index*2 + 1;
    int right = index*2 + 2;

    node->left_child = convertToLinkedTree(max_heap, left);
    node->right_child = convertToLinkedTree(max_heap, right);

    return node;
}

BinaryNode* convertToLinkedTree(vector<int> max_heap)
{

  return convertToLinkedTree(max_heap, 0);
}

int main ()
{
  test();
  return 0;
}






