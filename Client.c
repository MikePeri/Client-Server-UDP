#include <sys/types.h>
#include <netinet/in.h>
#include <inttypes.h>
#include <netdb.h>
#include <sys/types.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <inttypes.h>
#include <netdb.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <strings.h>
#include <unistd.h>
#include <stdio.h>
#define BUFFER_SIZE 1024
int main(int argc, char *argv[])
{
  
  int port = atoi(argv[1]);
  int sockfd;
  struct sockaddr_in server_addr;
  char buffer[BUFFER_SIZE];
  socklen_t addr_size;
  sockfd = socket(AF_INET,SOCK_DGRAM,0);
  memset(&server_addr,'\0',sizeof(server_addr));

  server_addr.sin_addr.s_addr=inet_addr("127.0.0.1");
  server_addr.sin_family=AF_INET;
  server_addr.sin_port = htons(port);
  while (1)
  {
      fgets(buffer,BUFFER_SIZE,stdin);
      sendto(sockfd,buffer,BUFFER_SIZE,0,(struct sockaddr*)&server_addr,sizeof(server_addr));
  }//while
  
  printf("[+]Data send: %s",buffer);
  return 0;
}//main