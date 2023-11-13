// List of useful terminal shortcuts

// Miscellaneous Commands
control + c          // terminate a running program in terminal
gpio readall         // identify pins on raspberry pi
rm fileName          // delete file from directory

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

// How To Configure Raspberry Pi And Connect Over SSH
sudo raspi-config              // system options --> Wireless LAN --> add network name and password 
ssh pi@PiIpAddress            // connect to Raspberry Pi over SSH
hostname -I                   // gives you IP Address

// How To Transfer C file to Raspberry Pi
scp programName.c pi@piIpAddress:~/FolderName  // replace programName.c, piIpAddress and FolderName

// How To Run A Program in Raspberry Pi (Like A Blinking_LED.c file)
// 1) SSH conenct to raspberry Pi and run terminal inside raspberry pi
gcc -o ProgramName ProgramName.c -lwiringPi    // gcc compiler compiles the C source code from ProgramName.c, links it with the WiringPi library, and produces an executable file named "ProgramName."
./program      //  executes the compiled program

// Edit and Read C File in Terminal
nano programName.c    // You can edit and save C file directly from terminal

// How To Send Email From Raspberry Pi
sudo apt-get install ssmtp          // download ssmtp library
sudo apt-get install mailutils      // download mailutils library
sudo nano /etc/ssmtp/ssmtp.conf     // config file for gmail (add theses, exit and save --> root=username@gmail.com, AuthUser=username@gmail.com, AuthPass=password, UseSTARTTLS=YES)
echo "This is the body of the email" | mail -s "Subject" recipient@example.com      // Compose and send email


