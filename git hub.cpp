

#include <iostream>
#include<string>
using namespace std;

int main()
{
    string str,str1;
    cout << "enter your name:";
        cin >> str;
        cout << "Welkom" << str;
        getchar();
        getline(cin, str1);
        cout << str1;
        cout << str1[0] << " " << str1[3];
        cout << "Lengs " << str1 << " =" << str1.size() << endl;
        for (int i = 0; i < str1.size(); ++i) {
            cout << i << "\t" << str1[i];
        }
        string str2 = "QWE", str3 = "QWE";
        if (str2 == str3) {
            cout << str2;
        }
        
}


