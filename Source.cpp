#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <string>


using namespace std;
string Change(string& s);
int Count(const string s, const string cs);
int main()
{
    string str;
    char str1[] = { "BASIC" };
    cout << "Enter string:" << endl;
    getline(cin, str);
    cout << "String contained " << Count(str, str1) << " elements of 'BASIC'" << endl;
    string dest = Change(str);
    cout << "Modified string (param) : " << str << endl;
    cout << "Modified string (result): " << dest << endl;

    return 0;
}
int Count(const string s, const string cs)
{
    size_t pos = 0;
    int k = 0;
    while ((pos = s.find_first_of(cs, pos)) != -1)
    {
        k++;
        pos++;
    }
    return k;
}
string Change(string & s)
 {
        size_t pos = 0;
        while ((pos = s.find('B', pos)) != -1)
            if (s[pos + 1] == 'A' && s[pos + 2] == 'S' && s[pos + 3] == 'I' && s[pos + 4] == 'C')
                s.replace(pos, 6, "Delphi");
            else
                pos++;
        return s;
}
