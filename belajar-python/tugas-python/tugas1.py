a = str(input("Masukkan nama = "))
b = int(input("Masukkan NIM = "))
if a == "Muhamad Daffa Maulana Arrasyid" and b == 312210335:
	# tampilan selamat datang
	hello = str('''
		============================
		=   Selamat Datang Daffa   =
		============================
		''')
	print(hello)

	# tampian input nilai persegi panjang
	pp = str('''
		Menghitung Luas Persegi Panjang
		-------------------------------
		''')
	print(pp)
	panjang = int(input("Masukkan nilai panjang = "))
	lebar = int(input("Masukkan nilai lebar = "))
	hasilPp = panjang * lebar
	print("Hasilnya adalah = ", hasilPp)

	# tampian input nilai setengah lingkaran
	lingkaran = str('''
		Menghitung Luas Setengah Lingkaran
		----------------------------------
		''')
	print(lingkaran)
	r = int(input("Masukkan nilai r = "))
	phi = float(input("Masukkan nilai phi = "))
	hasilL = 0.5 * phi * r * r 
	print("Hasilnya adalah = ", float(hasilL))	

	# tampilan menghiung segitiga
	segitiga = str('''
		Menghitung Luas Segitiga
		------------------------
		''')
	print(segitiga)
	alas = int(input("Masukkan nilai alas = "))
	tinggi = float(input("Masukkan nilai tinggi = "))
	hasilS = 0.5 * alas * tinggi
	print("Hasilnya adalah = ", float(hasilS))

	# menghitung gabungan nilai dari persegi panjang dan setengah lingkaran
	hasilDB = hasilPp + hasilL
	print("Hasil dari gabungan Persegi panjang dan Setengah Lingkaran adalah = ", hasilDB)

	# menghitung gabungan nilai dari persegi panjang, setengah lingkaran, dan segitiga
	hasilTB = hasilDB + hasilS
	print("Hasil dari gabungan Persegi panjang, Setengah Lingkaran, dan Persegi adalah = ", hasilTB)




else:
	print("salah")
