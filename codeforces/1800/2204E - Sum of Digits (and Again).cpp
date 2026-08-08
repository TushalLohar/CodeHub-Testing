#include <bits/stdc++.h>
using namespace std;

int digit_sum(int n){
    int sum = 0;
    while(n){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main(){
    int t;
    cin >> t;
     while(t--){
        string s;
        cin >> s;

        int n = s.size();
        if(n == 1){
            cout << s << "\n";
            continue;
        }

        int frequenccy[10] = {0};
        int temp = 0;

        for(char c : s){
            frequenccy[c-'0']++;
            temp += c-'0';
        }
        for(int sum_x = 1; sum_x <= temp; sum_x++){

            int again = 0;
            int current = sum_x;

            while(current > 9){
                again += current;
                current = digit_sum(current);
            }
            again += 2 * current;

            if(again != temp) continue;

            string end = "";
            int frequncy_2[10] = {0};

            int c2 = sum_x;

            while(c2 > 9){
                string part = to_string(c2);
                
                for(char c : part){
                    end += c;
                    frequncy_2[c-'0']++;
                }

                c2 = digit_sum(c2);
            }

            end += char('0' + c2);
            frequncy_2[c2]++;

            bool ok = true;

            for(int i = 0; i < 10; i++){
                if(frequncy_2[i] > frequenccy[i]){
                    ok = false;
                    break;
                }
            }

            if(!ok) continue;
            string x = "";
            for(int i = 9; i >= 0; i--){
                int cnt = frequenccy[i] - frequncy_2[i];
                
                while(cnt--){
                    x += char('0' + i);
                }
            }
            cout << x <<end << "\n";
            break;
        }
    }
}