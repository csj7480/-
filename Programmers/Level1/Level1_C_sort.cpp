#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
char* solution(const char* s) {
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
    int i = 0;
    int count = 0;
    int num = strlen(s);
    char* temp = (char*)malloc(1);
    char* answer = (char*)malloc(num);
    strcpy(answer, s);
    printf("%c\n", answer[0]);
    printf("%c\n", answer[1]);
    printf("%c\n", answer[2]);
    printf("%c\n", answer[3]);
    printf("%c\n", answer[4]);
    printf("%c\n", answer[5]);
    while (1)
    {
        count = 0;
        i = 0;
        for (; i < num - 1; i++)
        {
            if (answer[i] < answer[i + 1])
            {
                temp[0] = answer[i + 1];
                answer[i + 1] = answer[i];
                answer[i] = temp[0];
                count++;
            }
        }
        if (count == 0)
        {
            break;
        }
    }

    return answer;

}