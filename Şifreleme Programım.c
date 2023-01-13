#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

char str[100];

printf("Sisteme hosgeldiniz :)\n\n\n\n\n\n");

printf("Lütfen belirlemek istediginiz sifreyi giriniz ==>  ");
gets(str);
str[100];
int i=0,b;
int orta,n;



printf("Vermis olduhgumuz sifrenin %100 güvenligi mecvut degildir.Sadece fikir vermek amacli yapılmistir.\n");
printf("|--------8888------|\n");
printf("|--------8888------|\n");
printf("|--------8888------|\n");
printf("|--------8888------|\n");
printf("|--------8888------|\n");
printf("|--------8888------|\n");
printf("|--------8888------|\n");
printf("|--------8888------|\n");
printf("|--------8888------|\n");
printf("|--------8888------|\n");
printf("|--------8888------|\n");
printf("|--------8888------|\n");
printf("|--------8888------|\n");
printf("|--------8888------|\n");
printf("|--88----8888----88|\n");
printf("|----88--8888--88--|\n");
printf("|-----88-8888-88---|\n");
printf("|-------888888-----|\n");
printf("|--------8888------|\n");
printf("|---------88-------|\n");

while(str[b]!='\0')
{
    b++;
}
if(b%2==0)
{
    orta=(b/2)-1;
}
else
{
    orta=(b/2)+1;
}

for(n=0 ; b<n ;n++)
{
        if(str[n]<str[orta])
        {
           for(i=0 ; str[i]<str[orta] ; i++)
           {
               str[orta+i+1]=str[i];

           }
        }
        else
        {
            for(i=0 ; orta<=str[b] ; i++)
            {
                str[i]=str[b-i-1];
            }
        }

        for(i=0 ; str[i]<=str[b] ; i++)
        {
            printf("Önerdigimiz sifre =>    %c",str[i]);
        }

}







	return 0;
}
