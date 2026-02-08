1- The variable max is declared but not initialized before being used in the comparison

2-If max holds a random large number (e.g., 1,000,000), no array element will be greater than it, so the function will return the initial garbage value.

3- int findMax(int arr[], int n) 
{
    int max = arr[0]; // ✅ Correct initialization

    for (int i = 1; i < n; i++) 
    {
        if (arr[i] > max) 
        {
            max = arr[i];
        }
    }

    return max;
}
