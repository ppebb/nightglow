# Taken from https://github.com/vkoskiv/cosmo-sdl-template/blob/master/Makefile

ifeq (${MODE},)
	DBGFLAGS =
endif

ifeq (${MODE}, debug)
	DBGFLAGS = -fsanitize=address -fsanitize=undefined
endif

CC=cosmocc
CFLAGS=-Wall -Wextra -std=c99 -O0 -Wno-deprecated-declarations \
-fno-omit-frame-pointer -fno-pie -no-pie -pg -gdwarf-4 -I./ \
-I./third_party/glfw-stub/ -I./third_party/headers/ $(DBGFLAGS) -D_COSMO_SOURCE
LDFLAGS=-ldl
BIN=nightglow.com
OBJDIR=obj

# Finds all c files but excludes the headers and test directory
SRCS=$(shell find . -name "*.c" -and -not -path "*/incbin/*" -and -not -path "*/clay/*")
OBJS=$(patsubst %.c, $(OBJDIR)/%.o, $(SRCS))

.PHONY: all
all: $(BIN)

$(OBJDIR):
	@mkdir -p $@

$(OBJDIR)/%.o: %.c $(OBJDIR)
	@mkdir -p '$(@D)'
	@echo "CC $<"
	@$(CC) $(CFLAGS) -o $@ -c $<

$(BIN): $(OBJS) $(OBJDIR)
	@echo "LD $@"
	@$(CC) $(CFLAGS) $(OBJS) -o $@ $(LDFLAGS)

.PHONY: clean
clean:
	rm -rf $(OBJDIR) nightglow.*
