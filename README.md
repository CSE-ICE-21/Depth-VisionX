# Depth VisionX

Capture and process images using a stereo camera.

- Will be tested on ESP32, AtMega328P or STM32 initially. Thereafter Raspberry Pi Pico or other microcontrollers with high processing power will be tested with optimization
- For initial testing OV7670 camera module is used and D[8], VSync, HSync and I2C are used to communicate with the module.
- Python and C++ are used mainly for interfacing and microcontroller programming.
- Capture an image and transfer it using Serial communication to the computer.
- Once all images are transferred, process the images using OpenCV (for creating depth map) and Machine Learning Model (for object detection and extraction data in image).
- Apply image processing techniques to enhance clarity. This may include noise reduction, contrast adjustment, and sharpening.

## Development Timeline

| Task                                                                                  | week 01                   | week 02                   | week 03                   | week 04                   | week 05                   | week 06                   | week 07                   | week 08                   | 
| ------------------------------------------------------------------------------------- | ------------------------- | ------------------------- | ------------------------- | ------------------------- | ------------------------- | ------------------------- | ------------------------- | ------------------------- |
| Researching about PySerial, OpenCV and Camera Module |<img height="50" src="https://github.com/TharushaDinujaya/Depth-VisionX/blob/main/assets/arrow.png">| | | | | | | |
| Setup Camera Module to capture images & communication with computer| |<img height="50" src="https://github.com/TharushaDinujaya/Depth-VisionX/blob/main/assets/arrow.png">|<img height="50" src="https://github.com/TharushaDinujaya/Depth-VisionX/blob/main/assets/arrow.png">| | | | |
| Process image with OpenCv | | |<img height="50" src="https://github.com/TharushaDinujaya/Depth-VisionX/blob/main/assets/arrow.png">|<img height="50" src="https://github.com/TharushaDinujaya/Depth-VisionX/blob/main/assets/arrow.png">| | | |
| Creating Depth Maps | | | |<img height="50" src="https://github.com/TharushaDinujaya/Depth-VisionX/blob/main/assets/arrow.png">| | | |
| Extraction of Data | | | |<img height="50" src="https://github.com/TharushaDinujaya/Depth-VisionX/blob/main/assets/arrow.png">|<img height="50" src="https://github.com/TharushaDinujaya/Depth-VisionX/blob/main/assets/arrow.png">| | |
| Calibrations and testing | | | | | |<img height="50" src="https://github.com/TharushaDinujaya/Depth-VisionX/blob/main/assets/arrow.png">| |
| Documentation | | | | | | |<img height="50" src="https://github.com/TharushaDinujaya/Depth-VisionX/blob/main/assets/arrow.png">|

## Required materials

[OV7670 Datasheet](https://www.electronicscomp.com/datasheet/ov7670-sensor-datasheet.pdf)
Image transfer with Serial Communication
EEPROM programming
Python Serial Library
Process Image with OpenCv and PyVista

## Tech Stack
**Languages**
<br/>
<p aplign="center">
<img height="50" src="https://user-images.githubusercontent.com/25181517/192108372-f71d70ac-7ae6-4c0d-8395-51d8870c2ef0.png">
</p>

**Libraries and Frameworks**
<br/>
<p aplign="center">


</p>

<br/>
**Microcontroller** 
<p aplign="center">


</p>

<br/>
**Image Processing** 
<p aplign="center">

</p>

<br/>
**Machine Learning Integration** 
<p aplign="center">


</p>

<br/>
**Project Management**  
<p aplign="center">

</p>

<br/>
**Tools**
<p aplign="center">


</p>

## License

[MIT](https://choosealicense.com/licenses/mit/)
