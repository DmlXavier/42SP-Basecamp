#include<unistd.h>

void	fill_zeroes(int matrix[4][4])
{
	int	row;
	int	col;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			matrix[row][col] = 0;
			col++;
		}
		row++;
	}
}

int	get_length_string(char *input)
{
	int	length;

	length = 0;
	while (input[length] != '\0')
	{
		length++;
	}
	return (length);
}

void	string_to_int(char *input, int *observers)
{
	int	string_counter;
	int	observers_counter;

	string_counter = 0;
	observers_counter = 0;
	while (input[string_counter] != '\0')
	{
		if (input[string_counter] != ' ')
		{
			observers[observers_counter] = input[string_counter] - 48;
			observers_counter++;
		}
		string_counter++;
	}
}

int	main( int argc, char *argv[] )
{
	int	observers[16];
	int	table[4][4];
	int	strLength;

	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	strLength = get_length_string(argv[1]);
	if (strLength != 31)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	string_to_int(argv[1], observers);
	fill_zeroes(table);
}
