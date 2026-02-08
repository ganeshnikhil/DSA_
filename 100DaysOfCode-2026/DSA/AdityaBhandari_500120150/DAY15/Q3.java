public class Q3 {
    public static void sortColors(int[] nums) {
        int n=nums.length;
        int temp;
        boolean flag;
        for (int i=0;i<n-1;i++) {
            flag=false;
            for (int j=0;j<n-i-1;j++) {
                if (nums[j] >nums[j + 1]) {
                    temp = nums[j];
                    nums[j] =nums[j + 1];
                    nums[j + 1] = temp;
                    flag=true;
                }
            }
            if (flag==false)
                break;
        }
    }

    public static void main(String[] args) {
        int[] a = { 5,2,8,1,9 };
        sortColors(a);
        for(int i=0;i<a.length;i++){
            System.out.print(a[i]);
        }

        System.out.println();
        int[] b = { 3,7,4,1,6,2 };
        sortColors(b);
        for(int i=0;i<b.length;i++){
            System.out.print(b[i]);
        }


    }
}