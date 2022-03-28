#include <iostream>

//int main()
//{
//    int result = 0; // 결과의 최솟값 (밑에서 아무 일이 안 일어나면 이 값이 출력됨)
//    for (int x = 0; x < n; x++) // 각각의 값들에 대하여
//    {
//        if (condition of x) // 만약 x가 주어진 조건을 만족한다면
//        {
//            result = x; // 결과값을 x로 바꾸기
//            break; // for문 종료 (조건을 만족하는 최소의 x를 찾는 것이므로)
//        }
//    }
//    return result;
//}

int main ()
{
    int x_min = 9999; // 결과의 최댓값
    for (int i = 0; i < n; i++) // 각각의 값들에 대하여
    {
        x = function(i) // x값 업데이트
        if (x < x_min) // 만약 x가 x_min보다 작다면
        {
            x_min = x; // x_min 업데이트
        }
    }
    return x_min;
}