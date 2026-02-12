#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc , string argv[])
{

    if (argc == 2 && strlen(argv[1]) == 26)
    {

        int counts[26] = {0};
        int index = 0;

        for (int i = 0 ; i < 26 ; i++)
        {
            if (!isalpha(argv[1][i]))
            {
            printf("key error");
            return 1;
            }
            argv[1][i] = tolower(argv[1][i]);

            index =  argv[1][i] - 'a';

            if (counts[index]>0)
            {
                printf("key error");
                return 1;
            }
            counts[index] = 1;
            }

            string plain_text = get_string("plaintext: ");

            int n = strlen(plain_text);

            printf("ciphertext:");

            for (int i = 0 ; i < n ; i++)
            {
                if(isupper(plain_text[i]))
                {
                    index = plain_text[i] - 'A';
                    printf("%c", toupper(argv[1][index]));
                }
                else if(islower(plain_text[i]))
                {
                    index = plain_text[i] - 'a';
                    printf("%c", tolower(argv[1][index]));
                }
                else
                {
                    printf("%c" , plain_text[i]);
                }
            }

            return 0 ;
        }

    printf("key error");
    return 1;
}
