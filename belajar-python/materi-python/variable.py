# variabel pada python
# ====================

"""
# dasar dari sebuah variabel pada python
x = 5
y = "Daffa"
print(x) # output 5
print(y) # output Daffa
"""

"""
# Membuat variabel lebih spesifik
x = str(3)
print(x) # ouput 3 tetapi menjadi sebuah kalimat
y = int(3)
print(y) # output 3
z = float(3)
print(z) # output 3.0
"""

"""
# Mengetahui type sebuah variabel
x = 3
print(type(x)) # output <class 'int'>
y = "Daffa"
print(type(y)) # output <class 'str'>
z = 3.0
print(type(z)) # output <class 'float'>
"""

"""
# Multiple variable
# =================
# 1. Memuat beberapa variabel dengan memperhatikan urutan
x, y, z = 1, 2, 3
print(x)
print(y)
print(z)
# output 1 2 3
# =================
# 2. Satu value memuat beberapa variabel
x = y = z = 1
print(x, y, z) # output 1 1 1
# =================
# 3. Membungkus suatu variabel yang memuat beberapa value 
buah = ["mangga", "jeruk", "pisang"]
x, y, z = buah
print(x, y, z)
# output mangga, jeruk, pisang
# =================
"""

"""
# Variabel Global
# ===============
# contoh lokal
x = "halo daf"
def myFunc():
    print(x)
myFunc()
# output adalah halo daf
# ===============
# contoh global
def myDaf():
    global x 
    x = "daffa"
myDaf()
print(x)
# outputnya adalah daffa
"""