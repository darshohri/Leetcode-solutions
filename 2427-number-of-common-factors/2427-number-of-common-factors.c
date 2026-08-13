int commonFactors(int a, int b) {
    int count = 0;
    int min_val = (a < b) ? a : b; 
    
    for (int i = 1; i <= min_val; i++) {
        if (a % i == 0 && b % i == 0) {
            count++;
        }
    }
    
    return count;
}
