# question : 

## Basic select 

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
  `seletc distinct city from station where city not rlike '^[aeiou]' and city not like '[aeiou]$';

## Advance select 


## Aggregation 
