// Problem Statement: Write a function that searches for a specific target element in an array and returns its index 
// position. Use the linear search method, which means checking each element one by one 
// from the beginning until you find the target or reach the end of the array. If the target element 
// is found, return its index (starting from 0). If the element is not present in the array, return -1 
// to indicate that the search was unsuccessful. 
// Task: Implement linear search to find target element's index position. 
// Examples  Input: Array: [10, 20, 30, 40, 50], Target: 30 
// Output:  2

package DSA.Tanisha_500125283;
public class Day16Question1 {
    public static int linearSearch(int[] arr, int target){
        for(int i=0;i<arr.length;i++){
            if( arr[i]==target){
                return i;          
              }
            }
             return -1;
        }
   
    public static void main(String[] args){
        int[] arr={10, 20, 30, 40, 50};
        int target=30;
        int result = linearSearch(arr, target);
        System.out.println(result);
    }
    
}
