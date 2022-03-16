#include <iostream>
using namespace std;
int arr[1000001];
int *res;

void merge (int left, int right)
{
    int mid = (left + right) / 2;
    int i = left;
    int j = mid + 1;
    int k = left;
    while (i <= mid && j <= right)
    {
        if (arr[i] <= arr[j])
        {
            res[k++] = arr[i++];
        }
        else
        {
            res[k++] = arr[j++];
        }
    }
    int tmp = (i > mid) ? j : i;
    while (k <= right) res[k++] = arr[tmp++];
    for (int i = left; i <= right; i++) arr[i] = res[i];
}

void partition(int left, int right)
{
    int mid;
    if (left < right)
    {
        int mid = (left + right) / 2;
        partition(left, mid);
        partition(mid + 1, right);
        merge(left, right);
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    res = new int[n];

    partition(0, n - 1);

    for (int j = 0; j < n; j++)
    {
        cout << res[j] << endl;
    }
}