#include <stdio.h>
#include <string.h>
#include <ctype.h>

int checkLogin(char *login, char *passwd) {
if(!strcmp(login,"student1") && !strcmp(passwd, "mypass"))
return 1;
else
return 0;
}

int checkValidPass41(char *ps) {
    int len = strlen(ps);
    int digitCount = 0;

    if (len != 5) return 0;

    for (int i = 0; i < len; i++) {
        if (isdigit(ps[i])) digitCount++;
    }

    return (digitCount >= 1);
}

int main() {
    char login[64], password[64];
    printf("Enter login : "); scanf("%s", login);
    printf("Enter password : "); scanf("%s", password);

    if (checkValidPass41(password)) {
        printf("Password Valid: Welcome\n");
    } else {
        printf("Invalid Password format!\n");
    }
    return 0;
}
