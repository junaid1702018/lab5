#include <iostream>
using namespace std;
class AudioClip
{
public:
  AudioClip()
  {
    channels=1;
    resolution=8;
    samplerate=22050;
  }
  void set_channel(int ch)
  {
    if(ch==1 or ch==2)
    {
    channels=ch;
  }
  else
  cout<<"invalid channels"<<endl;
}
  void set_resolution(int re)
  {
    if(re==8 or re==16 or re==24)
    {resolution=re;}
    else
    {
      cout<<"invalid resolution"<<endl;
    }
  }
  void set_samplerate(int sa)
  {
    if(sa==22050 or sa==44100 or sa==88200)

    {samplerate=sa;}
    else
    {
      cout<<"invalid samplerate"<<endl;
    }
  }
  int get_channel()
  {
    return channels;
  }
  int get_resolution()
  {
    return resolution;
  }
  int get_samplerate()
  {
    return samplerate;
  }
  bool studioquality()
  {
   if(channels==2 and resolution==24 and samplerate==88200)
   {
     return true;
   }
   else
   return false;
  }
  int datasize(int d)
  {
    int b;
    b=d*channels*(resolution/8)*samplerate;
    return b;
  }
private:
  int channels,resolution,samplerate;
};
int main()
{
  AudioClip A1;
  int c,r,s,count=0;
  cout<<"channel=";
  cin>>c;
  while(count!=1)
  {

    if(c==1 or c==2)
    {
      count=1;
    }

else
    {cout<<"invalid input retry"<<endl;
    cout<<"channel=";
    cin>>c;
  }

  }
  count=0;

  A1.set_channel(c);
  cout<<"resolution=";
  cin>>r;
  while(count!=1)
  {

    if(r==8 or r==16 or r==24)
    {
      count=1;
    }

else
    {cout<<"invalid input retry"<<endl;
    cout<<"resolution=";
    cin>>r;
  }

  }
  count=0;
  A1.set_resolution(r);

  cout<<"samplerate=";
  cin>>s;
  while(count!=1)
  {

    if(s==22050 or s==44100 or s==88200)
    {
      count=1;
    }

else
    {cout<<"invalid input retry"<<endl;
    cout<<"resolution=";
    cin>>s;
  }

  }
  A1.set_samplerate(s);
  cout<<"channels="<<A1.get_channel()<<endl;
  cout<<"resolution="<<A1.get_resolution()<<endl;
  cout<<"samplerate="<<A1.get_samplerate()<<endl;
  int q=A1.studioquality();
  if(q==0)
  {
    cout<<"not maximum quality"<<endl;
  }
  else
  {
    cout<<"maximum quality"<<endl;
  }
  int d;
  cout<<"duration time=";
  cin>>d;
  cout<<"bits="<<A1.datasize(d)<<endl;

}
