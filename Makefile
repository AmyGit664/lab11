CC = gcc
OBJ = test_global.o max.o min.o var.o
CC_OPTIONS =

ifeq ($(DEBUG), yes)
	CC_OPTIONS = -g -Wall
else
	CC_OPTIONS = 
endif

all: install decision

install: test_global
	mv test_global /home/student

decision:
ifeq ($(DEBUG), yes)
	@echo "La compilation est en mode Debug"
else
	@echo "La compilation est en mode Release"
endif

test_global: $(OBJ)
	$(CROSS_COMPILE)$(CC) $(OBJ) -o $@

max.o: max.c max.h
	$(CROSS_COMPILE)$(CC) -c $(CC_OPTIONS) $^

min.o: min.c min.h
	$(CROSS_COMPILE)$(CC) -c $(CC_OPTIONS) $<

var.o: var.c var.h
	$(CROSS_COMPILE)$(CC) -c $(CC_OPTIONS) $<

test_global.o: test_global.c max.h min.h var.h
	$(CROSS_COMPILE)$(CC) -c $(CC_OPTIONS) $<

clean:
	rm -rf *.o test_global
	





