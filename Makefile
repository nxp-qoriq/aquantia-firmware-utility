AQ_API_DIR = aq_api_2_9_7
CFLAGS = -I$(AQ_API_DIR) -Wno-implicit-function-declaration -fPIC

SOURCES := $(wildcard $(AQ_API_DIR)/*.c) AQ_interface.c
OBJECTS = $(SOURCES:.c=.o)

%.o: %.c
	$(CROSS_COMPILE)gcc $(CFLAGS) -c $< -o $@

all: $(OBJECTS) aq-firmware-tool aq-demo-fota

aq-firmware-tool: aq-firmware-tool.o $(OBJECTS)
	$(CROSS_COMPILE)gcc -o $@ $^ $(CFLAGS)

libaquantia-tp1-fota.so: aq-tp1-fota.o $(OBJECTS)
	$(CROSS_COMPILE)gcc -shared -o $@ $^

aq-demo-fota: libaquantia-tp1-fota.so aq-demo-fota.o
	$(CROSS_COMPILE)gcc -o $@ aq-demo-fota.o -laquantia-tp1-fota -L.

clean:
	rm -f $(OBJECTS) *.o *.so aq-firmware-tool aq-demo-fota
