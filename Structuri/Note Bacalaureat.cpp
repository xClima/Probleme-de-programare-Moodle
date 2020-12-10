#include <stdio.h>
struct studenti{
char n[128];
char m[128];
float a,b,c,d;
};
int main(){
int n,i;
struct studenti s[n];
scanf("%d", &n);
for(i=0;i<=n;i++){
scanf("%s%s%f%f%f%f",&s[i].n,&s[i].m,&s[i].a,&s[i].b,&s[i].c,&s[i].d);
}
for(i=n;i>-1;i--){
float m=(s[i].a+s[i].b+s[i].c+s[i].d)/4;
if(s[i].a>5&&s[i].b>5&&s[i].c>5&&s[i].d>5&&m>=6){
printf("%s %s %.2f\n",s[i].n,s[i].m,m);
}
}
return 0;
}