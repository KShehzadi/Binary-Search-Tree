#include <iostream>
using namespace std;

int BSRecursive(int* A, int key, int low, int high)
{
  if(low > high)
  {
    return -1;
  }

  int mid = (low + high)/2;

  if(key == A[mid]) return mid;
  if(key < A[mid]) return BSRecursive(A, key, low, mid);
  else return BSRecursive(A, key, mid + 1, high);
}
