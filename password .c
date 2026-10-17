#include <stdio.h>
int main() {
    int enteredUserId, enteredPassword;
    int storedUserId = 101;
    int storedPassword = 4321;
    printf("Enter User ID: ");
    scanf("%d", &enteredUserId);
    if (enteredUserId != storedUserId) 
        printf("User not found");
    
    else 
        printf("Enter Password: ");
        scanf("%d", &enteredPassword);
        if (enteredPassword == storedPassword) 
            printf("Login successful");
        else 
            printf("Incorrect password");
}