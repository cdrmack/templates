EXE = c_raylib
SOURCES = main.c
OBJS = $(addsuffix .o, $(basename $(notdir $(SOURCES))))

CPPFLAGS = `pkg-config --cflags raylib`
CFLAGS = -std=c23 -g -Wall -Werror
LDFLAGS = `pkg-config --libs raylib`

%.o:%.c
	$(CC) $(CPPFLAGS) $(CFLAGS) -c -o $@ $<

all: $(EXE)
	@echo $(EXE) build complete

$(EXE): $(OBJS)
	$(CC) $(CPPFLAGS) $(CFLAGS) $(LDFLAGS) -o $@ $^

clean:
	rm -f $(EXE) $(OBJS)
