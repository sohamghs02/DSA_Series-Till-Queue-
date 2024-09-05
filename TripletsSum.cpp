#include <iostream>
using namespace std;

void findTriplets(int arr[], int n, int sum)
{
  for (int i = 0; i < n - 2; i++)
  {
    for (int j = i + 1; j < n - 1; j++)
    {
      for (int k = j + 1; k < n; k++)
      {
        if (arr[i] + arr[j] + arr[k] == sum)
        {
          cout << "(" << arr[i] << ", " << arr[j] << ", " << arr[k] << ")" ;
          cout << endl;
        }
      }
    }
  }
}

int main()
{
  int arr[] = {1, 2, 3, 4, 5};
  cout << "Array: ";
  int n = sizeof(arr) / sizeof(arr[0]);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  int sum = 9;
  cout << "\nsum: " << sum << endl;
  cout << "Triplets:" << endl;
  findTriplets(arr, n, sum);
  return 0;
}