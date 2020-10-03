int sum=0;
        int max_sum=0;
        //int a[4][4]={0};
       for(int i=0;i<(arr.size()-2);i++)
       {
           for(int j=0;j<(arr.size()-2);j++)
           {
               sum=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
              max_sum=max(max_sum,sum);
           }
       }
      return max_sum;
