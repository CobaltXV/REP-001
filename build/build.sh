cd ..
gcc -o rep csrc/enc/encrypt.c csrc/net/socket.c csrc/net/transmit.c csrc/error.c csrc/main.c -Iinclude -Wall -Wextra -pedantic
rm -rf encrypt.o socket.o transmit.o error.o main.o