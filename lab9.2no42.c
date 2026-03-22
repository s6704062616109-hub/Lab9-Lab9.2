#include <stdio.h>
#include <string.h>
#include <ctype.h>

int checkValidPass42(char *ps) {
    int len = strlen(ps);
    int upperCount = 0, digitCount = 0;

    if (len < 5 || len > 8) return 0;
    if (isdigit(ps[0])) return 0;

    for (int i = 0; i < len; i++) {
        if (isupper(ps[i])) upperCount++;
        if (isdigit(ps[i])) digitCount++;
    }

    return (upperCount >= 2 && digitCount >= 2);
}

int main() {
    char login[64], password[64];
    printf("Enter login : "); scanf("%s", login);
    printf("Enter password : "); scanf("%s", password);

    if (checkValidPass42(password)) {
        printf("Password Valid: Welcome\n");
    } else {
        printf("Invalid Password format!\n");
    }
    return 0;
}
