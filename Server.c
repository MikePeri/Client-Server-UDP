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

#define BUFFER_SIZE 1024
int main(int argc, char *argv[])
{
  
  int port = atoi(argv[1]);
  int sockfd;
  struct sockaddr_in server_addr,client_addr;
  char buffer[BUFFER_SIZE];
  socklen_t addr_size;
  sockfd = socket(AF_INET,SOCK_DGRAM,0);
  memset(&server_addr,'\0',sizeof(server_addr));

  server_addr.sin_addr.s_addr=inet_addr("127.0.0.1");
  server_addr.sin_family=AF_INET;
  server_addr.sin_port = htons(port);

  bind(sockfd,(struct sockaddr*)&server_addr,sizeof(server_addr));

  addr_size = sizeof(client_addr);
  while(1)
  {
      recvfrom(sockfd,buffer,BUFFER_SIZE,0,(struct sockaddr*)&client_addr,&addr_size);
      printf("[+]Data receive: %s\n",buffer);

      sendto(sockfd,"Accepted.",10,0,(struct sockaddr*)&client_addr,&addr_size);
  }//while
  

  return 0;
}

