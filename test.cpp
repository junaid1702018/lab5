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
  bool studioquality(AudioClip& A)
  {

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
  int c,r,s;
  cout<<"channel=";
  cin>>c;
  A1.set_channel(c);
  cout<<"resolution=";
  cin>>r;
  A1.set_resolution(r);
  cout<<"samplerate=";
  cin>>s;
  A1.set_samplerate(s);
}
