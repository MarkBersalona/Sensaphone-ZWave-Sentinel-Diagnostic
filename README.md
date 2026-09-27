# Sensaphone ZWave Sentinel Diagnostic tool
<img src="Sensaphone 400 Cellular Diagnostic 20230314.png" alt="Sensaphone 400 Cellular screenshot, 2023.03.14" />

This is the Diagnostic tool for the **Sensaphone ZWave Sentinel**

- Runs in a Debian-based Linux distribution, like Linux Mint. (It can probably run in an Arch- or Fedora- or other non-Debian Linux distro, I simply haven't tried building it in one yet.)
- Connects to the serial debug port of the 400 Cellular via serial-to-USB converter; expects 
connection to the ttyUSB0 device
- Works best on a 1920x1080 or larger display

## Prerequisites
Requires the GTK 3 library. To install:

```
sudo apt-get update
sudo apt-get install libgtk-3-dev
```

## Build instructions
1. Clone Sensaphone-ZWave-Sentinel-Diagnostic. If you're reading this, you're already likely in my 
GitHub project for Sensaphone-ZWave-Sentinel-Diagnostic, but if you're not it's at 
https://github.com/MarkBersalona/Sensaphone-ZWave-Sentinel-Diagnostic
3. In a terminal move to the directory in which the repository has been cloned. Example: on my Linux 
laptop I cloned it to /home/mark/GTKProjects/Sensaphone-ZWave-Sentinel-Diagnostic
4. From the terminal use the following command: `make`
5. If all goes well, the application 'zwave_sentinel_diagnostic' will be in ../dist/Debug/GNU-Linux *and* in the current directory
6. Run zwave_sentinel_diagnostic
   - Will need a USB-to-serial cable and a Sensaphone serial card
   - Plug USB end into the Linux PC, the serial end to the Sensaphone serial card; plug the wire header onto the ZWave Sentinel serial debug port (take care to orient correctly!)
   - Run the zwave_sentinel_diagnostic app in the application directory, the one with the .glade and .css files. The app expects to find and read these files in the same directory where it itself is located.

### Problem recognizing ttyUSB0?
First, **verify the USB-to-serial cable is plugged into a USB port**. (I know, obvious, but I forgot to plug it in while testing these instructions.)

In some instances the tool might not immediately recognize ttyUSB0, the Linux device for a USB-to-serial converter, or allow non-root access to it. See https://askubuntu.com/questions/133235/how-do-i-allow-non-root-access-to-ttyusb0 for a detailed explanation, but what's worked for me is the following:
1. Confirm ttyUSB0 is in the user group 'dialout'
```
stat /dev/ttyUSB0
```
2. Add the user to the dialout group using the following command
```
sudo usermod -a -G dialout $USER
```
3. Logout and log back into the account. The tool should recognize ttyUSB0 and work correctly.
4. (Optional) Verify the user is included in the dialout group. The following command lists the groups to which the user belongs
```
sudo groups $USER
```


## ZWave Sentinel Description


## Diagnostic Description

<img src="400 Cellular Diagnostic block diagram.png" alt="Sensaphone 400 Cellular Diagnostic block diagram" />

### Summary


### Details




## Suggested changes

