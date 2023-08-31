 for (int i = 0; i < n; i++)
    {
        int index = arr[i] % n;
        arr[index] += n;
    }
 
    // Now check which value exists more
    // than once by dividing with the size
    // of array
    for (int i = 0; i < n; i++)
    {
        if ((arr[i] / n) >= 2)
            cout << i << " ";
    }
