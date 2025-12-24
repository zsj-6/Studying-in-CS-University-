/*#include <stdio.h>
struct Student{
  int *count;
};
int main(){
    int x=10;
struct Student a;
a.count=&x;
scanf("%d",a.count);
    for(int i=0;i<*a.count;++i){
            printf("%d\n",*a.count);
            printf("%d\n",a.count);
    }
 return 0;
}
#include <stdio.h>
#include <stdlib.h>

struct Student{
    char *name;
    double *grades;
    int count;
};
int main(){
    struct Student a;
    int i;
    double sum = 0, max, min;
    a.name = (char*)malloc(50 * sizeof(char));
    scanf("%s", a.name);
    scanf("%d", &a.count);
    a.grades = (double*)malloc(a.count * sizeof(double));
    for(i = 0; i < a.count; i++){
        scanf("%lf", &a.grades[i]);
    }
    max = min = a.grades[0];
    for(i = 0; i < a.count; i++){
        sum += a.grades[i];
        if(a.grades[i] > max) max = a.grades[i];
        if(a.grades[i] < min) min = a.grades[i];
    }
    printf("name: %s\n", a.name);
    printf("average: %.2f\n", sum / a.count);
    printf("Max: %.2f\n", max);
    printf("Min: %.2f\n", min);
    free(a.name);
    free(a.grades);
    return 0;
}*/
/*#include <stdio.h>
#include <stdlib.h>
double*p;
p=(double*)malloc(50*sizeof(double));
scanf("lf",&p[i]);*/
//下面是瞎写的
#include <stdio.h>
#include <stdlib.h>
long long *p;
long long a[12];
p=a;
int n,m;
int main(){
    scanf("%d",&n);
    m=n;
    p=a;
    p=(long long*)malloc(n*sizeof(long long));
    while(m--){
            scanf("%d",p[i]);
    for(int i=0;i<n;++i){
     printf("%d",6);
    printf("%d",*(p+6));
    }
    }
 return 0;
}
