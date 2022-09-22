/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int start1, end1; 
    int start2, end2; 
    int min_end; 
    int max_start; 
    int distance; 
    cin>>start1>>end1; 
    cin>>start2>>end2; 
    min_end = end1 < end2 ? end1 : end2; 
    max_start = start1 > start2 ? start1 : start2; 
    distance = (end1 - start1) + (end2 - start2) - (min_end - max_start); 
    cout<<distance;

    return 0;
}