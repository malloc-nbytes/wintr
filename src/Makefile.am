bin_PROGRAMS = wintr wintr-debug-build

wintr_SOURCES = argument.c buffer.c flags.c glconf.c io.c line.c main.c str.c term.c window.c
wintr_CFLAGS = -O2 -I$(top_srcdir)/src/include
wintr_LDADD = 

wintr_debug_build_SOURCES = $(wintr_SOURCES)
wintr_debug_build_CFLAGS = -g -O0 -I$(top_srcdir)/src/include
wintr_debug_build_LDADD = 

debug: wintr-debug-build
