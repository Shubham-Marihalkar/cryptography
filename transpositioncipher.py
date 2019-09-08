'''
                COLUMNAR TRANSPOSITION CIPHER ENCRYPTION
SAMPLE OUTPUT

Eter the key
spm
Enter the message 
always welcome
Encrypted Message:
wseo_lywceaa lm

'''


import math 

# Encryption 
def encryptMessage(msg): 
        # empty string for cipher text
	cipher = "" 

	# track key indices 
	k_indx = 0

	msg_len = float(len(msg)) 
	msg_lst = list(msg)#convert msg string to list
	key_lst = sorted(list(key))# convert key string to list
	

	# calculate column of the matrix 
	col = len(key)
	
	
	# calculate maximum row of the matrix 
	row = int(math.ceil(msg_len / col))
	

	# add the padding character '_' in empty cell of the matrix
	fill_null = int((row * col) - msg_len) #to find the starting position of empty cell
	msg_lst.extend('_' * fill_null)
	
        
	# create Matrix and insert message and 
	# padding characters row-wise 
	matrix = [msg_lst[i: i + col] 
			for i in range(0, len(msg_lst), col)]

	# read matrix column-wise using key 
	for j in range(col): 
		curr_idx = key.index(key_lst[k_indx])# to track the current index
		cipher += ''.join([row[curr_idx] for row in matrix])# to read the current indexth column  adn copy to cipher
		k_indx += 1

	return cipher 


#Execution code
key =input("Eter the key\n")
msg =input("Enter the message \n")

cipher = encryptMessage(msg) 
print("Encrypted Message:")
print(format(cipher))


 
