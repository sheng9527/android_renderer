OUT         := ../../../../libOpenglOsUtils.so
SRC         := osDynLibrary.cpp osProcessUnix.cpp osThreadUnix.cpp
OBJ         := $(patsubst %.c, %.o, $(filter %.c, $(SRC)))
OBJ         += $(patsubst %.cpp, %.o, $(filter %.cpp, $(SRC)))
DEP         := $(OBJ:.o=.d)

SRC_DEPENDS :=

CFLAGS      := -Wall -fPIC -DHAVE_PTHREADS -DWITH_GLES2
CXXFLAGS    := -Wall -fPIC -DHAVE_PTHREADS -DWITH_GLES2
LDFLAGS     :=
LDLIBS      := -lpthread `pkg-config --libs wayland-egl` `pkg-config --libs wayland-egl` -ldl

DEBUG       ?= 0
VERBOSE     ?= 0

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

.PHONY: release clean

release: CFLAGS += -O3
release: CXXFLAGS += -O3
release: $(OUT)

clean:
	$(MSG) -e "\tCLEAN\t"
	$(CMD)$(RM) $(OBJ) $(DEP) $(OUT)

$(OUT): $(OBJ)
	$(MSG) -e "\tLINK\t$@"
	$(CMD)$(CXX) $(LDFLAGS) -shared -o $@ $^ $(LDLIBS)

%.o: %.c %.d $(SRC_DEPENDS)
	$(MSG) -e "\tCC\t$@"
	$(CMD)$(CC) $(CFLAGS) -c $< -o $@

%.d: %.c $(SRC_DEPENDS)
	$(MSG) -e "\tDEP\t$@"
	$(CMD)$(CC) $(CFLAGS) -MF $@ -MM $<

%.o: %.cpp %.d $(SRC_DEPENDS)
	$(MSG) -e "\tCXX\t$@"
	$(CMD)$(CXX) $(CXXFLAGS) -c $< -o $@

%.d: %.cpp $(SRC_DEPENDS)
	$(MSG) -e "\tDEP\t$@"
	$(CMD)$(CXX) $(CXXFLAGS) -MF $@ -MM $<

ifneq ($(MAKECMDGOALS),clean)
-include $(DEP)
endif

