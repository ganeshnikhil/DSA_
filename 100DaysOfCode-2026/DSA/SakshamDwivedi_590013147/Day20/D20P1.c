#include <stdio.h>
#include <string.h>

int size;
struct student{
    char name[50];
    int marks;
};

struct student arr1[100];

int main(){
    printf("Enter the number of students : ");
    scanf("%d", &size);
    getchar();
    for(int i = 0; i < size; i++){
        printf("Enter the name of the student : ");
        fgets(arr1[i].name,50,stdin);
        if(arr1[i].name[strlen(arr1[i].name) - 1] == '\n') {
            arr1[i].name[strlen(arr1[i].name) - 1] = '\0';
        }
        printf("Enter the marks of the student : ");
        scanf("%d", &arr1[i].marks);
        while(getchar() != '\n');
    }

    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - 1 - i; j++){
            if(arr1[j].marks < arr1[j+1].marks){
                struct student temp = arr1[j];
                arr1[j] = arr1[j+1];
                arr1[j+1] = temp;
            }
        }
    }

    for(int i = 0; i < size; i++){
        printf("%s : %d\n", arr1[i].name, arr1[i].marks);
    }

}

