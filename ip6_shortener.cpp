#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include<bits/stdc++.h>

using namespace std;


int main()
{
    string ip;
    getline(cin, ip);
    // finding longest substring of 0's ----------------------
    int longest=-1, length=0;
    int n=ip.size();
    bool prev_zero=0;
    vector<pair<int,int>> arr;
    for(int i=0;i<8;i++){
        int zero_block=1;
        for(int j=0;j<4;j++){
            if(ip[i*5+j]!='0') zero_block=0;
        }

        if(zero_block){
            if(prev_zero) length++;
            else{
                arr.push_back(make_pair(length,longest));
                length=1;
                longest=i;
                prev_zero=1;
            }
        }
        else prev_zero=0;
    }
    arr.push_back(make_pair(length,longest));
    sort(arr.begin(),arr.end());
    length=arr[arr.size()-1].first;
    longest=arr[arr.size()-1].second;

    // building result string --------------------------
    string str="";
    int i=0;
    while(i<8){
        if(i==longest && length>1){
            if(str[str.size()-1]==':') str+=':';
            else str+="::";
            i=longest+length;
        }
        int zero_block=1;
        for(int j=0;j<4;j++){
            if(ip[5*i+j]!='0') zero_block=0;
        }
        if(zero_block){
            str+="0:";
        }
        else{
            // removing 0s from the left
            int flag=0; // non-zero char;
            for(int j=0;j<4;j++){
                if(ip[5*i+j]=='0' && !flag){
                    continue;
                }
                else flag=1;
                if(flag)
                str+=ip[5*i+j];
            }
            str+=':';
        }
        i++;
    }
    cout << str.substr(0,str.size()-1) << endl;
    return 0;
}
/*
2001:0000:3c4d:0015:0000:0000:0db8:1a2b
0000:0000:0000:0000:0000:0000:0000:00dc
*/