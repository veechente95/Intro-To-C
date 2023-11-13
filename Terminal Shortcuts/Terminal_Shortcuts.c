// List of useful terminal shortcuts

// How to install software and run minicom on raspberry pi
sudo apt install minicom        // install minicom software on Raspberry Pi
minicom -h                      // show minicom options 
ls /dev/ttyUSB0                 // used to check if a USB-to-serial device (like UART) is detected by the system
sudo minicom -D /dev/ttyUSB0    // creates a connection to the serial port located at /dev/ttyUSB0
CTRL -A                         // help 

// Install Wiring Pi Library
sudo apt-get update            // update package
git clone https://github.com/WiringPi/WiringPi.git  // clone wiringPi github directory
cd WiringPi                    // navigate to the WiringPi Directory

// How to configure raspberry pi
sudo raspi-config              // system options --> Wireless LAN --> add network name and password 

// Connect to Raspberry Pi Over SSH
ssh pi@PiIpAddress            // connect to Raspberry Pi over SSH
hostname -I                   // gives you IP Address

