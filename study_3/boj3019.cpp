#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int c, p, ans;
    cin >> c >> p;
    int arr[101];
    for (int i = 0; i < c; i++)
    {
        cin >> arr[i];
    }
    
    ans = 0;
    if (p == 1)
    {
        ans += c; // 세워서 c개 떨굴 수 있음
        for (int j = 0; j < c - 3; j++)
        {
            if ((arr[j] == arr[j + 1]) && (arr[j + 1] == arr[j + 2]) && (arr[j + 2] == arr[j + 3])) // 길이가 3인 평평한 곳이 나오면
            {
                ans += 1;
            }
        }
    }
    else if (p == 2)
    {
        // 길이가 2인 평평한 곳이 나오면
        for (int j = 0; j < c - 1; j++)
        {
            if ((arr[j] == arr[j + 1]))
            {
                ans += 1;
            }
        }
    }
    else if (p == 3)
    {
        // 0도
        // 길이가 2인 평평 + 마지막 칸 +1 나오면
        for (int j = 0; j < c - 2; j++)
        {
            if ((arr[j] == arr[j + 1]) && (arr[j + 1] + 1 == arr[j + 2]))
            {
                ans += 1;
            }
        }
        // 90도 (반시계)
        // 2칸: 앞칸 = 뒷칸 + 1이면
        for (int j = 0; j < c - 1; j++)
        {
            if (arr[j] == arr[j + 1] + 1)
            {
                ans += 1;
            }
        }
    }
    else if (p == 4)
    {
        // 0도
        // 맨 앞칸 +1 , 길이가 2인 평평 나오면
        for (int j = 0; j < c - 2; j++)
        {
            if ((arr[j] == arr[j + 1] + 1) && (arr[j + 1] == arr[j + 2]))
            {
                ans += 1;
            }
        }
        // 90도 (반시계)
        // 2칸: 앞칸 + 1 = 뒷칸이면
        for (int j = 0; j < c - 1; j++)
        {
            if (arr[j] + 1 == arr[j + 1])
            {
                ans += 1;
            }
        }
    }
    else if (p == 5)
    {
        // 0도
        // 평평한 3칸
        for (int j = 0; j < c - 2; j++)
        {
            if ((arr[j] == arr[j + 1]) && (arr[j + 1] == arr[j + 2]))
            {
                ans += 1;
            }
        }
        // 90도
        // 3번의 시계방향 90도와 동일
        for (int j = 0; j < c - 1; j++)
        {
            if (arr[j] == arr[j + 1] + 1)
            {
                ans += 1;
            }
        }
        // 180도
        // 양쪽이 같고 가운데만 -1
        for (int j = 0; j < c - 2; j++)
        {
            if ((arr[j] == arr[j + 2]) && (arr[j] == arr[j + 1] + 1))
            {
                ans += 1;
            }
        }
        // 270도
        // 4번의 시계방향 90도와 동일
        for (int j = 0; j < c - 1; j++)
        {
            if (arr[j] + 1 == arr[j + 1])
            {
                ans += 1;
            }
        }
    }
    else if (p == 6)
    {
        // 0도
        // 평평한 3칸
        for (int j = 0; j < c - 2; j++)
        {
            if ((arr[j] == arr[j + 1]) && (arr[j + 1] == arr[j + 2]))
            {
                ans += 1;
            }
        }
        // 90도
        // 앞칸 = 뒷칸 + 2
        for (int j = 0; j < c - 1; j++)
        {
            if (arr[j] == arr[j + 1] + 2)
            {
                ans += 1;
            }
        }
        // 180도
        // 앞칸 + 1 = 두번째칸, 두번째칸 = 세번째칸
        for (int j = 0; j < c - 2; j++)
        {
            if ((arr[j] + 1 == arr[j + 1]) && (arr[j + 1] == arr[j + 2]))
            {
                ans += 1;
            }
        }
        // 270도
        // 평평한 2칸
        for (int j = 0; j < c - 1; j++)
        {
            if ((arr[j] == arr[j + 1]))
            {
                ans += 1;
            }
        }
    }
    else if (p == 7)
    {
        // 0도
        // 평평한 3칸
        for (int j = 0; j < c - 2; j++)
        {
            if ((arr[j] == arr[j + 1]) && (arr[j + 1] == arr[j + 2]))
            {
                ans += 1;
            }
        }
        // 90도
        // 평평한 2칸
        for (int j = 0; j < c - 1; j++)
        {
            if ((arr[j] == arr[j + 1]))
            {
                ans += 1;
            }
        }
        // 180도
        // 평평한 2칸, 두번째칸 = 마지막칸 + 1
        for (int j = 0; j < c - 2; j++)
        {
            if ((arr[j] == arr[j + 1]) && (arr[j + 1] == arr[j + 2] + 1))
            {
                ans += 1;
            }
        }
        // 270도
        // 앞칸 + 2 = 뒷칸
        for (int j = 0; j < c - 1; j++)
        {
            if (arr[j] + 2 == arr[j + 1])
            {
                ans += 1;
            }
        }
    }
    cout << ans << endl;
    return 0;
}