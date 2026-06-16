CC = gcc
TARGET = calculator
SRCS = main.c calc.c
OBJS = $(SRCS:.c=.o)
DEPS = $(OBJS:.o=.d)

ifdef DEBUG
    CFLAGS = -Wall -Wextra -g -O0 -DDEBUG -MMD -MP
else
    CFLAGS = -Wall -Wextra -O2 -MMD -MP
endif

$(TARGET): $(OBJS)
	$(CC) $^ -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

-include $(DEPS)

.PHONY: all clean debug release
all: $(TARGET)

clean:
	rm -f $(TARGET) $(OBJS) $(DEPS)

debug:
	$(MAKE) DEBUG=1

release:
	$(MAKE)
