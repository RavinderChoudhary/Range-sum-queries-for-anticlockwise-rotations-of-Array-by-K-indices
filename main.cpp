#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> arr = { 1, 2, 3, 4, 5, 6 };
	vector<vector<int> > query = { 
	    {2, 1, 3}, 
	    {1, 3}, 
	    {2, 0, 3}, 
	    {1, 4}, 
	    {2, 3, 5} 
	};
	int n = arr.size();
	int q = query.size();
	
	for(int i=1;i<n;i++)
	  arr[i] += arr[i-1];
	int i = 0;
	int start = 0;
	while(i < q){
	    if(query[i][0] == 2){
	        int sum = 0;
	        int l = query[i][1] , r = query[i][2];
	        l -= start;
	        r -= start;
	        
	        if(l < 0) l += n;
	        if(r < 0) r += n;
	        if(l <= r){
	            if(l == 0) sum = arr[r];
	            else sum = arr[r] - arr[l-1];
	        }
	        else{
	            sum += arr[n-1] - arr[l-1] + arr[r];
	        }
	        cout<<sum<<endl;
	    }
	    else{
	        start = (start + query[i][1]) % n;
	    }
	    i++;
	}
	return 0;
}
