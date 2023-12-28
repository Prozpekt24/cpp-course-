def exp_cal(exp):
    total = 0
    for i in exp:
        total = total + i

    return total
aryan_exp = [2000,1000,10000]
rahul_exp = [4000,500,1200]

aryan_total = exp_cal(aryan_exp)
rahul_total = exp_cal(rahul_exp)


print ("total expenses by aryan :",aryan_total)
print ("total expenses by rahul :",rahul_total)
