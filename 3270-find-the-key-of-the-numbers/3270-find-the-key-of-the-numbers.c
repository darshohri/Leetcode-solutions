int generateKey(int num1, int num2, int num3) {
    int answer = 0;
    int position = 1;
    
    for (int count = 0; count < 4; count = count + 1) {
        int digit1 = num1 % 10;
        int digit2 = num2 % 10;
        int digit3 = num3 % 10;
        
        int smallestDigit = digit1;
        
        if (digit2 < smallestDigit) {
            smallestDigit = digit2;
        }
        if (digit3 < smallestDigit) {
            smallestDigit = digit3;
        }
        
        answer = answer + (smallestDigit * position);
        
        num1 = num1 / 10;
        num2 = num2 / 10;
        num3 = num3 / 10;
        
        position = position * 10;
    }
    
    return answer;
}