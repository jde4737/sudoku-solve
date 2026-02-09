out_file = sudoku-solve

srcdir = src

src_files := $(wildcard $(srcdir)/*.c)
obj_files := $(patsubst %.c, %.o, $(src_files))

LD = $(CC)

CFLAGS = -O2 -g -Wall

.PHONY: all clean

all: $(out_file)

$(out_file): $(obj_files)
	$(LD) -o $@ $(LDFLAGS) $^ $(LDLIBS)

%.o: %.c
	$(CC) -o $@ -c $(CPPFLAGS) $(CFLAGS) $<

clean:
	$(RM) $(out_file) $(obj_files)
