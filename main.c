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
    
    print_arr("a",a,l);
    print_arr("b",b,l);
    printf("average of a: %lf\n",average(a,l));
    arrcpy(a,b,l);
    print_arr("copied a to b", b, l);
    printf("len(\"hello\"): %d\n",len("hello"));

    return 0;
}
