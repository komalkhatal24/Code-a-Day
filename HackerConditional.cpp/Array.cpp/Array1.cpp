/*Input Format
The first line of the input contains N, where N is the number of integers.The next line contains N space-separated integers.
Constraints
1 N 1000
1 <= A[i] <= 10000, where A[i] is the ith integer in the array.
Output Format
Print the N integers of the array in the reverse order, space-separated on a single line.
Sample Input
4
1432
Sample Output
2341*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=n-1;i>=0;i--){
        cout<<arr[i];
    }
}