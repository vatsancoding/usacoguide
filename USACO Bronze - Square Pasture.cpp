/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
int max(int a, int b, int c, int d) {
    if(a > b && a > c && a > d) {
        return a; 
    }
    else if(b > a && b > c && b > d){
        return b; 
    }
    else if(c > a && c > b && c > d) {
        return c; 
    }
    else {
        return d; 
    }
}



int min(int a, int b, int c, int d) {
    if(a < b && a < c && a < d) {
        return a; 
    }
    else if(b < a && b < c && b < d){
        return b; 
    }
    else if(c < a && c < b && c < d) {
        return c; 
    }
    else {
        return d; 
    }
}






int main()
{
    int ax1, ay1, ax2, ay2; 
    int bx1, by1, bx2, by2; 
    int width, length, side, area; 
    cin>>ax1>>ay1>>ax2>>ay2; 
    cin>>bx1>>by1>>bx2>>by2;
    width = max(ax1, ax2, bx1, bx2) - min(ax1, ax2, bx1, bx2); 
    length = max(ay1, ay2, by1, by2) - min(ay1, ay2, by1, by2); 
    if(width > length) {
        area = width * width; 
    }
    else {
        area = length * length; 
    }
    cout<<area<<endl; 
    return 0;
}