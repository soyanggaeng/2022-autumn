import csv

def get_titles(books_csv):
    with open(books_csv) as books:
        reader = csv.reader(books, delimiter=',')
        get_title = lambda row: row[0]
        titles = map(get_title, reader)
        
        return list(titles)

books = 'books.csv'
titles = get_titles(books)
for title in titles:
     print(title)
