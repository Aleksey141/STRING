

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
        cout << "Lengs " << str1 << " =" << str.size() << endl;
        for (int i = 0; i < str.size(); ++i) {
            cout << i << "\t" << str[i];
        }

}


