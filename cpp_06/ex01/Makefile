SRCS			= 	Serialize.cpp\
					main.cpp \

INCLUDES 		=	./

HEADERS			=	Serialize.hpp\

OBJS			= $(SRCS:.cpp=.o)

CXX				= clang++
RM				= rm -f
CXXFLAGS		= -Wall -Wextra -Werror -std=c++98 -I -g

NAME			= serialize

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