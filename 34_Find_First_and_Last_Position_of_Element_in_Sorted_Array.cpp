 #include<bits/stdc++.h>
 using namespace std;

 int firstOccurance(vector<int>&v, int n, int k){
    int low = 0,high = n - 1;
    int first = -1;
    while(low <= high)
    {
         int mid = (low + high) / 2;
         if(v[mid] == k)
         {
            first = mid;
            high = mid - 1;
         }
         else if(v[mid] < k) low = mid + 1;
         else 
         high = mid - 1;
    }
   return first;
 }
int lastOccurance(vector<int>&v, int n, int k){
    int low = 0, high = n - 1;
    int last = -1;
    while(low <= high){
        int mid = (low + high)/2;
        if(v[mid] == k){
            last = mid;
            low = mid + 1;
        }
        else if(v[mid] < k) low = mid + 1;
        else 
        high = mid - 1;
    }
    return last;
}
 
int main()
{
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    int k;
    cin >> k;

   int l = firstOccurance(v,n,k);
   int r = lastOccurance(v,n,k);
   cout << l <<" " << r<<endl;

}