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
#include <cmath>
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
void stringDeal (void)
{
    string temp;
    while (getline(cin,temp))
    {
        string last = "";
        for (int i = 0; i<temp.size(); i++)
        {
            char c = temp[i];
            // 先去掉空格
            if (!isspace(c))
            {
                last+=c;
            }
            
        }
        
        int number = last.size()%8;
        if (number == 0)
        {
            number = 0;
        }
        else
        {
            number = 8 - number;
        }
        
        for (int j = 0; j<number; j++)
        {
            last+='0';
        }
        
        for (int k = 0; k<last.size()/8; k++)
        {
            cout<< last.substr(k*8,8) << endl;
        }
        cout<<endl;
    }
}

void convertHex16 (void)
{
    string temp;
    vector<char> legal = {'1','2','3','4','5','6','7','8','9','0','A','B','C','D','E','F','a','b','c','d','e','f','x','X'};
    while (getline(cin, temp))
    {
        // 先合法
        bool isLegal = true;
        for (int i = 0; i<temp.size(); i++)
        {
            char c = temp[i];
            if (i == 0 && c != '0')
            {
                isLegal = false;
                break;
            }
            
            if (i == 1 && (c!= 'x'))
            {
                isLegal = false;
                break;
            }
            
            if (!count(legal.begin(), legal.end(), c))
            {
                isLegal = false;
                break;
            }
        }
        if (isLegal)
        {
            if (temp.size()>2)
            {
                string numberStr = temp.substr(2);
                long sum = 0;
                long size = numberStr.size();
                for (int i = 0; i<size; i++)
                {
                    char n = numberStr[size - i - 1];
                    int number = 0;
                    if (n == 'a' || n == 'A')
                    {
                        number = 10;
                    }
                    else if (n == 'b' || n == 'B')
                    {
                        number = 11;
                    }
                    else if (n == 'c' || n == 'C')
                    {
                        number = 12;
                    }
                    else if (n == 'd' || n == 'D')
                    {
                        number = 13;
                    }
                    else if (n == 'e' || n == 'E')
                    {
                        number = 14;
                    }
                    else if (n == 'f' || n == 'F')
                    {
                        number = 15;
                    }
                    else
                    {
                        number = (int)n-(int)('0');
                    }
                    sum += number*(pow(16,i));
                    
                }
                cout << sum << endl;
            }
            else
            {
                
            }
            
        }
    }
}


//功能:输入一个正整数，按照从小到大的顺序输出它的所有质因子（重复的也要列举）（如180的质因子为2 2 3 3 5 ）
//最后一个数后面也要有空格
void fprimeNumber (void)
{
    long number;
    while (cin>>number)
    {
        for (int i = 2; i<=sqrt(number); i++)
        {
            while (number%i == 0)
            {
                number /= i;
                cout<< i << ' ';
            }
        }
        if (number>1) cout << number << ' ';
        cout << endl;
    }
}

int roundingOff (float f)
{
    return int(f);
}


//描述
//写出一个程序，接受一个十六进制的数，输出该数值的十进制表示。
//
//输入描述：
//输入一个十六进制的数值字符串。注意：一个用例会同时有多组输入数据，请参考帖子https://www.nowcoder.com/discuss/276处理多组输入的问题。
//
//输出描述：
//输出该数值的十进制字符串。不同组的测试用例用\n隔开。

int main(int argc, const char * argv[]) {
    float i;
    while (cin>>i)
    {
        cout << round(i) <<endl;
    }
    return 0;
}
