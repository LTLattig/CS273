strings = ['cHOcolATE LAb', 'HoTsAuCe', 'vile', 'TURKEY BASTER', 'BooG']
print ([x.lower() if len(x) > 5 else x.upper() for x in strings])
strings2 = ([x.lower() if len(x) > 5 else x.upper() for x in strings])