char* convertToTitle(int columnNumber) 
{
    char temp[32];
    int len = 0;
    
    while (columnNumber > 0) 
    {
        columnNumber--; 
        temp[len++] = 'A' + (columnNumber % 26);
        columnNumber /= 26;
    }

    char* result = (char*)malloc((len + 1) * sizeof(char));

    for (int i = 0; i < len; i++) 
    {
        result[i] = temp[len - 1 - i];
    }
    result[len] = '\0';
    
    return result;
}