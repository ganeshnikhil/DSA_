import java.util.*;
class Question1{

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter array length: ");
        int n= sc.nextInt();

        int arr[]=new int[n];

        System.out.println("Enter array elements: ");

        for(int i=0; i<arr.length; i++){
            arr[i]=sc.nextInt();
        }

    Arrays.sort(arr);
    System.out.println("Print sorted array: ");
    for(int i=0; i<arr.length;i++){
        System.out.print(arr[i]+", ");
    }

    }
}
