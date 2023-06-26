#include <bits/stdc++.h> 


bool isPossible(int n, int m, vector<int>&arr, long long mid){
	long long int days=1;
	long long int timesum=0;

	for(int i=0;i<m;i++){
		if(timesum+arr[i]<=mid){
			timesum+=arr[i];
		}
		else{
			days++;
			if(days>n || arr[i]>mid){
				return false;
			}
			else{
				timesum=arr[i];
			}
		}

	}
	
	return true;
}



long long ayushGivesNinjatest(int n, int m, vector<int> time) 
{	
	long long low=0;
	long long high=0;
	long long ans=-1;

	for(int i=0;i<time.size();i++){
		high+=time[i];
	}

	while(low<=high){
		long long mid=low+(high-low)/2;

		if(isPossible(n,m,time,mid)){
			ans=mid;
			high=mid-1;
		}

		else{
			low=mid+1;
		}
	}

	return ans;
}
