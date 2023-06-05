#include <bits/stdc++.h>
void sort012(int *arr, int n)
{
   //   Write your code here
   int c0 = 0, c1 = 0;
   for (int i = 0; i < n; i++) {
      if (arr[i] == 0) c0++;
      if (arr[i] == 1) c1++;
   }
   int c2 = n - c0 - c1;
   int k = 0;
   for (int i = 0; i < c0; i++)   arr[k++] = 0;
   for (int i = 0; i < c1; i++)   arr[k++] = 1;
   for (int i = 0; i < c2; i++)   arr[k++] = 2;
}