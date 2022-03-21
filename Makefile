SRCS = read_write_close.c
CXX = gcc
CFLAGS = -Wall

read_write_close: $(SRCS)
	$(CXX) $(CFLAGS) $(SRCS) -o $@
