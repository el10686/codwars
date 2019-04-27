int enough(int cap, int on, int wait)
{
  if(cap - on - wait >= 0) return 0;
  else return (wait - (cap - on));
}
