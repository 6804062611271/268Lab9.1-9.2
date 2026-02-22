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
    int len = strlen(ps);
    int upperCount = 0;
    int digitCount = 0;
    int seenUpper[26] = {0};

    if (len < 5 || len > 8) {
        return 0;
    }

    for (int i = 0; i < len; i++) {
        if (isupper(ps[i])) {
            int index = ps[i] - 'A';
            if (seenUpper[index] == 1) {
                return 0; 
            }
            seenUpper[index] = 1; 
            upperCount++;
        }
        
        if (isdigit(ps[i])) {
            digitCount++;
        }
    }

    if (upperCount >= 2 && digitCount >= 2) {
        return 1;
    }
    return 0;
}

int checkLogin(char *login, char *passwd) {
    if(!strcmp(login, "student1") && !strcmp(passwd, "mypass"))
        return 1;
    else
        return 0;
}
