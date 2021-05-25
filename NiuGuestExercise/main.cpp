//
//  main.cpp
//  NiuGuestExercise
//
//  Created by 吴四军 on 2021/5/25.
//  Copyright © 2021 vincent. All rights reserved.
//

#include <iostream>
#include </usr/local/include/bits/stdc++.h>
using namespace std;
//•连续输入字符串，请按长度为8拆分每个字符串后输出到新的字符串数组；
//•长度不是8整数倍的字符串请在后面补数字0，空字符串不处理。

//输入：
//abc
//123456789
//输出：
//abc00000
//12345678
//90000000

void trim(string &s)
{
    int index = 0;
    if(!s.empty())
    {
        while((index = s.find(' ',index)) != string::npos)
        {
            s.erase(index,1);
        }
    }
}
int main(int argc, const char * argv[]) {
    string temp;
    cin >> temp;
    cout << temp.back()<<endl;
    return 0;
}
