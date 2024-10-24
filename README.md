# PIC Microcontroller Architecture and Applications

* The PIC microcontroller was introduced by Microchip Technologies in the year 1993. Originally these PIC were developed to be a part of **PDP** (Programmed Data Processor) Computers and each peripheral devices of the computer were interfaced using this **PIC microcontroller**. Hence the PIC gets its name as for **Peripheral Interface Controller**.

* PIC is based on **Harvard architecture**.

* The **Harvard architecture** is a computer architecture that separates memory storage for instructions and data, unlike the von Neumann architecture, which uses a single memory for both. This separation allows for simultaneous access to instructions and data, enhancing processing speed. It is commonly used in embedded systems and signal processing.

![Alt text](Images\PIC_Architecture_diag.jpg)

* PIC Microcontrollers from Microchip Company are divided into 4 large families. Each family has a variety of components that provide built-in special features:

    1) The first family, PIC10 (10FXXX) - is called Low End.
    2) The second family, PIC12 (PIC12FXXX) – is called Mid-Range. 
    3) The third family is PIC16 (16FXXX).
    4) The fourth family is PIC 17/18(18FXXX)

* This repository is fully focused on development and projects related to the **PIC16F877A microcontroller**.

* PIC16F877A microcontroller is equipped with all advanced features like **SPI, I2C, and UART** etc.

* It has 3 Timers, two of which are 8-bit and one is 16-bit prescaler. These Timers are used to create timing functions in our program. They can also be used as counters. 

* It has CCP (Capture Compare and PWM) options, which helps us to generate PWM signals and read the incoming frequency signals. 

* For communication with external device, it has SPI, I2C, PSP and USART.   

* For safety purpose it is equipped with Brown-out Reset (BOR),  which helps in resetting the while program.

* The IC has 10-bit 8-channel ADC. This means, our IC can convert Analog values to digital with a resolution of 10-bit, and has 8 analog pins to read them. 

* We also have two internal comparators that can be used to compare the incoming voltage directly without actually reading them through the software.

* It has 100,000 erase/write cycle, meaning you can program it for about 100,000 times. 

* In-Circuit Serial Programming™ (ICSP™), helps us to program the IC directly using PICKIT3. 

* Debugging can be made via In-Circuit Debug (ICD). 

* Another safety feature is the Watchdog Timer (WDT), which is a self reliable timer that resets the whole program if required.

![Alt text](Images\PIC16F877A_pinout.jpg)

It is crucial to thoroughly read and understand the datasheet of the IC (Integrated Circuit) before starting any development or project. The datasheet provides essential information such as the electrical characteristics, pin configuration, operating conditions, and detailed descriptions of the various functionalities of the IC. This ensures proper usage, helps avoid potential issues, and maximizes the performance and reliability of the circuit design.

[Datasheet for PIC16F877A](PIC16F87X_DataSheet.pdf)


In order to program the PIC microcontroller we will need an **IDE (Integrated Development Environment)**, where the programming takes place. A **compiler**, where our program gets converted into MCU readable form called HEX files. An **IPE (Integrated Programming Environment)**, which is used to dump our hex file into our PIC MCUs.

**IDE**: MPLABX v3.35

**IPE**: MPLAB IPE v3.35

**Compiler**: XC8