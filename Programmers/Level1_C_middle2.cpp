#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
char* solution(const char* s) {
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
    int num = strlen(s);
    
    if (num % 2 == 0)//¦��
    {
        char* answer = (char*)malloc(3);
        answer[0] = s[(num - 1) / 2];
        answer[1] = s[((num - 1) / 2) + 1];
        answer[2] = NULL;
        return answer;
    }
    else
    {
        char* answer = (char*)malloc(2);
        answer[0] = s[(num - 1) / 2];
        answer[1] = NULL;
        return answer;
    }
}

int main()
{
    solution("abcde");
    
}