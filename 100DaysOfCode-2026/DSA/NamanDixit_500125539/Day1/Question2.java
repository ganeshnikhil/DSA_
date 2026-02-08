import java.util.Scanner;

class Question2 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        // Enter array length
        int n = sc.nextInt();
        int[] nums = new int[n];

        // Enter array elements
        for (int i = 0; i < n; i++) {
            nums[i] = sc.nextInt();
        }

        // Frequency array to count occurrences
        int[] freq = new int[n + 1];  // Index 1 to n

        for (int i = 0; i < n; i++) {
            freq[nums[i]]++;
        }

        int missing = 0;
        int duplicate = 0;

        for (int i = 1; i <= n; i++) {
            if (freq[i] == 0) {
                missing = i;
            } else if (freq[i] == 2) {
                duplicate = i;
            }
        }

        System.out.println("Missing = " + missing + ", Duplicate = " + duplicate);
        sc.close();
    }
}
