class Solution{
  static int majorityElement(int arr[]){
    int n=arr.length;
    Map<Integer, Integer> count = new HashMap<>();
    for(int num:arr){
      count.put(num, count.getOrDefault(num,0)+1);
      if(count.get(num)>n/2){
        return num;
      }
    }
    return -1;
  }
}
