/**
  ******************************************************************************
  * @file    leds.h
  * @brief   This file contains all the function prototypes for
  *          the leds modules
  ******************************************************************************
  */

#ifndef LEDS_H
#define LEDS_H

// defines constan and number
#define LED_CALLIBRATION 0x080000FF

// new types value
#ifndef WIN32
#define UINT8 uint8_t
#else
#define UINT8 uchar
#endif /* WIN */

// create new type swtructures and enumerators
typedef enum
{
  led_no_use = 0,
  led_green = 1,
  led_orange,
  led_red = 5,
  led_blue
}leds_choes_led_e_t;

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

void leds_init(void);
void leds_switch(leds_choes_led_e_t choes_led, led_state_e_t state_led);

#endif /* LEDS_H */
