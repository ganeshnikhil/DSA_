// A problem that demonstrates divide-and-conquer optimization techniques and teaches 
// efficient local maximum finding without exhaustive searching. 
// A peak element in an array is an element that is greater than both of its neighbors. For 
// elements at the edges of the array, they only need to be greater than their single neighbor. 
// Find the index of any peak element in the given array. The array may contain multiple 
// peaks, so returning the index of any one of them is acceptable. Try to solve this more 
// efficiently than checking every element using binary search approach.
// Task: Find any peak element's index using efficient divide-and-conquer approach. 
// Examples Input: [1, 3, 20, 4, 1, 0] 
// Output: 2


package DSA.Tanisha_500125283;

public class Day19Question2 {

    public static int findPeakElement(int[] nums) {
        int left = 0, right = nums.length - 1;

        while (left < right) {
            int mid = (left + right) / 2;

            if (nums[mid] > nums[mid + 1]) {
                
                right = mid;
            } else {
                
                left = mid + 1;
            }
        }

        
        return left;
    }

    public static void main(String[] args) {
        System.out.println(findPeakElement(new int[]{1, 3, 20, 4, 1, 0}));   
    }
}
