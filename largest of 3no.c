#include <stdio.h>

int main()
{
    int a,b,c;

printf("enter no.1 %d\n",a);
scanf("%d",&a);
printf("enter no.2 %d\n",b);
scanf("%d",&b);
printf("enter no.3 %d\n",c);
scanf("%d",&c);

if(a>b&&a>c){
    printf("a is bigger no.");

}
if(b>c&&b>a){
    printf("b is bigger no.");
}

else{
    printf("c is bigger no.");
}
    
  


    return 0;
}
