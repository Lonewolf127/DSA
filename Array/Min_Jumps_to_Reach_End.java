class Solution{
  public int minJumps(int arr[]){
    if(arr.length<=1)
      return 0;
    if(arr[0]==0)
      return -1;
    int maxReach=arr[0];
    int remaining_steps=arr[0];
    int jumps=1;
    for(int i=1;i<arr.length;i++){
      if(i==arr.length-1){
        return jump;
      }
      if(arr[i]>=((arr.length-1)-i){
        return jump+1;
      }
      maxReach=Math.max(maxReach,i+arr[i]);
      remaining_steps--;
      if(step==0){
        jump++;
        if(i>=maxReach){
          return -1;
        }
        remaining_steps=maxReach-i;
      }
    }
    return -1;    
}
  
