import webbrowser as wb

new = 2

#url = "http://www.deezer.com"
url = 'https://www.deezer.com/ajax/gw-light.php?method=tracklist.getShuffledCollection&input=3&api_version=1.0&api_token=C7Co3P2w~LHiPcFozE5WRttI63njkNY9&cid=18543782'

wb.get('firefox').open(url, new=2, autoraise=False)

'''
from selenium import webdriver
#from selenium.webdriver.firefox.options import Options
#options = Options()
#options.add_argument('--headless')
driver = webdriver.Firefox()
driver.get('https://www.deezer.com')
#play = driver.findElement(By.className('c011'))
#play.click()
'''
