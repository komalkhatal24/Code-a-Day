/*Input Format
Input consists of the following space-separated values: int, long, char, float, and double, respectively.
Output Format
Print each element on a new line in the same order it was received as input. Note that the floating point value should be correct up to 3 decimal places and the double to 9 decimal places.
Sample Input
3 12345678912345 a 334.23 14049.30493
Sample Output
3
12345678912345
a
334.230
14049.304930000*/
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    
    int a;
    long b;
    char c;
    float d;
    double e;
    cin>>a>>b>>c>>d>>e;
    printf("%d\n%ld\n%c\n%0.3f\n%0.9lf\n",*&a,*&b,*&c,*&d,*&e);
    return 0;
}