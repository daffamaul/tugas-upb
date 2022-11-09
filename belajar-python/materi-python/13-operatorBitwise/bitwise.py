#operator bitwise
a = 9
b = 5

#bitwise (|)
c = a | b
print('==========OR==========')
print('nilai : ',a,'binner : ',format(a, '08b'))
print('nilai : ',b,'binner : ',format(b, '08b'))
print('------------------------------(|)')
print('nilai : ',c,'binner : ',format(c, '08b'))
''' outputnya, nilai :  13 binner :  00001101 '''

#bitwise (&)
c = a & b
print('==========AND==========')
print('nilai : ',a,'binner : ',format(a, '08b'))
print('nilai : ',b,'binner : ',format(b, '08b'))
print('------------------------------(&)')
print('nilai : ',c,'binner : ',format(c, '08b'))
''' outputnya, nilai :  1 binner :  00000001 '''

#bitwise XOR (^)
''' salah satunya harus ada yang salah 
	atau benar untuk menghasilkan nilai (1) '''
c = a ^ b
print('==========XOR==========')
print('nilai : ',a,'binner : ',format(a, '08b'))
print('nilai : ',b,'binner : ',format(b, '08b'))
print('------------------------------(XOR)')
print('nilai : ',c,'binner : ',format(c, '08b'))
''' outputnya, nilai :  12 binner :  00001100 '''

#bitwise NOT (~)
c = ~a
print('==========NOT==========')
print('nilai : ',a,'binner : ',format(a, '08b'))
print('------------------------------(~)')
print('nilai : ',c,'binner : ',format(c, '08b'))
''' outputnya, nilai :  -10 binner :  -0001010 ''' 















