#include<iostream>
using namespace std;
int main ()
{
    int m;
    cin>>m;
    int n=(m+1)/2;
    for( int i=1; i<=n; i++){
        //left star
        for (int j=1; j<=n-i; j++){
            cout<<"* ";
        }
        //spaces
        for (int j=1; j<=2*i; j++){
            cout<<"  ";
        }
        for (int j=1; j<=n-i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for ( int i=n; i>=1; i--){
        //left star
        for (int j=1; j<=n-i; j++){
            cout<<"* ";
        }
        //spaces
        for (int j=1; j<=2*i; j++){
            cout<<"  ";
        }
        for (int j=1; j<=n-i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}