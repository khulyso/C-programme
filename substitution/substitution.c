#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[]) 
{
    // chech the command-line argument
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }

    //Validate that the key is only alphabetits
    string key = argv[1];
    for (int i = 0;i < strlen(key);i++)
    {
        if (!isalpha(key[1]))
        {
            printf("Usage: ./substitution key\n");
            return 1;
        }
    }

    //Validate that key consists of 26 characters
    if (strlen(key) != 26)
    {
        printf("Key must contain 26 characters\n");
        return 1;
    }

    //Validate each alphabet in the key is unique
    for ( int i = 0; i < strlen(key);i++)
    {
        for (int j =0; j < strlen(key); j++)
        {
            if (toupper(key[i]) == toupper(j))
            {
                printf("Usage: ./substitution key\n");
                return 1;
            } 
        }
    
    }

    //Prompt user for plaintext
    string plaintext = get_string("plaintext: ");

    //Convert all alphabet to uppercase
    for (int i = 0; i < strlen(key);i++)
    {
        if (islower(key[i]))
        {
            key[i] = key[i] -32;
        }
    }

    //Print the ciphertext
    printf("Ciphrttext: ");

    for (int i = 0; i < strlen(plaintext);i++)
    {
        if (isupper(plaintext[i]))
        {
            int letter = plaintext[i] - 65;
            printf("%c",key[letter]);
        }
        else if (islower(plaintext[i]))
        {
            int letter = plaintext[i] - 97;
            printf("%c",key[letter] + 32);
        }
        else printf("%c",plaintext[i]);
    
    }
    printf("\n");
}