#include <stdio.h>
#include <string.h>

int romanCharToInt(char c) 
{
    switch (c) 
    {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}

int romanToInt(const char* s) 
{
    int total = 0;
    int length = strlen(s);

    for (int i = 0; i < length; i++) 
    {
        int current = romanCharToInt(s[i]);
        if (i < length - 1 && current < romanCharToInt(s[i + 1])) 
        {
            total -= current;  
        } 
        else 
        {
            total += current;  
        }
    }

    return total;
}

int main() 
{
    printf("III -> %d\n", romanToInt("III")); 
    return 0;
}