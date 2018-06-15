import binascii

bin = ""
bin += "01000110"
bin += "01101100"
bin += "01100001"
bin += "01100111"
bin += "00111101"
bin += "00110001"
bin += "00110010"
bin += "01000101"
bin += "01011010"

a = int (bin, 2)
print binascii.unhexlify ('%x' %a)
