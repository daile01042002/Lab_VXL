/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define A_Pin GPIO_PIN_4
#define A_GPIO_Port GPIOA
#define B_Pin GPIO_PIN_5
#define B_GPIO_Port GPIOA
#define C_Pin GPIO_PIN_6
#define C_GPIO_Port GPIOA
#define D_Pin GPIO_PIN_7
#define D_GPIO_Port GPIOA
#define E_Pin GPIO_PIN_8
#define E_GPIO_Port GPIOA
#define F_Pin GPIO_PIN_9
#define F_GPIO_Port GPIOA
#define G_Pin GPIO_PIN_10
#define G_GPIO_Port GPIOA
#define H_Pin GPIO_PIN_11
#define H_GPIO_Port GPIOA
#define I_Pin GPIO_PIN_12
#define I_GPIO_Port GPIOA
#define K_Pin GPIO_PIN_13
#define K_GPIO_Port GPIOA
#define L_Pin GPIO_PIN_14
#define L_GPIO_Port GPIOA
#define M_Pin GPIO_PIN_15
#define M_GPIO_Port GPIOA
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
