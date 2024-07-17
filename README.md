# Cam Stream Optimizer

Capture and process images using a camera module (OV7670)

- Will be tested on ESP32, AtMega328P or STM32 initially. Thereafter Raspberry Pi Pico or other microcontrollers with high processing power will be tested with optimization
- For initial testing OV7670 camera module is used and D[8], VSync, HSync and I2C are used to communicate with the module.
- Python and C++ are used mainly for interfacing and microcontroller programming.
- Capture an image and store it on EEPROM (Internal or Externally added EEPROM ICs). Then rotate the camera 20 degrees and capture the next image.
- Once all images are captured by rotating the camera module, retrieve them from the buffers.
- Combine the images to create a panoramic view or a larger composite image. Ensure proper alignment and stitching of images to avoid overlaps or gaps.
- Apply image processing techniques to enhance clarity. This may include noise reduction, contrast adjustment, and sharpening. (Target to process the image with different types for extracting different data)
- Ensure the display resolution matches the processed image resolution for optimal clarity.

## Deployment Timeline

| Task                                                                                  | week 01                   | week 02                   | week 03                   | week 04                   | week 05                   | week 06                   | week 07                   | week 08                   | week 09                   | week 10                   | week 11                   | week 12 |
| ------------------------------------------------------------------------------------- | ------------------------- | ------------------------- | ------------------------- | ------------------------- | ------------------------- | ------------------------- | ------------------------- | ------------------------- | ------------------------- | ------------------------- | ------------------------- | ------- |
| Researching about PySerial, Image Combine and Camera Module                           | :triangular_flag_on_post: |                           |                           |                           |                           | :triangular_flag_on_post: |                           |                           | :triangular_flag_on_post: | :triangular_flag_on_post: |                           |         |
| Setup Camera Module to capture images using D[8], VS, PCLK and HS                     | :triangular_flag_on_post: | :triangular_flag_on_post: |                           |                           |                           |                           |                           |                           |                           |                           |                           |
| Develop a Python program to read data from the serial port and interpret it on screen |                           |                           | :triangular_flag_on_post: |                           |                           |                           |                           |                           |                           |                           |                           |
| Capture image using camera module and display it on monitor                           |                           |                           |                           | :triangular_flag_on_post: |                           |                           |                           |                           |                           |                           |                           |
| Capture more images and combine using python program                                  |                           |                           |                           |                           | :triangular_flag_on_post: |                           |                           |                           |                           |                           |                           |
| Design and implement rotation of camera module                                        |                           |                           |                           |                           |                           | :triangular_flag_on_post: | :triangular_flag_on_post: |                           |                           |                           |                           |
| Calibrations and testing                                                              |                           |                           |                           |                           |                           |                           |                           | :triangular_flag_on_post: | :triangular_flag_on_post: | :triangular_flag_on_post: |                           |
| Documentation                                                                         |                           |                           |                           |                           |                           |                           |                           |                           |                           |                           | :triangular_flag_on_post: |

## Required materials

[OV7670 Datasheet](https://www.electronicscomp.com/datasheet/ov7670-sensor-datasheet.pdf)
Image transfer with Serial Communication
EEPROM programming
Python Serial Library
Display an image with python cv2## Tech Stack

**Microcontroller** : C++ with register programming

**Computer** : Python, PySerial, CV2

## License

[MIT](https://choosealicense.com/licenses/mit/)
