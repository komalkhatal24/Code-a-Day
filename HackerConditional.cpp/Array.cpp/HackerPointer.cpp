/*//Pointer hacker rank
The input will contain two integers, a and b, separated by a newline.
Sample Input
4
5
Sample Output
9
1
*/

#include <stdio.h>
void update(int *a,int *b) {
    // Complete this function   
  int temp=*a;
  *a=*a+*b;
  *b=temp -*b;
  if(*b<0){
      *b=-(*b);
  }
}
int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d\n", a, b);

    return 0;
}