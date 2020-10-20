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
  int length = 10;
  cout<<"Enter last - 1 element for an array starting from 0: ";
  cin>> length;
  int toFind = 6;
  int* A = makeArray(length, true);
  cout<<"Array :";
  print(A, length);
  cout<< "Enter digit whos index you want to find: ";
  cin>> toFind;
  cout<<"Index from Recursive Search: "<<BSRecursive(A, toFind, 0, length - 1)<<endl;
  cout<<"Index from Iterative Search: "<<BSIterative(A, toFind, 0, length - 1)<<endl;

  return 0;
}
