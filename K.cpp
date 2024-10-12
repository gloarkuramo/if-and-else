#include <iostream>
using namespace std;

int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a-1==c || a+1==c){
        if(b-2==d || b+2==d){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
    else if(a-2==c || a+2==c){
         if(b-1==d || b+1==d){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
    else{
        cout<<"NO";
    }
    return 0;
}