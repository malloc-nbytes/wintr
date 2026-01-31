bin_PROGRAMS = ced ced-debug-build

ced_SOURCES = argument.c buffer.c flags.c glconf.c io.c line.c main.c str.c term.c window.c
ced_CFLAGS = -O2 -I$(top_srcdir)/src/include
ced_LDADD = 

ced_debug_build_SOURCES = $(ced_SOURCES)
ced_debug_build_CFLAGS = -g -O0 -I$(top_srcdir)/src/include
ced_debug_build_LDADD = 

debug: ced-debug-build
