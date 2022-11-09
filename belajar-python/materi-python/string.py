#escape string
''' \b(backspace) \t(spasi) \n(enter)
	r''(menanggap string ) '''

#concenate string (penggabungan string)
''' 
a = "daffa"
b = "maulana"
c = a + " " + b
print(c)
outputnya, daffa maulana
 '''

'''
# string array 
a = ["Hello", "World"]
print(a[0])
# output Hello
'''

'''
# looping pada string
for x in "banana":
	print(x)
	# output b a n a n a (berderet ke bawah)
'''

'''
# periksa string (check)
txt = "Selamat datang Daffa"
if "Daffa" in txt :
	print('Daffa, ada')
	# output Daffa, ada

txt = "Selamat datang Datta"
if "Raffi" not in txt :
	print('Raffi, tidak ada')
	# output Raffi, tidak ada
'''

# Modify String
# =============
# 1. Mengganti sebuah huruf
a = "Dafa"
print(a.replace("f", "v"))
# output Dava
# 2. Split
a = "Hallo Daffa"
b = a.split(" ")
print(b)
# output ['Hallo', 'Daffa']
# 3. Format string
umur = 17
tanggal = 4
bulan = 9
tahun = 2004
bio = "Umur ku {} tanggal lahir {} - {} - {}"
print(bio.format(umur, tanggal, bulan, tahun))
# output Umur ku 17 tanggal lahir 4 - 9 - 2004

a = 'Daffa'
print(a.center(189, '-'))

username = input("Masukkan nama = ")
print(username)

























