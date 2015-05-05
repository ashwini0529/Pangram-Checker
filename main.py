import string

def is_pangram (gram):
    gram = gram.lower()
    gram_list_old = sorted([c for c in gram if c != ' '])
    gram_list = []
    for c in gram_list_old:
        if c not in gram_list:
            gram_list.append(c)
    if gram_list == list(string.ascii_lowercase): return True
    else: return False
