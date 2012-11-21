
#!/bin/bash

cc -g -Wall -std=gnu99 $1 -o $2 -lm
chmod 700 $2