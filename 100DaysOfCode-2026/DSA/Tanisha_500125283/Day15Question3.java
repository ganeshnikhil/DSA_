// Implement the bubble sort algorithm from scratch to sort an array of integers in ascending 
// order. Bubble sort works by repeatedly stepping through the list, comparing adjacent 
// elements and swapping them if they are in the wrong order. Continue this process until no 
// more swaps are needed.
// Task: Implement bubble sort algorithm from scratch without using built-in sorting 
// functions. 
// Examples Input: [5, 2, 8, 1, 9] 
// Output: [1, 2, 5, 8, 9]

package DSA.Tanisha_500125283;
public class Day15Question3{
    public static void main(String[] args){
        int[] arr={5,2,8,1,9};
        for(int i =0; i<arr.length-1;i++){
            boolean swapped=false;
            for(int j=0; j<arr.length-1-1;j++){
                if(arr[j]>arr[j+1]){
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;

                    swapped=true;

                }
            }
            if(!swapped) break;

        }
         System.out.print("Sorted Array: ");
        for (int num : arr) {
            System.out.print(num + " ");
        }
    }
}