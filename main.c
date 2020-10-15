#include <string.h>
#include <stdio.h>

double average(int *a, int l) {
    double sum = 0;
    int i;
    for(i = 0; i < l; i++) {
        sum += a[i];
    }
    return sum/l;
}

void arrcpy(int *a, int *b,int l) {
    int i;
    for(i = 0; i < l; i++) {
        b[i] = a[i];
    }
}

int len(char *s) {
    char *sp = s;
    while(*sp) {
        sp++;
    }
    return sp - s;

}
void print_arr(char *name, int *a, int l) {
    int i;
    printf("%s: ",name);
    for(i = 0; i < l; i++) {
        printf("%d ",a[i]);
    }
    printf("\n");

}
int main() {
    //testing functions
    int l = 3;
    int a[l];
    a[0] = 1;
    a[1] = 2;
    a[2] = 3;
    int b[l];

    //made functions
    print_arr("a",a,l);
    print_arr("b",b,l);
    printf("average of a: %lf\n",average(a,l));
    arrcpy(a,b,l);
    print_arr("copied a to b", b, l);
    printf("len(\"hello\"): %d\n",len("hello"));

    //library functions
    char s2[7];
    char s1[6] = "steve";
    printf("s1: %s\n",s1);
    printf("s2: %s\n",s2);
    strcpy(s2,s1);
    printf("copy s1 to s2: %s\n",s2);
    strcat(s2,"a");
    printf("add a to s2: %s\n",s2);
    if(strcmp(s2,s1) > 0) {
        printf("s2 is greater than s1\n");
    } else {
        printf("s2 is less than or equal to s1\n");
    }
    printf("the first t in s2 is at position: %ld\n",strchr(s2,'t')-s2);
    //I don't know why strchr is listed twice so I will use it twice I guess?
    printf("the first a in s2 is at position: %ld\n",strchr(s2,'a')-s2);

    return 0;
}
