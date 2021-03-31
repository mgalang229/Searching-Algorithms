// By FEU Tech
void search(const int a[ ], size_tfirst, size_tsize, int target, bool& found, size_t& location) 
{
  size_tmiddle;
  if(size == 0) found = false;
  else {
    middle = first + size/2;
    if(target == a[middle]){
      location = middle;
      found = true;
      }
    else if (target < a[middle])   
      // target is less than middle, so search subarray before middle
      search(a, first, size/2, target, found, location);
    else 
      // target is greater than middle, so search subarray after middle
      search(a, middle+1, (size-1)/2, target, found, location);
  }
}
