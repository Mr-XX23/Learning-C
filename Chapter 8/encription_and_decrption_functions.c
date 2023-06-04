 #include<stdio.h>
 #include<string.h>
 #include<conio.h>

void encrypt(char *pass) {
    while (*pass != '\0' )
    {
        *pass = *pass + (*pass +1);
        // *pass = *pass + 1;
        pass++;
    }
}

void decrypt(char *dpass) {
    while (*dpass != '\0' )
    {
        *dpass = *dpass - (*dpass - 1);
        // *dpass = *dpass - 1;
        dpass++;
    }
}

int main() {
    char password[10];
    printf("Enter the Password\n");
    gets(password);

    encrypt(password);
    printf("Encrypted Password is : %s\n", password);
    decrypt(password);
    printf("Decrypted Password is :%s\n", password);

}