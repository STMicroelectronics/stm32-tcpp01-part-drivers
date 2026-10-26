# __TCPP01 Part Drivers__

![tag](https://img.shields.io/badge/tag-2.0.0-brightgreen.svg)
[![release note](https://img.shields.io/badge/release_note-view_html-gold.svg)](https://htmlpreview.github.io/?https://github.com/STMicroelectronics/stm32-tcpp01-part-drivers/blob/main/Release_Notes.html)

## Overview

The TCPP01 part drivers provides APIs to drive the TCPPO1 through EXTI to detect type-C cable presence and ADC for VBUS sensing.

## Description

### Peripherals initialization:

Part TCPP01 assumes that the initialization of all needed peripherals (ADC, EXTI,  GPIO) is done by the main application. After the MCU IPs have been initialized, the selected resources can be assigned to the TCPP object. This is done in `tcpp01_io_init()`, which the user application must override.
That function is called by `tcpp01_at_init()`; the `dev_id` field of the `tcpp01_io_t` structure should be used to discriminate the resources to be assigned.

## How to use it?

To use the TCPP01 part API, the application should define the `tcpp01_obj_t` object and the `tcpp01_io_init()` function to assign hardware resources to it.
The link between the two is made by `tcpp01_init()`, which should be called after all the MCU peripherals have been initialized.

Once this is successfully done, all the other part APIs can be used freely.