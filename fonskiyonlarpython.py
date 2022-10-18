# def asalsayibul(sayi1,sayi2):
#     for sayi in range(sayi1 , sayi2+1):
#         if sayi>1:
#             for i in range(2,sayi):
#                 if (sayi%i==0):
#                     break
        
#             else: 
#                     print(sayi)

# sayi1=int(input("sayi1:"))
# sayi2=int(input("sayi2:"))   

# asalsayibul(sayi1 , sayi2)




# def tambolenleribul(sayi):
#     tambolenler=[]

#     for i in range(1,sayi+1):
#         if(sayi%i==0):
#             tambolenler.append(i)
#     return tambolenler

# print(tambolenleribul(20))           



def square(num):
    return num**2

numbers=[1,3,5,9]
result=list(map(square, numbers))
print(result)








