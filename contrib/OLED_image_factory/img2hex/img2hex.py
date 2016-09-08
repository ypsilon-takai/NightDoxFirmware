#!/usr/bin/python

# img2hex.py
# image converte for SSD1308 OLED display
# 
# Copyright (c) 2016 TakaiY (ypsilon.takai@gmail.com)
# Author        :   TakaiY
# Create Time   :   2016/8
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.

# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.

# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.

            
from __future__ import print_function
from PIL import Image
import sys

def convert_to_hex (image_in):
    '''
    :type image_in : Image
    '''
    (width, height) = image_in.size
    img = image.convert("L")

    hexlist = []
    for page in range(0, int(height / 8.0), 1):
        hex_page = []
        for col in range(0, width):
            data = ""
            for pix in range(7, -1, -1):
                v = img.getpixel((col, page * 8 + pix))
                if v < 128:
                    data += "1"
                else:
                    data += "0"
            hex_page.append("0x{0:02x}, ".format(int(data, 2)))
        hexlist.append(hex_page)
    return hexlist


if __name__ == "__main__":
    image_file = sys.argv[1]

    image = Image.open(image_file)
    (width, height) = image.size
    print ("width = {0}, height = {1}".format(width, height))
    if (height % 8 != 0):
        print ("WARNING : The image's height is not multiple of eight. It may cut off!!")

    hex_list = convert_to_hex(image)
    print ("\nconst static unsigned char Image[] PROGMEM ={")
    for page in hex_list:
        for col in page:
            print (col, end='')
        print ("")
    print ("}")
