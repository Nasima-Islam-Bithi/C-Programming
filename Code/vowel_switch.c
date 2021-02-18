//A program to check vowel using switch case

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character:\n");
    scanf("%c",&ch);
    switch(ch)
    {
    case 'A':
        case 'a':
            case 'E':
                case 'e':
                    case 'I':
                        case 'i':
                            case 'o':
                                case 'O':
                                    case 'U':
                                        case 'u':
                                            printf("%c is a vowel.\n",ch);
                                            break;
                                        default:
                                            printf("%c is not a vowel.\n",ch);


    }
}
