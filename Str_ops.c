#include <stdio.h>


// int main(){s
//     int var = 20;
//     int *ip;
//     ip = &var;
//     printf("Address of var varianle: %x \n", &var);
//     printf("Address stored im the ip variable: %x \n", *ip);
//     printf("value of ipvariable %d \n",*ip);
// }


int length_without_pointers();
int length_with_pointers();
int copy_without_pointers();
int copy_with_pointer();
void copy_string(char* target, char* source);

int main(){
    
    // length_without_pointers();
    // length_with_pointers();
    // copy_without_pointers();
    copy_with_pointer();
}



// length without pointers

int length_without_pointers(){
    char name[] = "Haazique Sayyed";
    int i;
    for (i = 0; name[i]!='\0'; i++ ){
    }
    printf("Length of the string is: %d", i);
    return 0;
}

// length with pointers

int length_with_pointers(){
    char str[20], *pt;
    int i = 0;
    printf("\n Enter any string: ");
    gets(str);
    pt = str;
    
    while(*pt!='\0'){
        i++;
        pt++;
    }
    printf("\n length of string = %d", i);
    
    return 0;
    
}



int copy_without_pointers(){
    
    char s1[100], s2[100];
    int i;
    printf("Enter string s1: ");
    fgets(s1, sizeof(s1), stdin);
    
    for (i = 0; s1[i]!='\0'; i++){
        s2[i] = s1[i];
    }
    printf("%d", i);
    s2[i] = '\0';
    
    printf("String S2: %s", s2);
    return 0;
    
}


int copy_with_pointer(){
    char source[100], target[100];
    printf("Enter the string: ");
    gets(source);
    
    copy_string(target, source);
    printf("Target string is: %s \n");
    
    return 0;
}


void copy_string(char* target, char* source){
    
    while(*source){
        *target = *source;
        source++;
        target++;
    }
    *target = '\0';
    
}

