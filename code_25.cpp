bool find3Numbers(int arr[], int N, int X)
{

    sort(arr,arr+N);
    for(int j=N-1;j>=2;j--)
    {
        int i=0,k=j-1;
        while(i<k)
        {
            if(arr[i]+arr[k]+arr[j]==X)
            {
                return true;
            }
            else if(arr[i]+arr[k]+arr[j]>X)
            {
                k--;
            }
            else
            {
                i++;
            }
        }
    }
    return false;
}
