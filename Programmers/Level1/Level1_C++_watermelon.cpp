#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    for (int i = 1; i*2-1 < n; i++) {
        answer.append("����");
    }
    if (n % 2 != 0)
        answer.append("��");
    return answer;
}