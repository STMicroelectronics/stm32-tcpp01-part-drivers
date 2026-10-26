# origin-pack: STMicroelectronics::tcpp01_part_drivers@2.0.0
# file-format: 1.0.0
project(STMicroelectronics_tcpp01_part_drivers_2_0_0)
cmake_minimum_required(VERSION 3.30)
add_library(STMicroelectronics_tcpp01_part_drivers_2_0_0 INTERFACE)

# List of all CMSIS properties that influence conditions for this package


# Device specific defined symbols








# Enable all components in this package
if(CMSIS_ENTIRE_STMicroelectronics_tcpp01_part_drivers_2_0_0)
  list(APPEND CMSIS_COMPONENTS_LIST "Cvendor:STMicroelectronics#Cclass:Board Part#Cgroup:USBPD#Csub:TCPP01 Core#Cversion:1.0.0")
  list(APPEND CMSIS_COMPONENTS_LIST "Cvendor:STMicroelectronics#Cclass:Board Part#Cgroup:USBPD#Csub:TCPP01 IO#Cvariant:ADC EXTI#Cversion:1.0.0")
  list(APPEND CMSIS_COMPONENTS_LIST "Cvendor:STMicroelectronics#Cclass:Board Part#Cgroup:USBPD#Csub:TCPP01 IO#Cvariant:Custom#Cversion:1.0.0")
endif()

# All conditions used by this package

# condition: STMicroelectronics.tcpp01_part_drivers.2.0.0:TCPP01 CFG Condition
# description: STMicroelectronics configuration for TCPP01 part driver
set(STMicroelectronics.tcpp01_part_drivers.2.0.0_TCPP01_CFG_Condition "1")
message(DEBUG "CMSIS condition STMicroelectronics.tcpp01_part_drivers.2.0.0_TCPP01_CFG_Condition enabled")


# condition: STMicroelectronics.tcpp01_part_drivers.2.0.0:TCPP01 Core Condition
# description: STMicroelectronics TCPP01 Core Driver
set(STMicroelectronics.tcpp01_part_drivers.2.0.0_TCPP01_Core_Condition "$<NOT:$<STREQUAL:$<FILTER:${CMSIS_COMPONENTS_LIST},INCLUDE,.*Cclass:Board Part#.*Cgroup:USBPD#.*Csub:TCPP01 IO(#.*|$)>,>>")
message(DEBUG "CMSIS condition STMicroelectronics.tcpp01_part_drivers.2.0.0_TCPP01_Core_Condition enabled")


# condition: STMicroelectronics.tcpp01_part_drivers.2.0.0:TCPP01 Custom IO Condition
# description: 
set(STMicroelectronics.tcpp01_part_drivers.2.0.0_TCPP01_Custom_IO_Condition "1")
message(DEBUG "CMSIS condition STMicroelectronics.tcpp01_part_drivers.2.0.0_TCPP01_Custom_IO_Condition enabled")


# condition: STMicroelectronics.tcpp01_part_drivers.2.0.0:TCPP01 IO ADC EXTI Condition
# description: STMicroelectronics TCPP01 IO ADC Polling and EXTI Drivers
set(STMicroelectronics.tcpp01_part_drivers.2.0.0_TCPP01_IO_ADC_EXTI_Condition "$<AND:$<NOT:$<STREQUAL:$<FILTER:${CMSIS_COMPONENTS_LIST},INCLUDE,.*Cclass:Device#.*Cgroup:STM32 HAL#.*Csub:ADC(#.*|$)>,>>,$<NOT:$<STREQUAL:$<FILTER:${CMSIS_COMPONENTS_LIST},INCLUDE,.*Cclass:Device#.*Cgroup:STM32 HAL#.*Csub:EXTI(#.*|$)>,>>>")
message(DEBUG "CMSIS condition STMicroelectronics.tcpp01_part_drivers.2.0.0_TCPP01_IO_ADC_EXTI_Condition enabled")

# Files and components in this package
if("Cvendor:STMicroelectronics#Cclass:Board Part#Cgroup:USBPD#Csub:TCPP01 Core#Cversion:1.0.0" IN_LIST CMSIS_COMPONENTS_LIST)  # Driver for TCPP01 part
  message(DEBUG "Using component Board_Part_USBPD_TCPP01_Core_1_0_0")
  target_compile_definitions(STMicroelectronics_tcpp01_part_drivers_2_0_0 INTERFACE "$<${STMicroelectronics.tcpp01_part_drivers.2.0.0_TCPP01_Core_Condition}:-DCMSIS_USE_Board_Part_USBPD_TCPP01_Core_1_0_0=1>")
  target_include_directories(STMicroelectronics_tcpp01_part_drivers_2_0_0 INTERFACE "$<${STMicroelectronics.tcpp01_part_drivers.2.0.0_TCPP01_Core_Condition}:${CMAKE_CURRENT_LIST_DIR}/.>")
  target_sources(STMicroelectronics_tcpp01_part_drivers_2_0_0 INTERFACE "$<${STMicroelectronics.tcpp01_part_drivers.2.0.0_TCPP01_Core_Condition}:${CMAKE_CURRENT_LIST_DIR}/tcpp01.c>")
endif()

if("Cvendor:STMicroelectronics#Cclass:Board Part#Cgroup:USBPD#Csub:TCPP01 IO#Cvariant:ADC EXTI#Cversion:1.0.0" IN_LIST CMSIS_COMPONENTS_LIST)  # ADC EXTI IO for TCPP01 part
  message(DEBUG "Using component Board_Part_USBPD_TCPP01_IO_ADC_EXTI_1_0_0")
  target_compile_definitions(STMicroelectronics_tcpp01_part_drivers_2_0_0 INTERFACE "$<${STMicroelectronics.tcpp01_part_drivers.2.0.0_TCPP01_IO_ADC_EXTI_Condition}:-DCMSIS_USE_Board_Part_USBPD_TCPP01_IO_ADC_EXTI_1_0_0=1>")
  target_include_directories(STMicroelectronics_tcpp01_part_drivers_2_0_0 INTERFACE "$<${STMicroelectronics.tcpp01_part_drivers.2.0.0_TCPP01_IO_ADC_EXTI_Condition}:${CMAKE_CURRENT_LIST_DIR}/interfaces/adc_exti>")
  target_sources(STMicroelectronics_tcpp01_part_drivers_2_0_0 INTERFACE "$<${STMicroelectronics.tcpp01_part_drivers.2.0.0_TCPP01_IO_ADC_EXTI_Condition}:${CMAKE_CURRENT_LIST_DIR}/interfaces/adc_exti/tcpp01_io.c>")
endif()

if("Cvendor:STMicroelectronics#Cclass:Board Part#Cgroup:USBPD#Csub:TCPP01 IO#Cvariant:Custom#Cversion:1.0.0" IN_LIST CMSIS_COMPONENTS_LIST)  # Custom I/O layer for TCPP01 part
  message(DEBUG "Using component Board_Part_USBPD_TCPP01_IO_Custom_1_0_0")
  target_compile_definitions(STMicroelectronics_tcpp01_part_drivers_2_0_0 INTERFACE "$<${STMicroelectronics.tcpp01_part_drivers.2.0.0_TCPP01_Custom_IO_Condition}:-DCMSIS_USE_Board_Part_USBPD_TCPP01_IO_Custom_1_0_0=1>")
  target_include_directories(STMicroelectronics_tcpp01_part_drivers_2_0_0 INTERFACE "$<${STMicroelectronics.tcpp01_part_drivers.2.0.0_TCPP01_Custom_IO_Condition}:${CMAKE_CURRENT_LIST_DIR}/interfaces/custom>")
  target_sources(STMicroelectronics_tcpp01_part_drivers_2_0_0 INTERFACE "$<${STMicroelectronics.tcpp01_part_drivers.2.0.0_TCPP01_Custom_IO_Condition}:${CMAKE_CURRENT_LIST_DIR}/interfaces/custom/tcpp01_io.c>")
endif()

