/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    usart.h
  * @brief   This file contains all the function prototypes for
  *          the usart.c file
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __USART_H__
#define __USART_H__

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

extern UART_HandleTypeDef huart2;

/* USER CODE BEGIN Private defines */
uint8_t CSP_USART_Init(void);
uint8_t CSP_USART_WriteMemoryFromInit(uint8_t* buffer, uint32_t address, uint32_t buffer_size);
uint8_t CSP_USART_WriteMemory(uint8_t* buffer, uint32_t address, uint32_t buffer_size);
/* USER CODE END Private defines */

void MX_USART2_UART_Init(void);

/* USER CODE BEGIN Prototypes */
#define MEMORY_FLASH_SIZE               0x4000000 /* 512 MBits => 64MBytes */
#define MEMORY_BLOCK_SIZE               0x10000   /* 1024 sectors of 64KBytes */
#define MEMORY_SECTOR_SIZE              0x1000    /* 16384 subsectors of 4kBytes */
#define MEMORY_PAGE_SIZE                0x100     /* 262144 pages of 256 bytes */
/* USER CODE END Prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __USART_H__ */

