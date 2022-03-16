#include <iostream>

int main()
{
    int n, min, min_i;
    int *arr, *target_arr;
    std::cin >> n;
    arr = (int *)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    for (int j = 0; j < n; j++)
    {
        min = 1001;
        for (int k = 0; k < n; k++)
        {
            if (arr[k] < min)
            {
                min = arr[k];
                min_i = k;
            }
        }
        std::cout << min << std::endl;
        arr[min_i] = 1001;
    }

    return 0;
}