hello: main.c alsoprint.c FORCE
	gcc main.c alsoprint.c -o hello

.PHONY:FORCE
