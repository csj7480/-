#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
bool solution(const char* s) {
    int num = strlen(s);
    if ((num != 4) && (num != 6))
    {
        return false;
    }
    for (int i = 0; i < num; i++)
    {
        if (s[i] < 48 || s[i]>57)
        {
            return false;
        }
    }
    bool answer = true;
    return answer;
}