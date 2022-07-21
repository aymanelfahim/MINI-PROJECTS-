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
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
    image[i][j].rgbtRed=round(image[i][j].rgbtRed*0.393+image[i][j].rgbtGreen*0.769+image[i][j].rgbtBlue*0.189);
    image[i][j].rgbtGreen=round(image[i][j].rgbtRed*0.349+image[i][j].rgbtGreen*0.686+image[i][j].rgbtBlue*0.168);
    image[i][j].rgbtBlue=round(image[i][j].rgbtRed*0.272+image[i][j].rgbtGreen*0.534+image[i][j].rgbtBlue*0.131);
    if (image[i][j].rgbtRed>255)
{
    image[i][j].rgbtRed=255;
}
if (image[i][j].rgbtGreen>255)
{
     image[i][j].rgbtGreen=255;
}
if (image[i][j].rgbtBlue>255)
{
     image[i][j].rgbtBlue=255;
}



    return;
}

    }


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
