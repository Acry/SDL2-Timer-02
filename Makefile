CFLAGS   = -Wall -Wextra -mtune=native `sdl2-config --cflags`
LDFLAGS  = `sdl2-config --libs` -lSDL2_image -lSDL2_ttf -lSDL2_mixer -lSDL2_gfx -lm

debug:helper.c main.c
	$(CC) $(CFLAGS) -g $? -o timer $(LDFLAGS)
stable:helper.c main.c
	$(CC) $(CFLAGS) $? -o timer $(LDFLAGS)
clean:
	rm -vfr *~ timer
