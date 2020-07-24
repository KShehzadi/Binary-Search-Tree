#include <iostream>
#include "BSRecursive.cpp"
#include "BSIterative.cpp"

using namespace std;

int* makeArray(int size, bool ascending = false);
void print(int* A, int length);

int* makeArray(int size, bool ascending)
{
  int* A = new int[size];

  if(ascending)
  {
    for(int i = 0; i < size; i++)
    {
      A[i] = i;
    }
  }
  else
  {
    for(int i = size; i >= 0; i--)
    {
      A[size - i] = i;
    }
  }
  return A;
}

void print(int* A, int length)
{
  for(int i = 0; i < length; i++)
  {
    cout<<A[i];
  }
  cout<<endl;
}

int main()
{
  int length = 19;
  int toFind = 6;
  int* A = makeArray(length, true);

  print(A, length);
  cout<<BSRecursive(A, toFind, 0, length - 1)<<endl;
  cout<<BSIterative(A, 12, 0, length - 1)<<endl;

  return 0;
}
