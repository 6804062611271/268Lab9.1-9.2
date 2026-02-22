#include <stdio.h>
#include <cstring>
#include <ctype.h>

int checkLogin(char *login, char *passwd);
int checkValidPass(char *ps);

int main() {
    char login[64], password[64];
    printf("Enter login : "); gets(login);
    printf("Enter password : "); gets(password);
    
    if( checkLogin(login, password) == 1) {
        printf("Welcome\n");
    } else {
        printf("Incorrect login or password\n");
    }
    
    if (checkValidPass(password)) {
        printf("Accepted\n");
    } else {
        printf("Reject\n");
    }
    return 0;
}

int checkValidPass(char *ps) {
    int length = strlen(ps);
    int hasDigit = 0;

    if (length != 5) {
        return 0; 
    }

    for (int i = 0; i < length; i++) {
        if (isdigit(ps[i])) {
            hasDigit = 1;
            break;
        }
    }

    return hasDigit; 
}

int checkLogin(char *login, char *passwd) {
    if( !strcmp(login, "student1") && !strcmp(passwd, "mypass"))
        return 1;
    else
        return 0;
}
