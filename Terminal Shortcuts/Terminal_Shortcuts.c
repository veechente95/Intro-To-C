// List of useful terminal shortcuts

// How to install software and run minicom on raspberry Pi
sudo apt install minicom        // install minicom software on Raspberry Pi
minicom -h                      // show minicom options 
ls /dev/ttyUSB0                 // used to check if a USB-to-serial device (like UART) is detected by the system
sudo minicom -D /dev/ttyUSB0    // creates a connection to the serial port located at /dev/ttyUSB0
CTRL -A                         // help 
