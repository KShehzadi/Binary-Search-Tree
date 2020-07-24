#include <iostream>
using namespace std;

int BSIterative(int* A, int key, int low, int high)
{
  int mid;

  while(low <= high)
  {
    mid = (low + high)/2;

    if(key == A[mid]) return mid;
    if(key > A[mid]) low = mid+1;
    else high = mid;
  }
  return - 1;
}
