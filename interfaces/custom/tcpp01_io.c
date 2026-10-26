/**
  ******************************************************************************
  * @file    tcpp01_io.c
  * @author  MCD Application Team
  * @brief   This file contains all the functions implementations for the
  *          tcpp01.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/

#include "tcpp01_io.h"


/**
  * @brief Initializes the IO layer by assigning resources to the IO object.
  * @retval 0 in case of success, -1 in case of error
  */
int32_t tcpp01_io_init(tcpp01_io_t *pio)
{
  switch (pio->id)
  {
    /* assign resources to the pio according to its ID */
    /* case TCPP01_ID_0: ... */
    default:
      return -1; /* unrecognized object: return an error */
  }
  return 0;
}

/**
  * @brief Enable the TCPP01 dead batteries, open the CC switches.
  * @param  pio      : the IO instance object
  */
void tcpp01_io_enable_dead_battery(tcpp01_io_t *pio)
{

}

/**
  * @brief Disable the TCPP01 dead batteries, close the CC switches.
  * @param  pio      : the IO instance object
  */
void tcpp01_io_disable_dead_battery(tcpp01_io_t *pio)
{

}

/**
  * @brief  Get actual ADC value measured on the VBUS line.
  * @param  pio : the IO instance object
  * @param  p_adc_value : Pointer on measured ADC value.
  * @retval 0 in case of success, -1 otherwise.
  */
int32_t tcpp01_io_get_adc_value(tcpp01_io_t *pio, uint32_t *p_adc_value)
{
  return -1;
}

/**
  * @brief This function starts the ADC conversion.
  * @param  pio         : the IO instance object
  * @retval 0 in case of success, -1 otherwise.
  */
int32_t tcpp01_io_start(tcpp01_io_t *pio)
{
  return -1;
}

/**
  * @brief This function stops the ADC conversion.
  * @param  pio         : the IO instance object
  * @retval 0 in case of success, -1 otherwise.
  */
int32_t tcpp01_io_stop(tcpp01_io_t *pio)
{
  return -1;
}

/**
  * @brief  Get actual voltage level measured on the VBUS line.
  * @param  pio : the IO instance object
  * @param  adc_value : measured ADC value
  * @retval measured voltage value
  */
uint32_t tcpp01_io_get_vbus_voltage(tcpp01_io_t *pio, uint32_t adc_value)
{
  return 0U;
}

/**
  * @brief This function starts interrupt request on type-C Cable plug event.
  * @param  pio         : the IO instance object
  * @retval 0 in case of success, -1 otherwise.
  */
int32_t tcpp01_io_start_it(tcpp01_io_t *pio)
{
  return -1;
}

/**
  * @brief This function stops interrupt request on type-C cable plug event.
  * @param  pio         : the IO instance object
  * @retval 0 in case of success, -1 otherwise.
  */
int32_t tcpp01_io_stop_it(tcpp01_io_t *pio)
{
  return -1;
}

/**
  * @brief This function enables interrupt request on type-C cable plug event.
  * @param  pio         : the IO instance object
  */
void tcpp01_io_enable_irq(tcpp01_io_t *pio)
{

}

/**
  * @brief This function disables the interrupt for type-C cable plug event.
  * @param  pio         : the IO instance object
  */
void tcpp01_io_disable_irq(tcpp01_io_t *pio)
{

}

/**
  * @brief This function Clears interrupt pending bit of the selected EXTI line.
  * @param  pio         : the IO instance object
  */
void tcpp01_io_clear_irq(tcpp01_io_t *pio)
{

}

#if defined (TCPP01_CALLBACKS) && (TCPP01_CALLBACKS == 1)

/**
  * @brief Registration of exti falling callback.
  * @param pio     : The IO instance object.
  * @param  io_cb  : Callback function to be registered.
  * @param  p_arg    : Optional argument given to the callback
  * @retval 0 in case of success, -1 otherwise.
  */

int32_t tcpp01_io_register_callback(tcpp01_io_t *pio, tcpp01_io_callback_t io_cb, void *p_arg)
{
  pio->exti_cb_ctx.io_callback = io_cb;
  pio->exti_cb_ctx.parg = p_arg;

  /* Implement your own callback mechanism here. */

  return -1;
}
#endif /* USE_TCPP01_CALLBACKS */
