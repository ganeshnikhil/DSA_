public class Day_16_Question_2 {
    public static void main(String[] args) {
        int nums[]={1, 2, 3, 2, 2, 4};
        System.out.println(countOcc(nums, 2));
    }
    public static int countOcc(int nums[],int value){
        int count = 0;
        for(int i =0 ; i < nums.length ; i++){
            if(nums[i] == value){
                count++;
            }
        }
        return count;
    }
}
