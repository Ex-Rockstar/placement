    int fib(int n) {
        if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }

    // Recursive case: F(n) = F(n-1) + F(n-2)
    return fib(n - 1) + fib(n - 2);
        
    }