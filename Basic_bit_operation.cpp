void printbin(ll n)
{
  for(int i=11;i>=0;i--)
  {
     cout<<((n>>i)&1);
  }
}
// print binary of a number

void setbit(ll &n,int pos)
{
  n=((1<<pos)|n);
}

// set the desired bit of number

void unsetbit(ll &n,int pos)
{
  n=(~(1<<pos)&n);
}
// unset a bit of a desired number

bool checkbit(ll n,int pos)
{
  return ((n>>pos)&1);
}

// check if a bit is set or not 



void togglebit(ll &n,int pos)
{
  n=(n^(1<<pos));
}

// toggle a bit . if bit is 1 turn it into 0 and if 0 turn it into 1;



void toupper(char &ch)
{
  ch=ch&'_';
}
// makes lowercase char to upper case char


void tolower(char &ch)
{
  ch=ch|' ';
}

// makes upper case char to lower case char
void unset_lsb_till(ll &n,int pos)
{
  n=(n&(~((1<<(pos+1))-1)));
}
// unset least significant bit till the desired position 

void unset_msb_till(ll &n,int pos)
{
  n=(n&((1<<(pos+1))-1));
}

// unset most significant bit till desired position

void set_bit_till(ll &n,int pos)
{
  n=(n|((1<<(pos+1))-1));
}

// set bit till desired postion

void unset_bit_till(ll &n,int pos)
{
  n=(n&(~((1<<(pos+1))-1)));
}
// unset bit till desired positon

void set_bit_inrange(ll &n,int l,int r)
{
  n=(n|(((1<<(r-l+1))-1)<<l));
}

// set bit in a range 


void unset_bit_inrange(ll &n,int l,int r)
{
  n=(n&(~(((1<<(r-l+1))-1)<<l)));
}


// unset bit in range 
