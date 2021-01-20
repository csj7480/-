#include <string>
#include <sstream>
#include <vector>
#include <map>
using namespace std;
map<string, string> m;

vector<string> solution(vector<string> record)
{
    vector<string> answer;
    string id, name, state;
    stringstream ss;

    for (int i = 0; i < record.size(); i++)
    {
        ss.str(record[i]);
        ss >> state; ss >> id; ss >> name;
        if (state == "Enter" || state == "Change") {
            m[id] = name;
        }
        ss.clear();
    }

    for (int i = 0; i < record.size(); i++)
    {
        ss.str(record[i]);
        ss >> state; ss >> id;
        name = m[id];
        if (state == "Enter") {
            answer.push_back(name + "���� ���Խ��ϴ�.");
        }
        if (state == "Leave") {
            answer.push_back(name + "���� �������ϴ�.");
        }
        ss.clear();
    }
    return answer;
}