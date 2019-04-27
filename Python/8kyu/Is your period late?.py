def period_is_late(last,today,cycle_length):
    #your code here
    return (today - last).days > cycle_length
