import requests
from bs4 import BeautifulSoup
import csv
import datetime

# Function to scrape data from the website
def scrape_data(url):
    response = requests.get(url)
    soup = BeautifulSoup(response.content, 'html.parser')
    
    # Locate the elements containing the data you want to scrape
    # Adjust these based on the structure of the website
    fuel_prices = soup.find_all('div', class_='price-container')
    
    # Extract the relevant information
    data = []
    for fuel_price in fuel_prices:
        fuel_type = fuel_price.find('h4').text.strip()
        price = fuel_price.find('h1').text.strip()
        data.append([fuel_type, price])
    
    return data

# Function to save data to a CSV file
def save_to_csv(data, filename):
    with open(filename, 'a', newline='') as file:
        writer = csv.writer(file)
        writer.writerow(['Date', 'Fuel Type', 'Price (AED)'])
        for row in data:
            writer.writerow([datetime.date.today(), row[0], row[1]])

# Main function
def main():
    url = "https://cedirates.com/fuelprices/"
    data = scrape_data(url)
    save_to_csv(data, 'fuel_prices.csv')

if __name__ == "__main__":
    main()

