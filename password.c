#include <stdio.h>
#include <string.h>

int hasLowercase(char x[]){
    int i;
    for(i = 0; x[i] != '\0'; i++){
        if(x[i] >= 'a' && x[i] <= 'z'){
            return 1;
        }
    }
    return 0;
}


int hasUppercase(char x[]){
    int i;
    for(i = 0; x[i] != '\0'; i++){
        if(x[i] >= 'A' && x[i] <= 'Z'){
            return 1;
        }
    }
    return 0;
}

int hasDigit(char x[]){
    int i;
    for(i = 0; x[i] != '\0'; i++){
        if(x[i] >= '0' && x[i] <= '9'){
            return 1;
        }
    }
    return 0;
}

int hasSpecialChar(char x[]){
    int i;
    for(i = 0; x[i] != '\0'; i++){
        if(x[i] >= 35 && x[i] <= 38 || x[i] >= 40 && x[i] <= 42 || x[i] == '^' || x[i] == '!' || x[i] == '@'){
            return 1;
        }
    }
    return 0;
}

void evaluateStrength(char x[]){
    int i;
    int totalMarks = 0;
    totalMarks = hasLowercase(x) + hasUppercase(x) + hasDigit(x) + hasSpecialChar(x);
    //bonus mark for password greater than 12 characters
    if(strlen(x) > 12 ){
        totalMarks = totalMarks + 1;
    }
    
    if(totalMarks >= 0 && totalMarks <= 2){
        printf("%s", "Weak\n");
    }
    else if(totalMarks >= 3 && totalMarks <= 4){
        printf("%s","Moderate\n");
    }
    else if(totalMarks == 5){
        printf("%s", "Strong\n");
    }

}

int main(){

    while(1){
        printf("\n");
        printf("Welcome to password resliance analyzer \n");
        printf(" 1.Test a new password \n 2.View strength of last teseted password \n 3.Exit \n");
        printf("Type the number of the corresponding options to procceed: ");

        char buf[100];
        char password[100];
        scanf("%s",buf);
        if(strcmp(buf,"1") == 0){
            // gets rid of \n chracter 
            getchar();
            while(1){
                printf("Please enter a new password: ");
                scanf("%[^\n]",password);
                getchar();
                if(strlen(password) < 8){
                    printf("Password is too short re-enter a longer password \n");
                    break;
                }
                else
                    evaluateStrength(password);
                    break;
                }

        }
        else if(strcmp(buf,"2") == 0){
            printf("View strength of last password: \n");
            evaluateStrength(password);
        }
        else if(strcmp(buf,"3") == 0){
            printf("Exiting... \n");
            break;
        }
        else{
            printf("Invalid input try again \n");
        }
    
    }
    return 0;

}