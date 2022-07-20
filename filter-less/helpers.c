#include "helpers.h"
#include <math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
        int gray = round( (image[i][j].rgbtBlue + image[i][j].rgbtRed +image[i][j].rgbtGreen)/3.00);
        image[i][j].rgbtRed = gray;
        image[i][j].rgbtBlue = gray;
        image[i][j].rgbtGreen = gray;
        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    image[i][j].rgbtRed=image[i][j].rgbtRed*0,

    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}
