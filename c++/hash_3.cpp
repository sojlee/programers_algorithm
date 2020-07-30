#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<vector<string>> clothes) {

    int answer = 1;
    map<string, int> category;
    map<string, int>::iterator itr;

    for (int i = 0; i < clothes.size(); i++) {
        if (category.find(clothes[i][1]) != category.end())
            category[clothes[i][1]] += 1;
        else
            category.insert(pair<string, int>(clothes[i][1], 1));
    }

    for (itr = category.begin(); itr != category.end(); itr++) {
        answer *= (itr->second + 1);
    }
    return answer - 1;
}