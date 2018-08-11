import socket
import select
import sys
from thread import *
 

server = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
server.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
 
# checks whether sufficient arguments have been provided
if len(sys.argv) != 2:
    print "Correct usage: script, IP address, port number"
    exit()
 
# takes the first argument from command prompt as IP address
IP_address = str(socket.gethostbyname(socket.gethostname()))

# takes second argument from command prompt as port number
Port = int(sys.argv[1])
 
#Bind server to adress and port
server.bind((IP_address, Port))
 
#Listens to 100 active connections
server.listen(100)
print("Listening......")
print("IP Address of the Server:%s" %IP_address)
 
list_of_clients = []
 
def clientthread(conn, addr, uname):
 
    # sends a message to the client whose user object is conn
    conn.send("Welcome to this chatroom!")
 
    while True:
            try:
                message = conn.recv(2048)
                if message:
 
					#Prints the message and the address of person who sent message to server
                    print "<" + uname + "> " + message
 
                    # Calls broadcast function to send message to all
                    message_to_send = "<" + uname + "> " + message
                    broadcast(message_to_send, conn)
 
                else:
                    #Remove connection if message has no content
                    remove(conn)
 
            except:
                continue
 
#Broadcast the message to allclients who's object is not the same as the one sending he message """
def broadcast(message, connection):
    for clients in list_of_clients:
        if clients!=connection:
            try:
                clients.send(message)
            except:
                clients.close()
 
                # if the link is broken, we remove the client
                remove(clients)
 
#The following function simply removes the object from the list that was created at the beginning of the program
def remove(connection):
    if connection in list_of_clients:
        list_of_clients.remove(connection)
 
while True:
 
    #Accepts a connection request and stores two parameters
    conn, addr = server.accept()
	#Receives username from client
    uname = conn.recv(1024).decode('ascii')	
    #Maintains a list of clients for ease of broadcasting a message to all available people in the chatroom
    list_of_clients.append(conn)
	
    # prints the address of the user that just connected
    print uname + " connected"
 
    # creates and individual thread for every user 
    # that connects
    start_new_thread(clientthread,(conn,addr, uname))    
 
conn.close()
server.close()
