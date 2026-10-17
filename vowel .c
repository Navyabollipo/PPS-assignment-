#include <stdio.h>
int main() {
    char A;
    printf("enter a letter:");
    scanf("%c",&A);
if(A=='a'||A=='e'||A=='i'||A=='o'||A=='u'||A=='A'||A=='E'||A=='I'||A=='O'||A=='U')
    printf("vowel");
    else
    printf("not an vowel");
}