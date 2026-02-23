#include <stdio.h>
#include <string.h>

typedef struct {
    char loginname[64];
    char password[64];
} account;

typedef struct {
    char stdID[16];
    char nameSurname[25];
    account stdACC;
} hoststd;

hoststd cs[5] = {
    {"66-040626-2686-9", "MR.A", {"user1", "passwd1"}},
    {"66-040626-2686-8", "MR.B", {"user2", "passwd2"}},
    {"66-040626-2686-7", "MR.C", {"user3", "passwd3"}},
    {"66-040626-2686-6", "MR.D", {"user4", "passwd4"}},
    {"66-040626-2686-5", "MR.E", {"user5", "passwd5"}}
};

void check(char name[], char pass[]) {
	int i;
    for (i=0;i<5;i++) {
        if (strcmp(name, cs[i].stdACC.loginname) == 0 &&
            strcmp(pass, cs[i].stdACC.password) == 0) {
            printf("Welcome\n");
            return;
        }
    }
    printf("Incorrect login or password\n");
}

int main() {
    char username[64];
    char password[64];

    scanf("%s",username);
    scanf("%s",password);

    check(username,password);
}
