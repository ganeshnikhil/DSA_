import java.util.*;
class Day20Question1
{
    public static void display(String name[], int mks[], int n)
    {
        System.out.println("\nSorted list:");
        for (int i = 0; i < n; i++)
        {
            System.out.println(name[i] + " - " + mks[i]);
        }
    }

    public static void sort(String name[], int mks[], int n)
    {
        int i, j, temp;
        String tempN;
        for (i = 0; i < n - 1; i++) 
        {
            for (j = 0; j < n - i - 1; j++)
            {
                if (mks[j] < mks[j + 1]) 
                {
                    // Marks swap
                    temp = mks[j];
                    mks[j] = mks[j + 1];
                    mks[j + 1] = temp;

                    // Name swap to keep it aligned with the marks
                    tempN = name[j];
                    name[j] = name[j + 1];
                    name[j + 1] = tempN;
                }
            }
        } 
    }

    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter total number of students: ");
        int n = sc.nextInt();
        String name[] = new String[n];
        int marks[] = new int[n];
        int i;
        for(i=0; i<n; i++)
        {
            System.out.println("Enter name of student number " + (i+1) + ": " );
            name[i] = sc.next();
            System.out.println("Enter marks of student number " + (i+1) + ": ");
            marks[i] = sc.nextInt();
        }

        sort(name, marks, n);
        display(name, marks, n);
    }
}