# Client-Server-UDP
Simple client-server UDP implementation
Theory
In UDP, the client does not form a connection with the server like in TCP and instead just sends a datagram. 
Similarly, the server need not accept a connection and just waits for datagrams to arrive. 
Datagrams upon arrival contain the address of sender which the server uses to send data to the correct client.
UDP Client/Server function calls

The entire process can be broken down into following steps :
UDP Server :

Create UDP socket.
Bind the socket to server address.
Wait until datagram packet arrives from client.
Process the datagram packet and send a reply to client.
Go back to Step 3.
UDP Client :



Create UDP socket.
Send message to server.
Wait until response from server is recieved.
Process reply and go back to step 2, if necessary.
Close socket descriptor and exit.

