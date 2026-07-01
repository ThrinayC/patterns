#include<iostream>
using namespace std;
void  square(int n)
{
    int x = n ;
    for(int i = 0 ; i < n ; i++)
    {
        for(int j  = 0 ; j < n ; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
void  triangle(int n)
{
    int x = n ;
    for(int i = 0 ; i <=n ; i++)
    {
        for(int j  = 0 ; j < i ; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
void  num_triangle(int n)
{
    int x = n ;
    for(int i = 0 ; i <=n ; i++)
    {
        for(int j  = 1 ; j <=i ; j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
}
void  num_triangle2(int n)
{
    int x = n ;
    for(int i = 0 ; i <=n ; i++)
    {
        for(int j  = 1 ; j <=i ; j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
}
void reverse_triangle(int n)
{
    for ( int i = 0 ; i <=n ; i++)
    {
        for (int j = 0 ; j < n-i+1 ; j++)
    {
        cout<<"*";
    }
    cout<<endl;
    }
}
void pyramid(int n)
{
    for(int i = 0 ; i <= n ; i++){
        for( int j = 0 ; j < n-i ; j++){
            cout<<" ";
        }
        for( int j = 0 ; j <= i ; j++){
            cout<<"*";
        }
        for( int j = 0 ; j < i ; j++){
            cout<<"*";
        }
    cout<<endl;
    }
}
void rev_pyr(int n)
{
    for(int i = 0 ; i<=n; i++){
        for( int j = 0 ; j < i ; j++){
            cout<<" ";
        }
        for( int j = 0 ; j < 2*(n-i)-1 ; j++){
            cout<<"*";
        }
                for( int j = 0 ; j < i ; j++){
            cout<<" ";
        }
    cout<<endl;
    }
}
void rhombus(int n){
    pyramid(n);
    rev_pyr(n);
}

int main(){
    rhombus(5);
    return 0;
}
