def next_item(xs, item):
    # TODO: Implement me
    it = iter(xs)
    for i in it:
        if i == item:
           return next(it, None)
