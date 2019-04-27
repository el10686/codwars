int centuryFromYear(int year) 
{
  if(year % 100 < 1)
    return year / 100;
  
  return year / 100 + 1;
}
