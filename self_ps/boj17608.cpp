#include <iostream>

int main()
{
    int n, max, max_i, res;
    int *arr;
    std::cin >> n;
    arr = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    res = 1;
    max_i = n - 1;
    max = arr[max_i];
    for (int j = n - 1; j >= 0; j--)
    {
        if (arr[j] > max)
        {
            max = arr[j];
            max_i = j;
            res++;
        }
    }
    std::cout << res << std::endl;

    free(arr);
    return 0;
}