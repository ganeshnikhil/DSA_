#include <stdio.h>
#include <string.h>

char string[100];
int size;
char string_f[100];
char rev_s[100];
char sub_s[100];
char result[100];

int main(){
    //Take input
    printf("Enter the string (Less than 100 character): ");
    fgets(string, 100, stdin);
    if(string[strlen(string) - 1] == '\n'){
        string[strlen(string) - 1] = '\0';
    }
    size = strlen(string);

    //Lower case the whole thing
    for(int i = 0; i < size; i++){
        if(string[i] >= 'A' && string[i] <= 'Z'){
            string[i] = string[i] + 32;
        }
        else{
            string[i] = string[i];
        }
    }

    //Remove punctuations and space
    int ind = 0;
    for(int i = 0; i < size; i++){
        if((string[i] >= 'A' && string[i] <= 'Z') || (string[i] >= 'a' && string[i] <= 'z')){
            string_f[ind] = string[i];
            ind++;
        }
    }

    string_f[ind] = '\0';
    int size2 = strlen(string_f);

    int max_len = 0;
    for(int i = 0; i < size2; i++){
        for(int j = i; j < size2; j++){
            int pal = 1;
            for(int k = 0; k <= (j - i) / 2; k++){
                if(string_f[i + k] != string_f[j - k]){
                    pal = 0;
                    break;
                }
            }

            if(pal && (j - i + 1) >= max_len){
                max_len = j - i + 1;
                int res_ind = 0;
                for(int k = i; k <= j; k++){
                    result[res_ind] = string_f[k];
                    res_ind++;
                }
                result[res_ind] = '\0';
            }
        }
    }

    printf("The longest palindrome string : %s\n", result);
}


