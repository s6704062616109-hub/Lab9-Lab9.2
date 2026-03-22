#include <stdio.h>
int checkLogin(char *login, char *passwd) {
if(!strcmp(login,"student1") && !strcmp(passwd, "mypass"))
return 1;
else
return 0;
}
int main() {
char login[64], password[64];
printf("Enter login : "); gets(login);
printf("Enter password : "); gets(password);
if( checkLogin(login, password) == 1) {
printf("Welcome\n");
} else {
printf("Incorrect login or password\n");
}
}
