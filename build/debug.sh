echo "Note: Current Directory must be REP-001/build"

cd ..
gcc -o program-001 csrc/*.c csrc/net/*.c csrc/enc/*.c -Iinclude -Wall -Wextra -pedantic -D DEBUG -g
rm -rf *.o