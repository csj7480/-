#include <string>
#include <iostream>
#include <array>
using namespace std;

array <int, 2> arr = { 0,0 };
bool solution(string s)
{
    bool answer = true;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'p' || s[i] == 'P')
            arr[0]++;
        if (s[i] == 'y' || s[i] == 'Y')
            arr[1]++;
    }
    if (arr[0] != arr[1])
        answer = false;

    


    // [����] ��ư�� ������ ��� ���� �� �� �ֽ��ϴ�.
    cout << "Hello Cpp" << endl;

    return answer;
}