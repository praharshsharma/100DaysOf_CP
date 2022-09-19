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
        int n , x , y;
        cin>>n>>x>>y;

        if(x!=0 and y!=0)
        {
            cout<<-1<<endl;
        }
        else
        if(x == 0 and y == 0)
        {
            cout<<-1<<endl;
        }
        else
        {

        

        int k = max(x,y);

        if((n-1)%k == 0)
        {
            int count = 0;

            int j = 1;
            
            for(int i = 1 ; i < n ; i++)
            {
                if(count!=k)
                {
                    cout<<j<<" ";
                    count++;
                }
                else
                {
                    j = i+1;
                    cout<<j<<" ";
                    count = 1;
                }

            }

            cout<<endl;
        }
        else cout<<-1<<endl;


        }
    }
    return 0;
}