/*
 * includes.h
 *
 * Created : 15/06/2021 10:02:45
 * Author  : MahmoudSaad.ZeroX96
 * Email   : Mahmoud.S.AbdElhares@gmail.com
 * Email   : msammamsa10@gmail.com
 * Github  : github.com/ZeroX96
 * LinkedIn: www.linkedin.com/in/MahmoudSaad96
 */


#ifndef INCLUDES_H_
#define INCLUDES_H_

//Generally
#include <avr/io.h>
#include "common.h"

//used the spi driver but only the needed functions and edited some function names
#include "spi/hal_SPI_CFG.h"
#include "spi/hal_SPI.h"

//for the Interrupts
#include <avr/interrupt.h>
#include "EXT_INTERRUPTS/external_interrupts.h"

//for the delay functions and will revisit when using the RTOS,NOTE>>>>>>>>>>>>>>>>>>>>>>>
#include <util/delay.h>



#endif /* INCLUDES_H_ */