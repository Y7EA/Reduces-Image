# Image Processing Project: RGB Conversion

This project is a C++ program with a graphical user interface (GUI) that allows the user to convert an RGB 24-bit image into any desired number of bits for RGB determined by the user.

# Project Description

The objective of this project is to provide a tool for users to perform image processing on their personal computer. With this program, users can load an image from their PC and apply a custom RGB conversion to achieve the desired number of bits for the red, green, and blue channels of the image.

The program is written in C++ and features a graphical user interface created with Qt Creator. It leverages the basic principles of image processing to extract the RGB values for each pixel in the image and then applies the user's specified conversion to generate the output image.

# Getting Started

To use this program, you will need to have the following:

A computer running Windows or Linux operating system
C++ compiler (e.g. GCC or Visual Studio)
Qt Creator or another GUI development tool
Building the Program
Clone the project repository to your local machine.
Open the project in Qt Creator or your preferred GUI development tool.
Build and run the program.
Alternatively, you can use the command line to build the program using the following commands:

bash
Copy code
$ cd <project_directory>
$ mkdir build && cd build
$ cmake ..
$ make
# How to Use

Launch the program and click on the "Load Image" button to select an image from your PC.
Enter the desired number of bits for the red, green, and blue channels of the image.
Click on the "Convert" button to apply the RGB conversion.
The resulting image will appear alongside the input image in the GUI.
Optionally, you can save the resulting image to your PC.
# Acknowledgments

This project was completed by Yahya & Rahaf.
