#include <Arduino.h>

// OV7670 pin connections
#define OV7670_VSYNC 32
#define OV7670_HREF 33
#define OV7670_PCLK 25
#define OV7670_D0 12
#define OV7670_D1 13
#define OV7670_D2 14
#define OV7670_D3 15
#define OV7670_D4 16
#define OV7670_D5 17
#define OV7670_D6 18
#define OV7670_D7 19

// VGA Resolution
const int imageWidth = 640;
const int imageHeight = 480;

// Buffer
uint8_t imageBuffer[imageWidth * imageHeight];

// Read a byte of pixel data from D0-D7
uint8_t read_camera_data()
{
  uint8_t byte = 0;
  byte |= digitalRead(OV7670_D0) << 0;
  byte |= digitalRead(OV7670_D1) << 1;
  byte |= digitalRead(OV7670_D2) << 2;
  byte |= digitalRead(OV7670_D3) << 3;
  byte |= digitalRead(OV7670_D4) << 4;
  byte |= digitalRead(OV7670_D5) << 5;
  byte |= digitalRead(OV7670_D6) << 6;
  byte |= digitalRead(OV7670_D7) << 7;
  return byte;
}

// Capture an image
void capture_image()
{
  int pixel_index = 0;

  // Wait for VSYNC to signal
  while (digitalRead(OV7670_VSYNC) == LOW)
    ;
  while (digitalRead(OV7670_VSYNC) == HIGH)
    ;

  // Loop through rows and columns
  for (int row = 0; row < imageHeight; row++)
  {
    // Wait for HREF high to start capturing
    while (digitalRead(OV7670_HREF) == LOW)
      ;

    for (int col = 0; col < imageWidth; col++)
    {
      while (digitalRead(OV7670_PCLK) == LOW)
        ;
      imageBuffer[pixel_index++] = read_camera_data();
      while (digitalRead(OV7670_PCLK) == HIGH)
        ;
    }
    while (digitalRead(OV7670_HREF) == HIGH)
      ;
  }
}

// Send captured image data via Serial
void send_image_via_serial()
{
  Serial.println("START");
  Serial.println(imageWidth);
  Serial.println(imageHeight);

  // Send each pixel data
  for (int i = 0; i < imageWidth * imageHeight; i++)
  {
    Serial.write(imageBuffer[i]);
  }

  Serial.println("END");
}

void setup()
{
  Serial.begin(115200);
  pinMode(OV7670_VSYNC, INPUT);
  pinMode(OV7670_HREF, INPUT);
  pinMode(OV7670_PCLK, INPUT);
  pinMode(OV7670_D0, INPUT);
  pinMode(OV7670_D1, INPUT);
  pinMode(OV7670_D2, INPUT);
  pinMode(OV7670_D3, INPUT);
  pinMode(OV7670_D4, INPUT);
  pinMode(OV7670_D5, INPUT);
  pinMode(OV7670_D6, INPUT);
  pinMode(OV7670_D7, INPUT);
}

void loop()
{
  // Capture the image
  capture_image();

  // Send the captured image
  send_image_via_serial();

  delay(10000);
}