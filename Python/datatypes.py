# simple datatype or premitive
# a=10
# # int
# print(type(a))
# # float
# a=10.5
# print(type(a))
# a="arun"
# print(type(a))
# a=True
# print(type(a))

# complex datatype
# # list
# x = [10,320,58,76,68]
# # array is mutable -> can change the any element value with use of index
# x[2] = 98
# # print(x) 
# # print(x[1])
# # tuple
# tup = (10,320,58,76,68)
# # tuple is immutable
# # tup[0] = 78
# # print(tup)
# # set
# # it remove duplicates
# s = {10,10,10,20,20,30,30,40,40,50,50}
# #set will following the insertion sort method in dsa that's why we get an output on this order
# lis = list(s)
# print(s)
# print(lis[0])

# rollNo = {"111ME101","111ME102","111ME103","111ME104","111ME105","111ME106","111ME106","111ME101"}
# sRoll = tuple(rollNo)
# print(sRoll[1])
# print(sRoll)
# # dict
# # key value pair
# person = {
#     "name":"anandh", #name is key  anandh is value
#     "dob":1992,     #dob is key 1992 is value
#     "address":"Salem"
# }
# print(person["name"],person["dob"])
# print(person["address"])


# newList = [
#     {
#         "name":"anandh", 
#         "dob":1992,        #anandh index is 0
#         "address":"Salem",
#         "family":{
#             "Dad":"Muthu",
#             "Mom":"Mani",
#             "Siblings":"Nill"
#         }
#     },
#     {   "name":"arjun", 
#         "dob":1993,     
#         "address":"Erode",
#         "family":{
#             "Dad":"Somu",
#             "Mom":"Malini",
#             "Siblings":{
#                 "Brothers":["Kishore","Karan"],
#                 "Sisters":["Banu","Priya"]
#             }
#         }
#     },
#     {
#         "name":"Manoj", 
#         "dob":1990,     
#         "address":"Coimbatore",
#         "family":{
#             "Dad":"Sankar",
#             "Mom":"Sudha",
#             "Siblings":{
#                 "Brothers":"Nill",
#                 "Sisters":["Deepa","Divya"]
#             }
#         }
#     },

# ]
# print(newList[2]["family"]["Siblings"]["Sisters"][0],newList[2]["family"]["Dad"])


# # complex dict
# country = {
#     "countries":[
#         {"countryName":"india",
#         "nationalAnimal":"Tiger",
#         "states":["TN","KA","KL","AP","MH","MP","TL","BI","HR","PJ","DL","HP","WB","GJ"]
#         },
#         {"countryName":"USA",
#             "nationalAnimal":"Bald Eagle",
#             "states":["AL","CL","NY","NJ","OH","NV","TX","LA","WC","UT","CA","MN"]
#         },

#     ]
# }

# print(country["countries"][0]["states"][5])


#
# " country = {
#     "countries":[
#         {"countryName":"india",
#         "nationalAnimal":"Tiger",
#         "states":["TN","KA","KL","AP","MH","MP","TL","BI","HR","PJ","DL","HP","WB","GJ"]
#         },
#         {"countryName":"USA",
#             "nationalAnimal":"Bald Eagle",
#             "states":["AL","CL","NY","NJ","OH","NV","TX","LA","WC","UT","CA","MN"]
#         },

#     ]
# }" 


# dicts = {"countryName":"india",
#             "nationalAnimal":"Tiger",
#             "states":["TN","KA","KL","AP","MH","MP","TL","BI","HR","PJ","DL","HP","WB","GJ"]
#             },

# print(type(dicts))
# import json
# jsons = json.dumps(dicts)
# print(jsons)
# print(type(jsons))


