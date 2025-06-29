#ifndef BONGO_H
#define BONGO_H

#include <stdint.h>
#include <stdbool.h>

#define ANIM_FRAME_DURATION 75
#define ANIM_SIZE 636
#define IDLE_FRAMES 5
#define IDLE_TIMEOUT 750
#define TAP_FRAMES 2
#define KEYS_SIZE 100

enum anim_states {
    Idle,
    Prep,
    Tap
};

struct pair_int_int {
    uint8_t first;
    uint8_t second;
};

// External variable declarations
extern uint8_t anim_state;
extern uint32_t idle_timeout_timer;
extern uint32_t anim_timer;
extern uint8_t current_idle_frame;
extern uint8_t current_tap_frame;

extern struct pair_int_int pressed_keys[KEYS_SIZE];
extern struct pair_int_int pressed_keys_prev[KEYS_SIZE];
extern uint8_t pressed_keys_index;

extern bool key_down;
extern char wpm[42];

// Function declarations
bool detect_key_down(void);
void eval_anim_state(void);
void draw_bongo(void);

#endif // BONGO_H
