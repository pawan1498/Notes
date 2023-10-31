# question : 

## Basic select 
- diff between two condition 
  `select condition_1 - condition_2 from table name ; `

- select one city and lenght of city with shortest name and sorted alphabetically
  `select city , length(city) from station order by lenght(city), city ASC limit 1`

- get largest and shortest city name with length 
  `https://www.hackerrank.com/challenges/weather-observation-station-5/problem?isFullScreen=true`

- city start with vowels 
  `select distinct city from station where city REGEXP '^[aeiou]';`

- city name end with vowels 
  `select distinct city from station where city REGEXP '[aeiou]$';`

  #### Note   ` ^ and $ anchor the match to the beginning and end of the value. `

- city Name start with are end with vowel 
  `select distinct city from station where city rlike '^[aeiouAEIOU].*[aeiouAEIOU]$';`

- order by last 3 chracter of word
  

- not start with vowel 
  `SELECT DISTINCT CITY FROM STATION WHERE CITY REGEXP '^[^aeiou].*';`

- not start with vowel and not end with vowel 
  `seletc distinct city from station where city not rlike '^[aeiou]' and city not like '[aeiou]$';`

- get the total sum of coulmn for all records 
  `select sum(column_name) from table_name;`

- max()
    it is used to get max value for a specific field in a table ;
    `select max(population) from table_name;`
- min()
  it is used to get min value for a specific field in a table ;
    `select min(population) from table_name;`

- 
## Advance select 


## Aggregation 
