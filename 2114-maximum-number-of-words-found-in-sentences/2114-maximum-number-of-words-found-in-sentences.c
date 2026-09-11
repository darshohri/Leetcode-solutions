int mostWordsFound(char** sentences, int sentencesSize) { 
    int maxWords = 0; 
    
    for (int i = 0; i < sentencesSize; i++) { 
        int current = 1; 
        
        for (int j = 0; sentences[i][j] != '\0'; j++) { 
            if (sentences[i][j] == ' ') { 
                current++; 
            } 
        } 
        if (current > maxWords) { 
            maxWords = current; 
        } 
    } 
    
    return maxWords; 
}