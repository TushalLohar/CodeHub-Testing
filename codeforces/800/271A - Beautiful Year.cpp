#include <bits/stdc++.h>
using namespace std;
int main(){
    int y;
    cin>>y;
    int freq[10]={0};// digits can be from 0-9
    for(int i=y+1; i<=9500; i++){
        int freq[10]={0};// digits can be from 0-9
        int year =i;
        while(year>0){
            int digit = year%10;
            freq[digit]++;
            year =year/10;
        }
        int flag=0;
        for(int i =0; i<10; i++){
            if(freq[i]>1){
                flag=1;
                 break;
            }
           
          
        }
        if(flag==0){
            cout<<i;
            break;
        }
        
    }
}