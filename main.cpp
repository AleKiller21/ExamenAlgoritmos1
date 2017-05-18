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

BinaryNode* convertToLinkedTree(vector<int> max_heap)
{
  BinaryNode* node_array[max_heap.size()];

  for(int i = 0; i < max_heap.size(); i++)
  {
    node_array[i] = new BinaryNode(max_heap[i]);
    //cout << node_array[i]->value << endl;;
  }

  for(int i = 0; i < max_heap.size(); i++)
  {
    cout << i << endl;
    int left = i*2 + 1;
    int right = i*2 + 2;
    if(left >= max_heap.size())
    {
      //cout << left << endl;
      break;
    }

    node_array[i]->left_child = node_array[left];
    node_array[i]->right_child = node_array[right];
  }

  // for(int i = 0; i < max_heap.size(); i++)
  // {
  //   cout << "Valor: " << node_array[i]->value << endl;
  //   cout << "left: " << node_array[i]->left_child->value << endl;
  //   cout << "right: " << node_array[i]->right_child->value << endl;
  //   cout << "--------------------------------------------" << endl;
  // }
  //cout << node_array[0]->left_child->right_child->left_child->value << endl;

  return node_array[0];
}

int main ()
{
  test();
  return 0;
}






