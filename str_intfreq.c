#include<stdio.h>
#include<string.h>

void count_freq(char* str, int freq[10])
{
    int i = 0;
    while(str[i])  // Loop to end of string
    {
        if (str[i] >= '0' && str[i] <= '9') // Check that the character is in range
        {
            ++freq[str[i]-'0'];  // notice the -'0' to get in range 0..9
        }
        ++i;
    }
}

int main(void) {
    int freq[10] = {0};             // Array to count occurence
    char str[] = "0034364hh324h34"; // Input string

    count_freq(str, freq);          // Calculate frequency

    for (int i=0; i < 10; ++i)      // Print result
    {
        printf("%d: %d\n", i, freq[i]);
    }
    return 0;
}

