#include <stdio.h>

int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6};
  int num = 4;
  int result[num];

  combine_increase(arr, 0, result, num, num, sizeof(arr)/sizeof(int));
  printf("·Ö½çÏß\n");
  combine_decrease(arr, sizeof(arr)/sizeof(int), result, num, num);
  return 0;
}

void combine_increase(int* arr, int start, int* result, int count, const int NUM, const int arr_len)
{
  int i = 0;
  for (i = start; i < arr_len + 1 - count; i++)
  {
    result[count - 1] = i;
    if (count - 1 == 0)
    {
      int j;
      for (j = NUM - 1; j >= 0; j--)
        printf("%d\t",arr[result[j]]);
      printf("\n");
    }
    else
      combine_increase(arr, i + 1, result, count - 1, NUM, arr_len);
  }
}

void combine_decrease(int* arr, int start, int* result, int count, const int NUM)
{
  int i;
  for (i = start; i >=count; i--)
  {
    result[count - 1] = i - 1;
    if (count > 1)
    {
      combine_decrease(arr, i - 1, result, count - 1, NUM);
    }
    else
    {
      int j;
      for (j = NUM - 1; j >=0; j--)
    printf("%d\t",arr[result[j]]);
      printf("\n");
    }
  }
}
