#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int f)
{
	long int n=arr.size();
    long int SN=(n*(n+1))/2; 
    long int SN2=((n*(n+1))*(2*n+1))/6;
    long int s=0, s2=0;

    for(int i=0;i<n;i++){
        s=s+arr[i];
        s2=s2+(arr[i]*arr[i]);
    }

int val1=s-SN;
int val2=s2-SN2;

val2=val2/val1;
int x=(val1+val2)/2;
int y=x-val1;

return make_pair(y,x);

}
