#include <iostream>

int main()
{
    int a, b, v, dis, day;
    std::cin >> a >> b >> v;

    day = (v - a) / (a - b);
    dis = (a - b) * day;
    while (true)
    { 
        day++;
        dis += a;
        if (dis >= v)
        {
            break;
        }
        dis -= b;
    }

    std::cout << day << std::endl;
    return 0;
}