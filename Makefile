# Taken from https://github.com/vkoskiv/cosmo-sdl-template/blob/master/Makefile

ifeq (${MODE},)
	DBGFLAGS =
endif

ifeq (${MODE}, debug)
	DBGFLAGS = -fsanitize=address -fsanitize=undefined
endif

STUBS=$(addprefix -isystem , $(shell find ./third_party -maxdepth 1 -path "*stub*" -type d))

CC=cosmocc
CFLAGS=-Wall -Wextra -std=c99 -O0 -Wno-deprecated-declarations       \
-fno-omit-frame-pointer -fno-pie -no-pie -pg -gdwarf-4 -I./ -isystem \
/usr/include/SDL2 -isystem ./third_party ${STUBS} $(DBGFLAGS)        \
-D_COSMO_SOURCE

LDFLAGS=-ldl
BIN=nightglow.com
OBJDIR=obj

# Finds all c files but excludes the headers and test directory
SRCS=$(shell find . -name "*.c" -and \( -not -path "*/third_party/*" -or -path \
"*stub*" \))
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
