SRCS			= 	main.cpp \
					ClapTrap.cpp\
					ScavTrap.cpp \
					FragTrap.cpp \
					DiamondTrap.cpp \


INCLUDES 		=	./

HEADERS			=	ClapTrap.hpp\
					ScavTrap.hpp\
					FragTrap.hpp\
					DiamondTrap.hpp \


OBJS			= $(SRCS:.cpp=.o)

CXX				= clang++
RM				= rm -f
CXXFLAGS		= -Wall -Wextra -Werror -std=c++98 -I -g -Wshadow -Wno-shadow

NAME			= diamondTrap

all:			$(NAME)

$(OBJS): %.o: %.cpp $(HEADERS) Makefile
	$(CXX) $(CXXFLAGS) -c $< -I $(INCLUDES) -o $@

$(NAME): $(OBJS) $(HEADERS)
	$(CXX) $(CXXFLAGS) $(OBJS)  -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean:			clean
	$(RM) $(NAME)

re:	fclean $(NAME)

.PHONY:			all clean fclean re test