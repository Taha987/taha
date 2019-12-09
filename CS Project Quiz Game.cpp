// CS Project Quiz Game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	char x;
	int total = 0;
	cout << "\n\t\tWELCOME TO QUIZ GAME \n";
	cout << "\nEnter your answer in the form of 'a', 'b' and 'c' only\n" << endl;
	cout << "Q1. The United nations was founded in?\n";
	cout << "a.1945\n" << "b.1940\n" << "c.1943\n";
	cout << "Answer:";
	cin >> x;
	switch (x)
	{
	case 'a':
		cout << "Correct Answer\n";
		total += 1;
		break;
	case 'b':
		cout << "Wrong Answer\n";
		break;
	case 'c':
		cout << "Wrong Answer\n";
		break;
	default:
		cout << "illigal entry\n";
	}
	cout << "\nQ2. Bull fighting is the national game of which country?\n";
	cout << "a.Spain\n" << "b.Afghanistan\n" << "c.Iran\n";
	cout << "Answer:";
	cin >> x;
	switch (x)
	{
	case 'a':
		cout << "Correct Answer\n";
		total += 1;
		break;
	case 'b':
		cout << "Wrong Answer\n";
		break;
	case 'c':
		cout << "Wrong Answer\n";
		break;
	default:
		cout << "illigal entry\n";
	}
	cout << "\nQ3. What is the value of Pi?\n";
	cout << "a.3.12\n" << "b.3.14\n" << "c.3,16\n";
	cout << "Answer:";
	cin >> x;
	switch (x)
	{
	case 'a':
		cout << "Wrong Answer\n";
		break;
	case 'b':
		cout << "Correct Answer\n";
		total += 1;
		break;
	case 'c':
		cout << "Wrong Answer\n";
		break;
	default:
		cout << "illigal entry\n";
	}
	cout << "\nQ4. When the World War 1 began?\n";
	cout << "a.1912\n" << "b.1914\n" << "c.1918\n";
	cout << "Answer:";
	cin >> x;
	switch (x)
	{
	case 'a':
		cout << "Wrong Answer\n";
		break;
	case 'b':
		cout << "Correct Answer\n";
		total += 1;
		break;
	case 'c':
		cout << "Wrong Answer\n";
		break;
	default:
		cout << "illigal entry\n";
	}
	cout << "\nQ5. At the end of which century William Shakespeare wrote the work of Hamlet?\n";
	cout << "a.14th century\n" << "b.15th century\n" << "c.16th century\n";
	cout << "Answer:";
	cin >> x;
	switch (x)
	{
	case 'a':
		cout << "Wrong Answer\n";
		break;
	case 'b':
		cout << "Wrong Answer\n";
		break;
	case 'c':
		cout << "Correct Answer\n";
		total += 1;
		break;
	default:
		cout << "illigal entry\n";
	}
	cout << "\nQ6. On which island is Mount Teide located?\n";
	cout << "a.Martinique\n" << "b.Cabrera\n" << "c.Tenerife\n";
	cout << "Answer:";
	cin >> x;
	switch (x)
	{
	case 'a':
		cout << "Wrong Answer\n";
		break;
	case 'b':
		cout << "Wrong Answer\n";
		break;
	case 'c':
		cout << "Correct Answer\n";
		total += 1;
		break;
	default:
		cout << "illigal entry\n";
	}
	cout << "\nQ7. Which is the best selling record in history?\n";
	cout << "a.Thriller-Michael Jackson\n" << "b.A King of Magic-Queen\n" << "c.Help!-The Beatles\n";
	cout << "Answer:";
	cin >> x;
	switch (x)
	{
	case 'a':
		cout << "Correct Answer\n";
		total += 1;
		break;
	case 'b':
		cout << "Wrong Answer\n";
		break;
	case 'c':
		cout << "Wrong Answer\n";
		break;
	default:
		cout << "illigal entry\n";
	}
	cout << "\nQ8. Which is the third planet of our solar system?\n";
	cout << "a.Earth\n" << "b.Mars\n" << "c.Venus\n";
	cout << "Answer:";
	cin >> x;
	switch (x)
	{
	case 'a':
		cout << "Correct Answer\n";
		total += 1;
		break;
	case 'b':
		cout << "Wrong Answer\n";
		break;
	case 'c':
		cout << "Wrong Answer\n";
		break;
	default:
		cout << "illigal entry\n";
	}
	cout << "\nQ9. Who was the wife of Adolf Hitler?\n";
	cout << "a.Anne Frank\n" << "b.Eva Braun\n" << "c.Magda Goebbels\n";
	cout << "Answer:";
	cin >> x;
	switch (x)
	{
	case 'a':
		cout << "Wrong Answer\n";
		break;
	case 'b':
		cout << "Correct Answer\n";
		total += 1;
		break;
	case 'c':
		cout << "Wrong Answer\n";
		break;
	default:
		cout << "illigal entry\n";
	}
	cout << "\nQ10. Which is the player with the most goals in his football career?\n";
	cout << "a.Pele\n" << "b.Lionel Messi\n" << "c.Josef Bican\n";
	cout << "Answer:";
	cin >> x;
	switch (x)
	{
	case 'a':
		cout << "Correct Answer\n";
		total += 1;
		break;
	case 'b':
		cout << "Wrong Answer\n";
		break;
	case 'c':
		cout << "Wrong Answer\n";
		break;
	default:
		cout << "illigal entry\n";
	}
	cout << "\nYou scored " << total << " out of 10";
	cout << "\n Thank You";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
