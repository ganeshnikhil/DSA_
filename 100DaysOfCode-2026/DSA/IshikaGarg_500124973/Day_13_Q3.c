
// 3. Reverse Words in String
#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "Hello World Programming";
    char *words[100]; int count = 0;
    char *token = strtok(str, " ");
    while (token) { words[count++] = token; token = strtok(NULL, " "); }
    for (int i = count - 1; i >= 0; i--) printf("%s%s", words[i], i > 0 ? " " : "\n");
    return 0;
}
