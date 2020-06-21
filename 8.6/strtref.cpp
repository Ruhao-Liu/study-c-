#include<iostream>
#include<string>
using namespace std;
struct free_throws
{
	string name;
	int made;
	int attempts;
	float percent;
};

void display(const free_throws& ft);
void set_pc(free_throws& ft);
free_throws& accumlate(free_throws& target, const free_throws& source);

int main()
{
	free_throws one = { "Ifelsa Branch",13,14 };
	free_throws two = { "Andor Knott",10,16 };
	free_throws three = { "Minnie MAX",7,9 };
	free_throws four = { "Whily looper",5,9 };
	free_throws five = { "Long Long",6,14 };
	free_throws team = { "Throwgoods",0,0 };

	free_throws dup;

	set_pc(one);
	display(one);
	accumlate(team, one);
	display(team);

	display(accumlate(team, two));
	accumlate(accumlate(team, two),four);
	display(team);

	dup = accumlate(team, five);
	cout << "Displaying team:" << endl;
	display(team);
	cout << "Displaying dup after assignment:" << endl;
	display(dup);
	set_pc(four);

	accumlate(dup, five) = four;
	cout << "Displaying dup after ill-advised assignment:" << endl;
	display(dup);
	return 0;
}
void display(const free_throws& ft)
{
	cout << "Name: " << ft.name << endl;
	cout << " Made: " << ft.made << "\t";
	cout << "Attempts: " << ft.attempts << "\t";
	cout << "Percent: " << ft.percent << endl;
}

void set_pc(free_throws& ft)
{
	if (ft.attempts != 0)
		ft.percent = 100.0f * float(ft.made) / float(ft.attempts);
	else
		ft.percent = 0;
}

free_throws& accumlate(free_throws& target, const free_throws& source)
{
	target.attempts += source.attempts;
	target.attempts += source.made;
	set_pc(target);
	return target;
}