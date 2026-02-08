public class Q1{
   static int binarySearch(int a[], int l, int r, int x){
        while (l <= r) {
            int m = (l + r) / 2;
            if (a[m] == x) {
                return m;
            } else if (a[m] > x) {
                r = m - 1;
            } else {
              l = m + 1;
            }  
        }
        return -1;
    }

    public static void main(String args[])
    {

        int a[] = { 1,3,5,7,9,11 };
        int n = a.length;
        int x = 7;
      
        int res = binarySearch(a, 0, n - 1, x);

        System.out.println("Element to be searched is : "+ x); 

        if (res == -1)
            System.out.println("Element is not present in array");
        else
            System.out.println("Element is present at index: " + res);
    }
}