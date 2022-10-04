/**
  ******************************************************************************
  * @file    garland.h
  * @brief   This file contains all the function prototypes for
  *          the gurland
  ******************************************************************************
  */
  
#ifndef GURLAND_H
#define GURLAND_H

typedef enum
{
  turned_on = 0,
}garlande_mode_e_t;

typedef struct
{
  garlande_mode_e_t mode;
}garland_state_s_t;

void garland_init(void);
void garland_run(void);

#endif /* GURLAND_H */
