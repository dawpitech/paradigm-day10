##
## EPITECH PROJECT, 2025
## Makefile
## File description:
## Makefile
##

CC	:=	g++

CPPFLAGS	=	-std=c++20
CPPFLAGS	+=	-W
CPPFLAGS	+=	-Wall
CPPFLAGS	+=	-Wextra
CPPFLAGS	+=	-Wundef
CPPFLAGS	+=	-Wshadow
CPPFLAGS	+=	-Wunreachable-code
CPPFLAGS	+=	-pedantic
CPPFLAGS	+=	-iquote .
CPPFLAGS	+=	-iquote include

BDIR	=	.build/release

SRC	=	bonus/main.cpp
SRC	+=	IFruit.cpp
SRC	+=	AFruit.cpp
SRC	+=	ACitrus.cpp
SRC	+=	ABerry.cpp
SRC	+=	ANut.cpp
SRC	+=	Lemon.cpp
SRC	+=	Orange.cpp
SRC	+=	Strawberry.cpp
SRC	+=	Almond.cpp
SRC	+=	FruitBox.cpp
SRC	+=	Grapefruit.cpp
SRC	+=	BloodOrange.cpp
SRC	+=	Raspberry.cpp
SRC	+=	Coconut.cpp
SRC	+=	FruitUtils.cpp
SRC	+=	FruitFactory.cpp
SRC	+=	FruitMixer.cpp

OBJ = $(SRC:%.cpp=$(BDIR)/%.o)

NAME = test

.PHONY: all
all: $(NAME)

$(BDIR)/%.o: %.cpp
	@ mkdir -p $(dir $@)
	$(CC) -o $@ -c $< $(CPPFLAGS)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(CPPFLAGS) -o $(NAME)

.PHONY: clean
clean:
	@ rm -f $(OBJ)
	@ rm -rf .build

.PHONY: fclean
fclean: clean
	@ rm -f $(NAME)

.NOTPARRALEL: re
.PHONY: re
re: fclean all
