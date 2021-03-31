#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>

using namespace std;

void myfunc()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}
