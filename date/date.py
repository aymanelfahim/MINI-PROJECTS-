months=[
    "January",
    "February",
    "March",
    "April",
    "May",
    "June",
    "July",
    "August",
    "September",
    "October",
    "November",
    "December"
]

while True:
    try:
        date=input("date")
        if "/" in date:
            L=date.split(/)
            print(L[1]+"/"+L[0]+"/"+L[2])
            

