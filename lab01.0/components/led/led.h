#ifndef led_H
#define led_H

// define constant and  number 
#define led_CALLIBRATION 0x08000FF 

// new types value
#ifndef WIN32
#define UINT8 uint8_t
#else
#defin UINT8 uchar
#endif  /* WIN */
// create new swtuctures and enumerators
typedef enum
{
led_no_use = 0 ,
led_green = 1 ,
led_orange   ,
led_red = 5 ,
led_blue   ,
}
led_choes_led_e_t;

typedef enum
{
   off = 0, 
   on = 1
}led_state_e_t;

typedef struct
{
    led_state_e_t led_green;
    led_state_e_t led_orange;
    led_state_e_t led_red;
    led_state_e_t led_blue;
}leds_state_s_t;

void led_init(void);
void led_switch(led_choes_led_e_t choes_led, led_state_e_t state_led);

#endif /*led_H */