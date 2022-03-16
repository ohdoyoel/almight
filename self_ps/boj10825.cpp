#include <iostream>

int main()
{
    int n;
    char **arr_name;
    int *arr_kor, *arr_eng, *arr_math;
    std::cin >> n;
    arr_name = (char **)malloc(sizeof(char) * 30 * n);
    arr_kor = (int *)malloc(sizeof(int) * n);
    arr_eng = (int *)malloc(sizeof(int) * n);
    arr_math = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr_name[i] >> arr_kor[i] >> arr_eng[i] >> arr_math[i];
    }
    for (int j = 0; j < n; j++)
    {
        std::cout << arr_name[j] << arr_kor[j] << arr_eng[j] << arr_math[j] << std::endl;
    }
}