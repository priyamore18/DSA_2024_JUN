int pivotIndex(vector<int>& arr, int n) {
    int start = 0;
    int end = n - 1;
    while (start < end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] > arr[0]) {
            start = mid + 1;
        } else {
            end = mid;
        }
    }
    return start;
}

int binary(vector<int>& arr, int start, int end, int k) {
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == k) {
            return mid;
        } else if (arr[mid] > k) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return -1;
}

 
int search(vector<int>& arr, int n, int k)
{
  int pivot=pivotIndex(arr,n);
  if(k>=arr[pivot]&& k<=arr[n-1]) {
     
      return binary(arr,pivot,n-1,k);

  }else{
      return binary(arr,0,pivot-1,k);

  }
    

}

