OUT         := ../../../../emulator_renderer
SRC         := main.cpp ../../../../libs/libcutils/threads.c ../../../../libs/liblog/logprint.c ../../../../libs/liblog/logd_write.c ../../../../libs/liblog/event_tag_map.c ../../../../libs/libcutils/properties.c ../../../../libs/libcutils/socket_local_client.c ../../../../libs/libcutils/socket_local_server.c ../../../../libs/libcutils/socket_loopback_server.c ../../../../libs/libcutils/socket_network_client.c
OBJ         := $(patsubst %.c, %.o, $(filter %.c, $(SRC)))
OBJ         += $(patsubst %.cpp, %.o, $(filter %.cpp, $(SRC)))
DEP         := $(OBJ:.o=.d)

CFLAGS      := -Wall -std=gnu99
CXXFLAGS    := -Wall
LDFLAGS     := -L../../../..
LDLIBS      := -lOpenglRender -lGLESv1_dec -lGLESv2_dec -lOpenglOsUtils -lOpenglCodecCommon -l_renderControl_dec -lutils -lrt -lz -lpthread

CFLAGS		+= -DHAVE_PTHREADS -DHAVE_SYS_UIO_H
CXXFLAGS	+= -DHAVE_PTHREADS -DHAVE_SYS_UIO_H

CFLAGS		+= -I../libs/libOpenglRender -I../../shared/OpenglCodecCommon -I../../host/include/libOpenglRender -I../../shared/OpenglOsUtils -I../../host/include -I../../../../include
CXXFLAGS	+= -I../libs/libOpenglRender -I../../shared/OpenglCodecCommon -I../../host/include/libOpenglRender -I../../shared/OpenglOsUtils -I../../host/include -I../../../../include

DEBUG       ?= 0
VERBOSE     ?= 0
X11			?= 0

ifeq ($(DEBUG),1)
	CFLAGS += -O0 -g3 -ggdb -pg
	CXXFLAGS += -O0 -g3 -ggdb -pg
	LDFLAGS += -pg
endif

ifeq ($(VERBOSE),1)
	MSG := @true
	CMD :=
else
	MSG := @echo
	CMD := @
endif

ifeq ($(X11),1)
	CFLAGS += -DX11
	CXXFLAGS += -DX11
	LDLIBS += -lX11
endif

.PHONY: release clean

release: CFLAGS += -O3
release: CXXFLAGS += -O3
release: $(OUT)

clean:
	$(MSG) -e "\tCLEAN\t"
	$(CMD)$(RM) $(OBJ) $(DEP) $(OUT)

$(OUT): $(OBJ)
	$(MSG) -e "\tLINK\t$@"
	$(CMD)$(CXX) $(LDFLAGS) -o $@ $^ $(LDLIBS)

%.o: %.c %.d
	$(MSG) -e "\tCC\t$@"
	$(CMD)$(CC) $(CFLAGS) -c $< -o $@

%.d: %.c
	$(MSG) -e "\tDEP\t$@"
	$(CMD)$(CC) $(CFLAGS) -MF $@ -MM $<

%.o: %.cpp %.d
	$(MSG) -e "\tCXX\t$@"
	$(CMD)$(CXX) $(CXXFLAGS) -c $< -o $@

%.d: %.cpp
	$(MSG) -e "\tDEP\t$@"
	$(CMD)$(CXX) $(CXXFLAGS) -MF $@ -MM $<

ifneq ($(MAKECMDGOALS),clean)
-include $(DEP)
endif

