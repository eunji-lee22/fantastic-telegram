#include <stdio.h>

int main()
{
    char input[110] = "";
    int count=0;

    scanf("%s", input);

    for (int i = 0; i < 101; i++)
    {
        if(input[i]=='\0') break;

        if(input[i] == 'c' && (input[i+1] == '=' || input[i+1] == '-')){
            
        }else if(input[i] == 'd' && input[i+1] == 'z' && input[i+2] == '='){
            i++;
        }else if(input[i] == 'd' && input[i+1] == '-'){
            
        }else if(input[i] == 'l' && input[i+1] == 'j'){

        }else if(input[i] == 'n' && input[i+1] == 'j'){

        }else if(input[i] == 's' && input[i+1] == '='){

        }else if(input[i] == 'z' && input[i+1] == '='){

        }else
        {
            count++;
        }
        
    }    

    printf("%d", count);

    return 0;
}
