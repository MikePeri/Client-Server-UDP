 # -*- MakeFile -*-

all: client server 
client: Client.c
	gcc client.c -o client.out
server: server.c
	gcc Server.c -o server.out
clean:
	rm -f *.out
.PHONY: clean all