#include <iostream>

int main()
{
    int n, x_min, x_min_i, y_min, y_min_i, min_i, num_x;
    int *arr_x, *arr_x_mul, *arr_y, *arr_ord;
    arr_x = (int *)malloc(sizeof(int) * n);
    arr_x_mul = (int *)malloc(sizeof(int) * n);
    arr_y = (int *)malloc(sizeof(int) * n);
    arr_ord = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr_x[i] >> arr_y[i];
    }

    x_min = 100001;
    y_min = 100001;
    num_x = 0;

    for (int j = 0; j < n; j++)
    {
        for (int k = 0; k < n; k++)
        {
            if (arr_x[k] < x_min)
            {
                x_min = arr_x[k];
                x_min_i = k;
            }
        }
        
        for (int l = 0; l < n; l++)
        {
            
            if (arr_x[l] == x_min)
            {
                num_x++;
            }
        }

        if (num_x == 1)
        {
            min_i = x_min_i;
        }
        else
        {
            for (int m = 0; m < n; m++)
            {

            }
        }

        arr_ord[j] = min_i;
        arr_x[min_i] = 100001;
        arr_y[min_i] = 100001;
    }

    free(arr_x);
    free(arr_y);
    return 0;
}