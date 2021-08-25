#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    // ascii binary of message
    string MESSAGE;
    getline(cin, MESSAGE);
    string MES="";
    for(int i=0;i<MESSAGE.size();i++){
        int a=MESSAGE[i];
        for(int j=0;j<7;j++){
            if(a%2) MES='1'+MES;
            else MES='0'+MES;
            a/=2;
        }
    }
    // Check NOrris' encoding
    int N=MES.size();
    char cur=MES[0];
    int i=0;
    int count=0;
    string res="";
    while(i<N+1){
        if(cur==MES[i]){
            count++;
        }
        else{
            cur=='1' ? res+="0 ": res+="00 ";
            for(int k=0;k<count;k++) res+='0';
            res+=' ';
            cur=MES[i];
            count=1;
        }
        i++;
    }
    cout<<res.substr(0,res.size()-1)<<'\n';
    return 0;
}