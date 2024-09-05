# OV7670 Camera Data Readings

Capturing an image data and understanding the timing diagrams for key control signals such as VSYNC, HREF, and PCLK.

## Overview

The OV7670 camera module outputs image data in a parallel format using 8 data lines (D0-D7). In order to capture this data, it required to synchronize with three control signals:

- VSYNC: Vertical synchronization, indicates the start of a new frame.
- HREF: Horizontal reference, indicates valid data on each row.
- PCLK: Pixel clock, synchronizes the reading of pixel data.
- Timing Diagrams

## 1. VSYNC (Vertical Sync)

- Purpose: Signals the start of a new frame.
- Duration: High during the vertical blanking interval (when no image data is transmitted).
- Behavior: When VSYNC goes high, it indicates the end of the previous frame and the start of a new frame.

## 2. HREF (Horizontal Reference)

- Purpose: Indicates valid pixel data in the current row.
- Duration: High when valid pixel data is available in the current row.
- Behavior: HREF is high for the duration of each row, and low when transitioning to the next row.
  HREF Timing Diagram (within one frame):

## 3. PCLK (Pixel Clock)

- Purpose: Synchronizes the transfer of pixel data. Each rising (or falling) edge of PCLK signifies that a new pixel value is available on the data lines.
- Behavior: Every pulse of PCLK indicates a valid pixel. The ESP32 must sample the data lines (D0-D7) on each rising edge of PCLK.

## 4. D[0:7] (Pixel Data)

Output pixel data in an 8-bit parallel format. These data lines are labeled from D0 to D7 and represent one byte (8 bits) of pixel data at a time. OV7670 supports three types of pixel data.

### RGB565
<hr/>

![](https://github.com/TharushaDinujaya/Depth-VisionX/blob/main/assets/RGB565.png)

<br/>

### RGB555
<hr/>

![](https://github.com/TharushaDinujaya/Depth-VisionX/blob/main/assets/RGB555.png)

<br/>

### RGB444
<hr/>

![](https://github.com/TharushaDinujaya/Depth-VisionX/blob/main/assets/RGB444.png)

<br/>

## Timing Diagram

![Timing Diagram](https://github.com/TharushaDinujaya/Depth-VisionX/blob/main/assets/VGAFrame.png)
