#include<iostream>
using namespace std;
int main(){
    long long int a,b,c;
    cin>>a>>b>>c;
    if( b>a&&b>c&&c>a){
        cout<<a<<' '<<b<<'\n';
    }
    else if(a>b&&a>c&&c>b){
        cout<<b<<' '<<a<<'\n';
    }
    else if(c>b&&c>a&&b>a){
        cout<<a<<' '<<c<<'\n';
    }
    else if(a>b&&a>c&&b>c){
        cout<<c<<' '<<a<<'\n';
    }
    else if(c>b&&c>a&&a>b){
        cout<<b<<' '<<c<<'\n';
    }
    else if(b>a&&b>c&&a>c)
        cout<<c<<' '<<b<<'\n';
    return 0;
}
