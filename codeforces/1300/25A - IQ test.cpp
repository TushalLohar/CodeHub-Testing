#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int odd =0; int even=0;
    int odd_index=-1; int even_index=-1;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x%2==0){
            even++;
            even_index=i+1;

        }
        else{
            odd++;
            odd_index=i+1;
        }

    }
    if(odd==1){
        cout<<odd_index<<endl;
    }
    else{
        cout<<even_index<<endl;
    }


    return 0;
}