//
//  main.cpp
//  huawei
//
//  Created by 吴四军 on 5/25/21.
//  Copyright © 2021 vincent. All rights reserved.
//

#include <iostream>
#include </usr/local/include/bits/stdc++.h>

using namespace std;
bool subLegal(long val)
{
    if ((val & 1) == 1) return false;
    int flag = 0;
    long tmp = 1;
    int times = 32;
    while (times--)
    {
        if ((val & tmp) && (flag == 0))
        {
            flag = 1;
        }
        else if (((val & tmp) == 0) && flag == 1)
        {
            return false;
        }
        tmp <<= 1;
    }
    if (flag == 0) return false;
    return true;
}

bool isLegal(string a)
{
    cout << a <<endl;
    char tmp[101];
    strcpy(tmp, a.c_str());
    char *s = strtok(tmp, ".");
    int count = 0;
    while (s)
    {
        if (++count > 4) return false;
        for (int i = 0; i < strlen(s); i++)
        {
            if (s[i] < '0' || s[i] > '9') return false;
        }
        if (strlen(s) > 3 || strlen(s) == 0) return false;
        int val = atoi(s);
        if (val < 0 || val > 255) return false;
        s = strtok(NULL, ".");
    }
    if (count < 4) return false;
    return true;
}

long binary(string a)
{
    char tmp[101];
    strcpy(tmp, a.c_str());
    long ret = 0;
    int weight = 1 * pow(256, 3);
    char *s = strtok(tmp, ".");
    while (s)
    {
        ret += atoi(s) * weight;
        weight /= 256;
        s = strtok(NULL, ".");
    }
    return ret;
}

int main()
{
    string s1, s2, s3;
    while (cin >> s1)
    {
        cin >> s2 >> s3;
        if (!isLegal(s1) || !isLegal(s2) || !isLegal(s3) || !subLegal(binary(s1)))
        {
            cout << 1 << endl;
            continue;
        }
        if ((binary(s1) & binary(s2)) == (binary(s1) & binary(s3)))
        {
            cout << 0 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }
}
