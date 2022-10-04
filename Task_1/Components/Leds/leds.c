/**
  ******************************************************************************
  * @file    leds.h
  * @brief   This file contains all the function prototypes for
  *          the leds modules
  ******************************************************************************
  */
  
#include "leds.h"
#include "gpio.h"

static leds_state_s_t leds_state;

void leds_init(void)
{
  HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(LED_ORANGE_GPIO_Port, LED_ORANGE_Pin, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(LED_BLUE_GPIO_Port, LED_BLUE_Pin, GPIO_PIN_RESET);
  
  leds_state.led_green = off;
  leds_state.led_orange = off;
  leds_state.led_red = off;
  leds_state.led_blue = off;
}
  
void leds_switch(leds_choes_led_e_t choes_led, led_state_e_t state_led)
{
  GPIO_PinState pin_led_state;
  
  switch (state_led)
  {
    case off:
    {
      pin_led_state = GPIO_PIN_RESET;
      break;
    }
    case on:
    {
      pin_led_state = GPIO_PIN_SET;
      break;
    }
    default:
    {
    }
  };
  switch (choes_led)
  {
    case led_blue:
    {
      HAL_GPIO_WritePin(LED_BLUE_GPIO_Port, LED_BLUE_Pin, pin_led_state);
      leds_state.led_blue = state_led;
      break;
    }
    case led_red:
    {
      HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, pin_led_state);
      leds_state.led_red = state_led;
      break;
    }
    case led_orange:
    {
      HAL_GPIO_WritePin(LED_ORANGE_GPIO_Port, LED_ORANGE_Pin, pin_led_state);
      leds_state.led_orange = state_led;
      break;
    }
    case led_green:
    {
      HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, pin_led_state);
      leds_state.led_green = state_led;
      break;
    }
    default:
    {
    }
  };
}
