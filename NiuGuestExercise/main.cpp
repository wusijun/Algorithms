//
//  main.cpp
//  NiuGuestExercise
//
//  Created by 吴四军 on 2021/5/25.
//  Copyright © 2021 vincent. All rights reserved.
//

#include <iostream>
#include </usr/local/include/bits/stdc++.h>
#include <vector>
#include <string.h>
#include <algorithm>
#include <ctype.h>
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

int main(int argc, const char * argv[]) {
    string temp;
    cin >> noskipws >>temp;
    vector<char> strVector;
    int j = 0;
    string last;
    for (int i = 0; i<temp.size(); i++)
    {
//        strVector.push_back(temp[i]);
        if (!isspace(temp[i]))
        {
            j++;
            cout<<temp[i];
            last+=temp[i];
            if (j >= 8)
            {
                cout<<endl;
                j = 0;
                last = "";
            }
            
        }
        
        
    }
    if (last.size()<8)
    {
        for (int m = 0; m<(8-last.size()); m++)
        {
            cout<<"0";
        }
    }
    cout<<endl;
//
//    for(int i=0;i<strVector.size();i++)
//    {
//        cout<<strVector[i]<<endl;
//    }
    return 0;
}
