#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

#include <string.h>

int main()

{

int isSpaceFound=0;

int i=1,len=0;

char str[100];

printf("Enter your String \n ");

gets(str);

len=strlen(str);

if(str[0]>='a' && str[0]<='z')
{
    str[0]=str[0]-'a'+'A';
}

while(i<len)

{

if(str[i]==' '){ isSpaceFound=1;}

else if(str[i]>='a' && str[i]<='z' && isSpaceFound)

{

str[i]=str[i]-'a'+'A';

isSpaceFound=0;

}

i++;

}

printf("%s",str);

return 0;

}
