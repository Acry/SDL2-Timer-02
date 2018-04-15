//BEGIN PROGRAM HEAD
//BEGIN DESCRIPTION
/* Program quits after a certain amount of time
 * 
 */
//END   DESCRIPTION

//BEGIN INCLUDES
//local headers
#include "helper.h"
//END   INCLUDES

//BEGIN CPP DEFINITIONS
//END   CPP DEFINITIONS

//BEGIN DATASTRUCTURES
//END	DATASTRUCTURES

//BEGIN GLOBALS
//END   GLOBALS

//BEGIN FUNCTION PROTOTYPES
//END	FUNCTION PROTOTYPES

/* DEFINED PROGRESS GOALS
 * Implement timer to quit program
 */
//END 	PROGRAM HEAD

//BEGIN MAIN FUNCTION
int main(int argc, char *argv[])
{

(void)argc;
(void)argv;

//BEGIN INIT
init();

SDL_SetWindowPosition(Window,0,0);
SDL_SetWindowSize(Window,540,540);
SDL_SetWindowTitle(Window, "SDL 2 - Timer");
SDL_ShowWindow(Window);

SDL_SetRenderDrawColor(Renderer, 111, 111, 111, 255);
SDL_RenderClear(Renderer);
SDL_RenderPresent(Renderer);

//BEGIN TIMING
Uint32 cur_time	   = 0;
Uint32 end_time    = 5000;	//20 seconds
Uint32 frame_start = 0;
Uint32 frame_time  = 0;
//END TIMING

SDL_Event event;
int running = 1;
//END   INIT

//BEGIN MAIN Loop
while(running){
	frame_start=SDL_GetTicks();
	//BEGIN EVENT LOOP
	while(SDL_PollEvent(&event)){
		if(event.type == SDL_QUIT){
			running = 0;
		}
	}
	//END   EVENT LOOP
	//BEGIN UPDATE LOGIC
	if (cur_time>=end_time)
		running = 0;
	//END 	UPDATE LOGIC
	//BEGIN RENDERING
	//Not refreshing Screen
	//END   RENDERING
	frame_time = SDL_GetTicks()-frame_start;
	cur_time+=frame_time;
}
//END   MAIN LOOP
exit_();
return EXIT_SUCCESS;

}
//END   MAIN FUNCTION

//BEGIN FUNCTIONS
//END   FUNCTIONS
