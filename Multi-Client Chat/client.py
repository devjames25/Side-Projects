import socket
import select
import sys
 
#Create TCP socket
server = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

#System arguments
if len(sys.argv) != 3:
    print "Correct usage: script, IP address, port number"
    exit()
IP_address = str(sys.argv[1])
Port = int(sys.argv[2])

#Connect socket to ip address and port number
server.connect((IP_address, Port))

#Username input 
uname = raw_input('Enter user name:')
#Sends username to server
server.send(uname.encode('ascii'))

while True:
 
    # maintains a list of possible input streams
    sockets_list = [sys.stdin, server]
 
	#Select returns from sockets_list, the stream that is reader for input. 
	#So for example, if the server wants  to send a message, then the if condition 
	#will hold true below.
    read_sockets,write_socket, error_socket = select.select(sockets_list,[],[])
 
    for socks in read_sockets:
        if socks == server:
            message = socks.recv(2048)
            print message
        else:
            message = sys.stdin.readline()
            server.send(message)
            sys.stdout.write('<'+uname+'>')
            sys.stdout.write(message)
            sys.stdout.flush()
server.close()
