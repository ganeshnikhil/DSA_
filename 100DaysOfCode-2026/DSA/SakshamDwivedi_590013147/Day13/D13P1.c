//The reason of using end_point is to overcome the edge case of "  aa bbb cccccc     " ;)
//O(n)
#include <stdio.h>
#include <string.h>


char string[100];
int size;
int count = 0;
int longest_count = 0;
int end_point = 0;
int word_count = 0;

int main(){
    printf("Enter a string (Less than 100 characters) : ");
    fgets(string, 100, stdin);
    if(string[strlen(string) - 1] == '\n'){
        string[strlen(string) - 1] = '\0';
    }
    size = strlen(string);

    int i = 0;
    int in_word = 0;
    for(i = 0; i < size; i++){
        if(string[i] != ' '){
            count++;
            if(in_word == 0){
                word_count++;
                in_word = 1;
            }
        }
        else{
            if(count > longest_count){
                longest_count = count;
                end_point = i;
            }
            count = 0;
            in_word = 0;
        }
    }
    if(count > longest_count){
    longest_count = count;
    end_point = i;
    }

    printf("Longest word : ");
    for(int j = end_point - longest_count; j < size; j++){
        printf("%c", string[j]);
    }
    printf("\n");
    printf("\nTotal words: %d\n", word_count);
}
