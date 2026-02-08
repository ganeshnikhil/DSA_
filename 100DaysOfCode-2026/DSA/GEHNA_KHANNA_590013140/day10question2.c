#include <stdio.h>
#include <string.h>

int main() {
    char input[200];
    char noSpace[200], trimmed[200], singleSpace[200];
    int index, position;

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    for (index = 0; input[index] != '\0'; index++) {
        if (input[index] == '\n') {
            input[index] = '\0';
            break;
        }
    }

    position = 0;
    for (index = 0; input[index] != '\0'; index++) {
        if (input[index] != ' ') {
            noSpace[position++] = input[index];
        }
    }
    noSpace[position] = '\0';

    index = 0;
    while (input[index] == ' ') index++;

    int end = strlen(input) - 1;
    while (input[end] == ' ') end--;

    int trimPos = 0;
    for (int i = index; i <= end; i++) {
        trimmed[trimPos++] = input[i];
    }
    trimmed[trimPos] = '\0';

    index = 0;
    while (input[index] == ' ') index++;

    position = 0;
    while (input[index] != '\0') {
        if (input[index] != ' ') {
            singleSpace[position++] = input[index];
        } else {
            singleSpace[position++] = ' ';
            while (input[index] == ' ') index++;
            index--;
        }
        index++;
    }
    singleSpace[position] = '\0';

    if (position > 0 && singleSpace[position - 1] == ' ') {
        singleSpace[position - 1] = '\0';
    }

    printf("Remove all spaces: \"%s\"\n", noSpace);
    printf("Trimmed: \"%s\"\n", trimmed);
    printf("Single spaces: \"%s\"\n", singleSpace);

    return 0;
}
