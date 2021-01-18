#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// prices_len은 배열 prices의 길이입니다.
int *solution(int prices[], size_t prices_len)
{
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int *answer = (int *)malloc(sizeof(int) * prices_len);
    for (int i = 0; i < prices_len; i++)
    {
        int time = 0;
        for (int j = i + 1; j < prices_len; j++)
        {
            time += 1;
            if (prices[i] > prices[j])
            {
                break;
            }
        }
        answer[i] = time;
    }
    return answer;
}

int main()
{
    int prices[5] = {1, 2, 3, 2, 3};
    int *result = solution(prices, 5);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", result[i]);
    }
    return 0;
}