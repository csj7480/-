#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "�輭���� ";
    for (int i = 0; i < seoul.size(); i++) {
        if (seoul[i] == "Kim") {
            answer.append(to_string(i));
            break;
        }
    }
    answer.append("�� �ִ�.");
    return answer;
}