SRCS = entaglement.c
BINARY = entaglement

build: ${SRCS}
	gcc ${SRCS} -o ${BINARY}

clean:
	rm -f ${BINARY}
