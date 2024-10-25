EXE = c_raylib
SOURCES = main.c
OBJS = $(addsuffix .o, $(basename $(notdir $(SOURCES))))

LIBS_DIR = /usr/local/lib
LDLIBS = raylib

CPPFLAGS = -I /usr/local/include
CFLAGS = -std=c17 -g -Wall -Werror
LDFLAGS = -L $(LIBS_DIR) -l $(LDLIBS)

%.o:%.c
	$(CC) $(CPPFLAGS) $(CFLAGS) -c -o $@ $<

all: $(EXE)
	@echo build complete

$(EXE): $(OBJS)
	$(CC) $(CPPFLAGS) $(CFLAGS) $(LDFLAGS) -o $@ $^

clean:
	rm -f $(EXE) $(OBJS)
