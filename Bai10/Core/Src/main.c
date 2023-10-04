/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2023 STMicroelectronics.
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
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
void clearAllClock(){
	HAL_GPIO_WritePin (GPIOA, GPIO_PIN_4, SET);
	HAL_GPIO_WritePin (GPIOA, GPIO_PIN_5, SET);
	HAL_GPIO_WritePin (GPIOA, GPIO_PIN_6, SET);
	HAL_GPIO_WritePin (GPIOA, GPIO_PIN_7, SET);
	HAL_GPIO_WritePin (GPIOA, GPIO_PIN_8, SET);
	HAL_GPIO_WritePin (GPIOA, GPIO_PIN_9, SET);
	HAL_GPIO_WritePin (GPIOA, GPIO_PIN_10, SET);
	HAL_GPIO_WritePin (GPIOA, GPIO_PIN_11, SET);
	HAL_GPIO_WritePin (GPIOA, GPIO_PIN_12, SET);
	HAL_GPIO_WritePin (GPIOA, GPIO_PIN_13, SET);
	HAL_GPIO_WritePin (GPIOA, GPIO_PIN_14, SET);
	HAL_GPIO_WritePin (GPIOA, GPIO_PIN_15, SET);
}
void clockDisplay(int hour, int minute, int second){
	if (minute < 5) minute = 0;
	else if (minute < 10) minute = 1;
	else if (minute < 15) minute = 2;
	else if (minute < 20) minute = 3;
	else if (minute < 25) minute = 4;
	else if (minute < 30) minute = 5;
	else if (minute < 35) minute = 6;
	else if (minute < 40) minute = 7;
	else if (minute < 45) minute = 8;
	else if (minute < 50) minute = 9;
	else if (minute < 55) minute = 10;
	else if (minute < 60) minute = 11;

	if (second < 5) second = 0;
	else if (second < 10) second = 1;
	else if (second < 15) second = 2;
	else if (second < 20) second = 3;
	else if (second < 25) second = 4;
	else if (second < 30) second = 5;
	else if (second < 35) second = 6;
	else if (second < 40) second = 7;
	else if (second < 45) second = 8;
	else if (second < 50) second = 9;
	else if (second < 55) second = 10;
	else if (second < 60) second = 11;
	switch(hour){
	case 0:
		HAL_GPIO_WritePin (GPIOA, GPIO_PIN_4, RESET);
		break;
	case 1:
		HAL_GPIO_WritePin (GPIOA, GPIO_PIN_5, RESET);
		break;
	case 2:
		HAL_GPIO_WritePin (GPIOA, GPIO_PIN_6, RESET);
		break;
	case 3:
		HAL_GPIO_WritePin (GPIOA, GPIO_PIN_7, RESET);
		break;
	case 4:
		HAL_GPIO_WritePin (GPIOA, GPIO_PIN_8, RESET);
		break;
	case 5:
		HAL_GPIO_WritePin (GPIOA, GPIO_PIN_9, RESET);
		break;
	case 6:
		HAL_GPIO_WritePin (GPIOA, GPIO_PIN_10, RESET);
		break;
	case 7:
		HAL_GPIO_WritePin (GPIOA, GPIO_PIN_11, RESET);
		break;
	case 8:
		HAL_GPIO_WritePin (GPIOA, GPIO_PIN_12, RESET);
		break;
	case 9:
		HAL_GPIO_WritePin (GPIOA, GPIO_PIN_13, RESET);
		break;
	case 10:
		HAL_GPIO_WritePin (GPIOA, GPIO_PIN_14, RESET);
		break;
	case 11:
		HAL_GPIO_WritePin (GPIOA, GPIO_PIN_15, RESET);
		break;
	}
	switch(minute){
	case 0:
		HAL_GPIO_WritePin (GPIOA, GPIO_PIN_4, RESET);
		break;
	case 1:
		HAL_GPIO_WritePin (GPIOA, GPIO_PIN_5, RESET);
		break;
	case 2:
		HAL_GPIO_WritePin (GPIOA, GPIO_PIN_6, RESET);
		break;
	case 3:
		HAL_GPIO_WritePin (GPIOA, GPIO_PIN_7, RESET);
		break;
	case 4:
		HAL_GPIO_WritePin (GPIOA, GPIO_PIN_8, RESET);
		break;
	case 5:
		HAL_GPIO_WritePin (GPIOA, GPIO_PIN_9, RESET);
		break;
	case 6:
		HAL_GPIO_WritePin (GPIOA, GPIO_PIN_10, RESET);
		break;
	case 7:
		HAL_GPIO_WritePin (GPIOA, GPIO_PIN_11, RESET);
		break;
	case 8:
		HAL_GPIO_WritePin (GPIOA, GPIO_PIN_12, RESET);
		break;
	case 9:
		HAL_GPIO_WritePin (GPIOA, GPIO_PIN_13, RESET);
		break;
	case 10:
		HAL_GPIO_WritePin (GPIOA, GPIO_PIN_14, RESET);
		break;
	case 11:
		HAL_GPIO_WritePin (GPIOA, GPIO_PIN_15, RESET);
		break;
	}
	switch(second){
	case 0:
		HAL_GPIO_WritePin (GPIOA, GPIO_PIN_4, RESET);
		break;
	case 1:
		HAL_GPIO_WritePin (GPIOA, GPIO_PIN_5, RESET);
		break;
	case 2:
		HAL_GPIO_WritePin (GPIOA, GPIO_PIN_6, RESET);
		break;
	case 3:
		HAL_GPIO_WritePin (GPIOA, GPIO_PIN_7, RESET);
		break;
	case 4:
		HAL_GPIO_WritePin (GPIOA, GPIO_PIN_8, RESET);
		break;
	case 5:
		HAL_GPIO_WritePin (GPIOA, GPIO_PIN_9, RESET);
		break;
	case 6:
		HAL_GPIO_WritePin (GPIOA, GPIO_PIN_10, RESET);
		break;
	case 7:
		HAL_GPIO_WritePin (GPIOA, GPIO_PIN_11, RESET);
		break;
	case 8:
		HAL_GPIO_WritePin (GPIOA, GPIO_PIN_12, RESET);
		break;
	case 9:
		HAL_GPIO_WritePin (GPIOA, GPIO_PIN_13, RESET);
		break;
	case 10:
		HAL_GPIO_WritePin (GPIOA, GPIO_PIN_14, RESET);
		break;
	case 11:
		HAL_GPIO_WritePin (GPIOA, GPIO_PIN_15, RESET);
		break;
	}
}
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  /* USER CODE BEGIN 2 */

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  clearAllClock();
  int hour = 3;
  int minute = 10;
  int second = 0;
  while (1)
  {
	  clearAllClock();
	  clockDisplay(hour, minute, second);
	  second++;
	  if (second >= 60){
		  second = 0;
		  minute++;
	  }
	  if (minute >= 60){
		  minute = 0;
		  hour++;
	  }
	  if (hour >= 12){
		  hour = 0;
	  }
    /* USER CODE END WHILE */
	  HAL_Delay(1000);
    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4|GPIO_PIN_5|GPIO_PIN_6|GPIO_PIN_7
                          |GPIO_PIN_8|GPIO_PIN_9|GPIO_PIN_10|GPIO_PIN_11
                          |GPIO_PIN_12|GPIO_PIN_13|GPIO_PIN_14|GPIO_PIN_15, GPIO_PIN_RESET);

  /*Configure GPIO pins : PA4 PA5 PA6 PA7
                           PA8 PA9 PA10 PA11
                           PA12 PA13 PA14 PA15 */
  GPIO_InitStruct.Pin = GPIO_PIN_4|GPIO_PIN_5|GPIO_PIN_6|GPIO_PIN_7
                          |GPIO_PIN_8|GPIO_PIN_9|GPIO_PIN_10|GPIO_PIN_11
                          |GPIO_PIN_12|GPIO_PIN_13|GPIO_PIN_14|GPIO_PIN_15;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/