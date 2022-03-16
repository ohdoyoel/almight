#include <iostream>

int main()
{
    int n, q_5, k, res, res_min;
    std::cin >> n;
    q_5 = n / 5;

    res_min = 1668;
    for (int i = 0; i <= q_5; i++)
    {
        k = n - 5 * i;
        if (!(k % 3))
        {
            res = i + k / 3;
            if (res < res_min)
            {
                res_min = res;
            }
        }
    }

    if (res_min == 1668)
    {
        std::cout << -1 << std::endl;
    }
    else
    {
        std::cout << res_min << std::endl;
    }

    return 0;
}