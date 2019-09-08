
'''
            COLUMNAR TRANSPOSITION CIPHER DECRYPTION
SMAPLE OUTPUT
Enter the Cipher text
wseo_lywceaa lm
Enter the key
spm
Decryped Message:
always welcome
'''

import math

# Decryption 
def decryptMessage(cipher): 
	msg = "" 

	# track key indices 
	k_indx = 0

	# track msg indices 
	msg_indx = 0
	msg_len = float(len(cipher))#length of messege 
	msg_lst = list(cipher)#make cipher text string into message list
	
	# calculate column of the matrix 
	col = len(key) 
	
	# calculate maximum row of the matrix 
	row = int(math.ceil(msg_len / col)) 

	# convert key into list and sort 
	# alphabetically so we can access 
	# each character by its alphabetical position. 
	key_lst = sorted(list(key)) 

	# create an empty matrix to 
	# store deciphered message 
	dec_cipher = [] 
	for _ in range(row): 
		dec_cipher += [[None] * col] 

	# Arrange the matrix column wise according 
	# to permutation order by adding into new matrix 
	for _ in range(col): 
		curr_idx = key.index(key_lst[k_indx]) 

		for j in range(row): 
			dec_cipher[j][curr_idx] = msg_lst[msg_indx] 
			msg_indx += 1
		k_indx += 1

	# convert decrypted msg matrix into a string 
	try: 
		msg = ''.join(sum(dec_cipher, [])) 
	except TypeError: 
		raise TypeError("This program cannot", 
						"handle repeating words.") 

	null_count = msg.count('_') 
        #to remove padding character
	if null_count > 0: 
		return msg[: -null_count] 

	return msg 



#Execution code
print("")
cipher=input("Enter the Cipher text\n")
key=input("Enter the key\n")

msg=decryptMessage(cipher)
print("Decryped Message:")
print(format(msg)) 
