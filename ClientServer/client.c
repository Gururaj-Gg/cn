#include<stdio.h>
#include<fcntl.h>
#include<arpa/inet.h>
#include<unistd.h>
int main()
{
char fname[50],buffer[1024];
int s,n;
struct sockaddr_in address;
address.sin_family=AF_INET;
address.sin_port=htons(1500);
address.sin_addr.s_addr=INADDR_ANY;
if((s=socket(AF_INET,SOCK_STREAM,0))<0)
perror("socket not created\t");
connect(s,(struct sockaddr*)&address,sizeof(address));
printf("enter the filename\t");
scanf("%s",fname);
printf("sending request\t");
send(s,fname,sizeof(fname),0);
while((n=recv(s,buffer,sizeof(buffer),0))>0)
printf("recived response");
printf("display %s",buffer);
return 0;
}
