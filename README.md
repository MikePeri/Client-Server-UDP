# Client-Server-UDP
Simple client-server UDP implementation.<br />
For running the progrma:<br />
-Open two terminals.<br />
-Run "make" in one of them.<br />
-Run ./server.out <port> in the first terminal.<br />
-Run ./client.out <port> in the second terminal.<br />
Then you should see at server terminal "[+]Data receive: Hello server from client."<br />
  
## Theory:
In UDP, the client does not form a connection with the server like in TCP and instead just sends a datagram. <br />
Similarly, the server need not accept a connection and just waits for datagrams to arrive. <br />
Datagrams upon arrival contain the address of sender which the server uses to send data to the correct client.<br />
UDP Client/Server function calls.<br />

## The entire process can be broken down into following steps :
### UDP Server :

1. Create UDP socket.<br />
2. Bind the socket to server address.<br />
3. Wait until datagram packet arrives from client.<br />
4. Process the datagram packet and send a reply to client.<br />
5. Go back to Step 3.<br />
### UDP Client :



1. Create UDP socket.<br />
2. Send message to server.<br />
3. Wait until response from server is recieved.<br />
4. Process reply and go back to step 2, if necessary.<br />
5. Close socket descriptor and exit.<br />

## Illustration:

![alt text](https://github.com/MikePeri/Client-Server-UDP/blob/master/udpfuncdiag.png?raw=true)
