
def is_palindrome(s):
    s = s.lower() 
    s = ''.join(char for char in s if char.isalnum())  
    return s == s[::-1]  
string1 = "A man, a plan, a canal: Panama"
print(is_palindrome(string1))  

string2 = "race car"
print(is_palindrome(string2)) 

string3 = "hello world"
print(is_palindrome(string3))
