/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
// Zero Overlap - Complete cover
// Complete Overlap - Zero cover 
// Biaxial Partial Overlap - Complete cover 
// Horizontal Complete Axial Overlap - 
// Vertical Complete Axial Overlap - 
int overlap(int s1, int e1, int s2, int e2) {
    int min_e, max_s;
    if(e1 < e2) {
        min_e = e1; 
    }
    else {
        min_e = e2; 
    }
    if(s1 > s2) {
        max_s = s1; 
    }
    else {
        max_s = s2; 
    }
    return min_e - max_s; 
}

int main()
{
    int gx1, gy1, gx2, gy2; 
    int bx1, by1, bx2, by2; 
    cin>>gx1>>gy1>>gx2>>gy2; 
    cin>>bx1>>by1>>bx2>>by2; 
    int xol = overlap(gx1, gx2, bx1, bx2); 
    int yol = overlap(gy1, gy2, by1, by2); 
    int tarp; 
    int width = gx2 - gx1; 
    int height = gy2 - gy1; 
    if(xol == 0 && yol == 0) {
        // Zero cover 
        tarp = width * height; 
    }
    else if (xol == width && yol == height) {
        // Complete overlap 
        tarp = 0 ; 
    }
    else if(xol < width && yol < height) {
        tarp = width * height; 
    }
    else if (xol == width && yol < height) {
        tarp = width * (height - yol); 
    }
    else if (xol < width && yol == height) {
        tarp = height * (width - xol); 
    }
    
    cout<<tarp<<endl; 

    return 0;
}
