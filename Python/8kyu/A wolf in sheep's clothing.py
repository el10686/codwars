def warn_the_sheep(queue):
    if queue[-1] == 'wolf':
        return 'Pls go away and stop eating my sheep'
    
    i = queue[::-1].index('wolf')
    return 'Oi! Sheep number {}! You are about to be eaten by a wolf!'.format(i)
