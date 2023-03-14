#include <iostream>
 using namespace std;
int partition(int arr[], int lb, int ub)
{ int pivot = arr[lb];
int i = lb+1, j = ub;
while (i <= j)
    { while (arr[i] <= pivot && i <= ub) i++;
while (arr[j] > pivot) j--;
if (i < j) swap(arr[i], arr[j]);
}
swap(arr[lb], arr[j]);
return j;
}
void quickSort(int arr[], int lb, int ub)
{ if (lb < ub)
 { int j = partition(arr, lb, ub);
 cout << lb << " " << j-1 << endl;
 quickSort(arr, lb, j-1);
 cout << j+1 << " " << ub << endl;
quickSort(arr, j+1, ub);
}
}
int main() { int n;
cin >> n; int arr[n];
for (int i = 0; i < n; i++)
    cin >> arr[i];
quickSort(arr, 0, n-1);
for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
cout << endl;
return 0;
}
