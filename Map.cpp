#include "Map.h"

Map::Map()
{
  for(int i = 0; i < 999999; i++)
  {
    array.push_back(new pair<string,int>("",0));
  }
}

int Map::hash(string str)
{
  int sum = 0;

  for(int i=0;i < (int)str.length();i++)
  {
    sum+=str[i];
  }

  return sum;
}

void Map::put(string key, int value)
{
  int pos = hash(key);
  
  if(array[pos]->first != "")
  {
    array[pos]->second *= value;
    //cout << array[pos]->second << endl;
  }

  else
  {
    array[pos]->first = key;
    array[pos]->second = value;
    //cout << array[pos]->second << endl;
  }
}

int Map::get(string key)
{
  int pos = hash(key);

  return array[pos]->first == "" ? -1 : array[pos]->second;
}


