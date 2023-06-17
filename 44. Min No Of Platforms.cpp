int calculateMinPatforms(int at[], int dt[], int n) {
    sort(at,at+n);
    sort(dt,dt+n);

    int i=1, j=0;
    int maxi=1;
    int platforms=1;

    while(i<n && j<n){
        if(at[i]<=dt[j]){
            i++;
            platforms++;
        }

        else{
            j++;
            platforms--;
        }
        maxi=max(platforms,maxi);
    }

    return maxi;
}
