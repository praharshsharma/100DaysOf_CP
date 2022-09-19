// YEH CODE KI KEEMAT TUM KYAA JAANO??
// JAI BHADRAKALI
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define lli long long int
#define pp pop_back
#define mp make_pair
#define umap unordered_map
#define mmap multimap
lli sum_array(int arr[],int n)
{
    lli sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    return sum;
}
int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
             return binarySearch(arr, l, mid - 1, x);
        return binarySearch(arr, mid + 1, r, x);
}	
    return -1;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n , k;

        cin>>n>>k;

        int arr[n];

        for(int i = 0 ; i < n ; i++)
        {
            cin>>arr[i];
        }

        

        vector<long long> v;

        for(int i = 0 ; i < k ; i++)
        {
            int maxx = -1;
            
            for(int j = i ; j < n ; j = j + k)
            {
                maxx = max(maxx , arr[j]);
            }

            v.push_back(maxx);
        }

        long long ans = 0;

        for(int i = 0 ; i < k ; i++)
        {
           // cout<<v[i]<<endl;
            ans += v[i];
        }

        cout<<ans<<endl;
    }
    return 0;
}