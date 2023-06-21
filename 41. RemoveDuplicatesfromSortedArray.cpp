int removeDuplicates(vector<int> &arr, int n) {
	
	int temp=arr[0];
	int len=1;

	for(int i=1;i<n;i++){
		if(arr[i]!=temp){
			arr[len++]=arr[i];
			temp=arr[i];
		}

	}

	return len;
}
