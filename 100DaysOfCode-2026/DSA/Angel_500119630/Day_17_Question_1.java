public class Day_17_Question_1 {
    public static void main(String[] args) {
        int num[]= {1, 3, 5, 7, 9, 11};
        System.out.println(binSearch(num,7));
    }
    public static int binSearch(int nums[],int val){
        int low = 0 ;
        int high = nums.length-1;

        while(low <= high){
            int mid =  (left+right)/2;

            if(nums[mid] == val ){
                return mid;
            }
            else if(nums[mid] < val){
                left = mid +1;
            }
            else {
                right = mid - 1;
            }

        }
        return 0;
    }
}
