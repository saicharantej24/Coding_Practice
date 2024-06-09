class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int a[], int n) {
	    
	    int big=-1;
	    int secbig=-1;
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]>big)
	        {   secbig=big;
	          big=a[i];
	        }
	        else if(a[i]>secbig && a[i]!=big)
	        secbig=a[i];
	    }
	    return secbig;
	}
};