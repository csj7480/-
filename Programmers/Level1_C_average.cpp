#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len�� �迭 arr�� �����Դϴ�.
double solution(int arr[], size_t arr_len) {
    double answer = 0;
    int i = 0;
    int num = arr_len;
    while (arr_len > 0)
    {
        answer = answer + arr[i];
        i++;
        arr_len--;
    }
    return answer / num;
}