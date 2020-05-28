AM_CFLAGS = -I$(top_builddir)/lib/libstatic -I$(top_builddir)/lib/libshared -Wall 

bin_PROGRAMS = hello
hello_SOURCES = main.c
hello_LDADD = $(top_builddir)/lib/libstatic/libhellostatic.a
hello_LDADD += $(top_builddir)/lib/libshared/libhelloshared.la

clean-local:
	@rm Makefile Makefile.in
