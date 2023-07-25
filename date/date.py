while True:
    date=input("Date:").split("/")
    try:
        month,day,year=int(date[0]),int(date[1]),int(date[2]) or 
