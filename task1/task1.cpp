#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> concatenateLanguages(const vector<string>& L1, const vector<string>& L2) {
    vector<string> ConcLang;
    for (const string& string1 : L1) {
        for (const string& string2 : L2) {
            string ConcStr = string1 + string2;
            ConcLang.push_back(ConcStr);
        }
    }
    return ConcLang;
}

int main() {
    setlocale(LC_ALL, "ru");
    vector<string> L1 = { "abc", "def" };
    vector<string> L2 = { "123", "456" };
    bool flag = false;

    if ((L1.size() > 10000) || (L2.size() > 10000))
    {
        cout << "Количество цепочек слишком велико" << endl;
        flag = true;
    }
    for (int i = 0; i < L1.size(); i++)
    {
        if (L1[i].length() > 100)
        {
            cout << "Длина цепочки слишком велика" << endl;
            flag = true;
        }

    }
    for (int i = 0; i < L2.size(); i++)
    {
        if (L2[i].length() > 100)
        {
            cout << "Длина цепочки слишком велика" << endl;
            flag = true;
        }

    }
    if (flag != true)
    {
        vector<string> resultLanguage = concatenateLanguages(L1, L2);
        for (const string& string : resultLanguage)
        {
            cout << string << endl;
        }
    }
}
