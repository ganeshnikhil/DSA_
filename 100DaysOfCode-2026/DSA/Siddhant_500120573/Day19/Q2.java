public class Q2 {
    
    public static int findPeakElement(int[] nums) {
        int left = 0, right = nums.length - 1;
        
        while (left < right) {
            int mid = left + (right - left) / 2;
            
            if (nums[mid] > nums[mid + 1]) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        
        return left;
    }
    
    public static void main(String[] args) {
        int[] nums = {1, 3, 20, 4, 1, 0};
        
        int peakIndex = findPeakElement(nums);
        System.out.println("Array: [1, 3, 20, 4, 1, 0]");
        System.out.println("Peak element at index: " + peakIndex);
        System.out.println("Peak value: " + nums[peakIndex]);
    }
}