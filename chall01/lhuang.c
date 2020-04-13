char g_rgb[7];

char *ft_rgb2hex(int r, int g, int b)
{
	char *hex_tab = "0123456789abcdef";

	if (r < 0 || r > 255 || g < 0 || g > 255 || b < 0 || b > 255)
		return (NULL);
	g_rgb[0] = '#';
	if (r / 16 > 0)
	{
		g_rgb[1] = hex_tab[r / 16];
		g_rgb[2] = hex_tab[r % 16];
	}
	else
	{
		g_rgb[1] = '0';
		g_rgb[2] = hex_tab[r];
	}
	if (g / 16 > 0)
	{
		g_rgb[3] = hex_tab[g / 16];
		g_rgb[4] = hex_tab[g % 16];
	}
	else
	{
		g_rgb[3] = '0';
		g_rgb[4] = hex_tab[g];
	}
	if (b / 16 > 1)
	{
		g_rgb[5] = hex_tab[b / 16];
		g_rgb[6] = hex_tab[b % 16];
	}
	else
	{
		g_rgb[5] = '0';
		g_rgb[6] = hex_tab[b];
	}
	return (g_rgb);
}
