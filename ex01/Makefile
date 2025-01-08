# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/31 09:50:39 by omartela          #+#    #+#              #
#    Updated: 2024/12/31 09:50:41 by omartela         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COMPILER = g++

TARGET = phonebook
INC_DIR = includes
SRC = src/main.cpp src/PhoneBook.cpp src/utilities.cpp
OBJ = $(SRC:.cpp=.o)
CFLAGS = -Wall -Wextra -I$(INC_DIR)

all: $(TARGET)

$(TARGET): $(OBJ)
	$(COMPILER) $(CFLAGS) -o $(TARGET) $(OBJ)

%.o: %.cpp
	$(COMPILER) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
fclean:
	rm -f $(TARGET)

re: clean all