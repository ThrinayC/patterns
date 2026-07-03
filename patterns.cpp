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
void right_triangle(int n){
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j<=i ; j++){
            cout<<"*";
        
        }
    cout<<endl;
    }
    for(int i = 1 ; i < n ; i++ ){
        for(int j = 0 ; j < n-i ; j++){
            cout<<"*";
        }
    cout<<endl;
    }
}
void print11(int n){
    int count = 1 ;
    for(int i = 0 ; i < n ; i++){
        if(i%2 == 0) count = 1;
        else count = 0 ;
        for(int j = 0 ; j <= i ; j++){
            cout<<count;
            count = 1 - count ;
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
void print12(int n){
    for(int i = 1 ; i <=n ; i++){
        for(int j = 1 ; j <= i ; j++){
            cout<<j;
        }
        for(int j = 0 ; j < 2*(n - i); j++){
            cout<<" ";
        }
        for(int j = i ; j >= 1 ; j--){
            cout<<j;
        }
    cout<<endl;
    }
}
void print13(int n){
    int count = 1 ; 
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j<= i ; j++){
            cout<<count<<" ";
            count++;
        }
    cout<<endl;
    }
}
void print14(int n){
    for ( int i = 0 ; i < n ; i++){
        for(char j = 'A' ; j<= 'A' + i ; j++ ){
            cout<<j;
        }
    cout<<endl;
    }
}
void rhombus(int n){
    pyramid(n);
    rev_pyr(n);
}
void right_triangle(int n){
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j<=i ; j++){
            cout<<"*";
        
        }
    cout<<endl;
    }
    for(int i = 1 ; i < n ; i++ ){
        for(int j = 0 ; j < n-i ; j++){
            cout<<"*";
        }
    cout<<endl;
    }
}
void print15(int n){
    for(int i = n ; i >=0 ; i--){
        for (char ch = 'A' ; ch <= 'A' + i ; ch++){
            cout<<ch;
        }
    cout<<endl;
    }
}
void print16(int n){
    char ch = 'A';
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j <=i ; j++){
            cout<<ch;
        }
    cout<<endl;
    ch++;
    }
}
void print17(int n){
    for(int i = 1 ; i <= n ; i++){
        for(int j = 0 ; j < n-i ; j++){
            cout<<" ";
        }
        for(char ch = 'A' ; ch <='A'+ i - 1 ; ch++){
            cout<<ch;
        }
        for(char ch = 'A' + i - 2; ch >='A' ; ch--){
            cout<<ch;
        }
    cout<<endl;
    }
}
void print18(int n){
    for(int i = 0 ; i < n ; i++){
        for(char ch = 'E' - i ; ch <= 'E' ; ch++){
            cout<<ch;
        }
    cout<<endl;
    }
}
void print19(int n){
    for(int i = n ; i > 0 ; i--){
        for(int j = 0 ; j < i ; j++ ){
            cout<<"*";
        }
        for(int j = 0 ; j < 2*(n - i) ; j++){
            cout<<" ";
        }
                for(int j = 0 ; j < i ; j++ ){
            cout<<"*";
        }
    cout<<endl;
    }
    for(int i = 1 ; i <=n ; i++){
        for(int j = 0 ; j < i ; j++){
            cout<<"*";
        }
        for(int j = 0 ; j < 2*(n-i) ; j++){
            cout<<" ";
        }
        for(int j = 0 ; j < i ; j++){
            cout<<"*";
        }
    cout<<endl;
    }
}
void print20(int n){
    for(int i = 1 ; i <= n ; i++){
        for(int j = 0 ; j < i ; j++){
            cout<<"*";
        }
        for(int j = 0; j < 2*(n-i) ; j++){
            cout<<" ";
        }
                for(int j = 0 ; j < i ; j++){
            cout<<"*";
        }
    cout<<endl;
    }
    for(int i = n-1 ; i > 0 ; i--){
        for(int j = 0 ; j < i ; j++){
            cout<<"*";
        }
        for(int j = 0 ; j < 2*(n-i) ; j++){
            cout<<" ";
        }
        for(int j = 0 ; j < i ; j++){
            cout<<"*";
        }     
    cout<<endl;
    }
}
void print21(int n){
    for(int i = 0 ; i < n ; i++){
        for(int j = 1 ; j <=n ; j++){
            if(i == 0 || i == n-1 || j == 1 || j == n ) cout<<"*" ;
            else cout<<" ";
        }
    cout<<endl;
    }
}
void print22(int n){
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            if( i == 0 || i == n-1 || j == 0 || j == n-1)
                cout<<"4";
            else if ( i == 1 || j ==1 || j== n-2 || i==n-2)
                cout<<"3";
            else if ( i == 2 || j == 2 || j== n-3 || i == n-3)
                cout<<"2";
            else cout<<"1";
        }
    cout<<endl;
    }
}
int main(){
    print22(7);
    return 0;
}
