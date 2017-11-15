#pragma once
#ifndef TVFM_H_
#define TVFM_H_

class Tv;
class Remote;


class Remote
{
public:
	enum State { Off, On };
	enum { MinVal, MaxVal = 20 };
	enum { Antenna, Cable };
	enum { TV, DVD };
	enum { Normal, Interactive };//状态变量成员，描述遥控器是处于互动模式还是常规模式
private:
	int mode;
	int key;//状态变量，是互动模式还是常规模式
public:
	//friend void Tv::Get_Remote_State(Remote & r);
	friend class Tv;
	Remote(int m = TV,int s = Normal) : mode(m),key(s) {}
	bool volup(Tv & t);
	bool voldown(Tv & t);
	void onoff(Tv & t);
	void chanup(Tv & t);
	void chandown(Tv & t);
	void set_mode(Tv & t);
	void set_input(Tv & t);
	void set_chan(Tv & t, int c);
	int show_state() { return key; }
	void change() { (key == Normal) ? key=Interactive : key=Normal; }//之前总是忘了更改key的值，只是进行比较，,,ԾㅂԾ,,
};

class Tv
{
public:
	friend void Remote::set_chan(Tv & t, int c);
	enum State { Off, On };
	enum { MinVal, MaxVal = 20 };
	enum { Antenna, Cable };
	enum { TV, DVD };

	Tv(int s = Off, int mc = 125) : state(s), volume(5), maxchannel(mc), channel(2), mode(Cable), input(TV) {}
	void onoff() { state = (state == On) ? Off : On; }//开关切换
	bool ison() const { return state == On; }//判断是否处于开的状态
	bool volup();
	bool voldown();
	void chanup();
	void chandown();
	void set_mode() { mode = (mode == Antenna) ? Cable : Antenna; }//切换电视模式
	void set_input() { input = (input == TV) ? DVD : TV; }//切换电视信号输入
	void set_chan(int c) { channel = c; }
	void settings() const;
	void Set_Remote_State(Remote & r);
private:
	int state;
	int volume;
	int maxchannel;
	int channel;
	int mode;
	int input;
};

/*把Remote类的方法定义为内联函数*/
inline bool Remote::volup(Tv & t) { return t.volup(); }
inline bool Remote::voldown(Tv & t) { return t.voldown(); }
inline void Remote::onoff(Tv & t) { return t.onoff(); }
inline void Remote::chanup(Tv & t) { return t.chanup(); }
inline void Remote::chandown(Tv & t) { return t.chandown(); }
inline void Remote::set_mode(Tv & t) { return t.set_mode(); }
inline void Remote::set_input(Tv & t) { return t.set_input(); }
inline void Remote::set_chan(Tv & t, int c) { return t.set_chan(c); }
inline void Tv::Set_Remote_State(Remote & r)
{ 
	if (ison()) 
	{ 
		r.change();
	} 
}

#endif // !TVFM_H_H
