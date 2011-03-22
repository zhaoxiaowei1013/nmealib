CC = gcc
LIBNAME = libnmea.a
LIBDIR = /usr/lib
INCLUDEDIR = /usr/include
MODULES = context generate generator gmath info parse parser sentence time tok
SAMPLES = generate generator math parse parse_file

BIN = lib/$(LIBNAME)
OBJ = $(MODULES:%=build/nmea_gcc/%.o)
LINKOBJ = $(OBJ) $(RES)

SMPLS = $(SAMPLES:%=samples_%)
SMPLOBJ = $(SAMPLES:%=samples/%/main.o)

CCFLAGS += -fPIC -O2 -Wall
INCS = -I ./include
LIBS = -lm -Llib -lnmea

VERSION = $(shell git describe)