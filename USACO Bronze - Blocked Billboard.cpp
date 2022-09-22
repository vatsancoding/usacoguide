/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std; 

int overlap(int a1, int a2, int b1, int b2) {
    int distance; 
    int min_end = a2 < b2 ? a2 : b2; 
    int max_start = a1 > b1 ? a1 : b1;
    distance = (min_end - max_start);
    distance = distance < 0 ? -1 * distance : distance;
    return distance; 
}

int main()
{
    
    int x1, y1, x2, y2; 
    int x3, y3, x4, y4; 
    int x5, y5, x6, y6; 
    int b1bx, b1by; 
    int b2bx, b2by; 
    int b1, b2; 
    int answer; 
    cin>>x1>>y1>>x2>>y2; 
    cin>>x3>>y3>>x4>>y4; 
    cin>>x5>>y5>>x6>>y6;
    
    // Compute union of billboard 1 and blocker
    b1bx = overlap(x1, x2, x5, x6); 
    b1by = overlap(y1, y2, y5, y6); 
    
    // Compute union of billboard 2 and blocker
    b2bx = overlap(x5, x6, x3, x4); 
    b2by = overlap(y5, y6, y3, y4); 

    // Compute union area
    b1 = b1bx * b1by; 
    b2 = b2bx * b2by; 
    // Compute intersection area
    answer = (x2 - x1) * (y2 - y1) + (x4 - x3) * (y4 - y3); 
    answer -= b1; 
    answer -= b2; 
    
    // Print answer
    cout<<answer; 
    
    
    
    return 0;
}
