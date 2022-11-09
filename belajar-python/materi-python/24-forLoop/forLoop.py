#standar
'''
fruits = ["mangga", "jambu", "sirsak"]
for x in fruits:
	print(x)
output:
mannga 
jambu
sirsak
'''

#looping pada string
'''
for x in "mangga":
	print(x)
output:
m
a
n
g
g
a
'''

#break statement (berhenti di variabel tertentu)
'''
fruits = ["mangga", "jambu", "sirsak"]
for x in fruits:
	print(x)
	if x == "jambu":
		break
output:
mangga
jambu
'''

#continue statement (skip variabel tertentu)
'''
fruits = ["mangga", "jambu", "sirsak"]
for x in fruits:
	if x == "jambu":
		continue
	print(x)
output:
mangga
sirsak
'''

#nested looping
'''
adj = ['mangga', 'jambu', 'sirsak']
fruits = ['asem', 'manis', 'pait']
for x in adj:
	for y in fruits:
		print(x, y)
output:
mangga asem                                                                                                                                                                              
mangga manis                                                                                                                                                                             
mangga pait                                                                                                                                                                              
jambu asem                                                                                                                                                                               
jambu manis                                                                                                                                                                              
jambu pait                                                                                                                                                                               
sirsak asem                                                                                                                                                                              
sirsak manis
sirsak pait
'''                                                                                                                                                                             
