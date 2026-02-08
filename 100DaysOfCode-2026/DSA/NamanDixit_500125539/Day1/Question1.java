import java.util.Scanner;

class Question1 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        //Enter array lenght
        int n = sc.nextInt();
        int nums[] = new int[n];
        //Enter elements of the array
        for (int i = 0; i < nums.length; i++) {
            nums[i] = sc.nextInt();
        }
         //replacing
        for(int i=0; i<nums.length;i++){
            if(nums[i]<0){
                nums[i]=0;
            }
        }
        // print array to confirm input
        for (int i = 0; i < nums.length; i++) {
            System.out.print(nums[i] + " ");
        }

        sc.close(); // Always good to close the scanner
    }
}
