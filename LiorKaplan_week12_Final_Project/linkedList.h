#ifndef LINKEDLISTH
#define LINKEDLISTH

#define FALSE 0
#define TRUE !FALSE

// Frame struct
typedef struct Frame
{
	char* name;
	unsigned int duration;
	char* path;
} Frame;


// Link (node) struct
typedef struct FrameNode
{
	Frame* frame;
	struct FrameNode* next;
} FrameNode;

/*
This function creates a frame 
input: none
output: pointer to the frame
*/
FrameNode* create_frame();
/*
This function will add frame to the linked list of the frames
input: the frame details, the fraim itself
output: none
*/
void add_frame(Frame* frame_details, FrameNode* frames);
/*
This function removes frame from the frames list
input: the frame details, the fraim itself, the position to remove from
output: none
*/
void remove_frame(Frame* frame_details, FrameNode* frames, int position);
/*
This function changes the place of the frame in the position that the user entered
input: the frame details, the fraim itself, the position to remove from
output: none
*/
void change_place(Frame* frame_details, FrameNode* frames, int position);
/*
This function changes the show tim of some frame in the linked list
input: the frame details, the fraim itself, the new time of the frame
output: none
*/
void change_frame_time(Frame* frame_details, FrameNode* frames, int new_time);
/*
This function changes the time of all the frames
input: the frame details, the fraim itself, the new time of the frame
output: none
*/
void change_all_frames_time(Frame* frame_details, FrameNode* frames, int new_time);
/*
This function shows the details of all the frames
input: the frame details, the fraim itself
output: none
*/
void show_frames(Frame* frame_details, FrameNode* frames);



#endif