def my_languages(results):
    # your code here
    return sorted((key for key, value in results.items() if value>=60), reverse=True, key=results.get)
