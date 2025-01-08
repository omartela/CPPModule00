# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/08 10:05:32 by omartela          #+#    #+#              #
#    Updated: 2025/01/08 10:05:34 by omartela         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COMPILER = c++

TARGET = account
SRC = Account.cpp tests.cpp
OBJ = $(SRC:.cpp=.o)
CFLAGS = -Wall -Wextra -std=c++98

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
