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
int limit(int rgb)
    {
        if (rgb>255)
        {
        rgb=255;

    }
    return rgb;
    }
void sepia(int height, int width, RGBTRIPLE image[height][width])
{


    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
    int red=limit(round(image[i][j].rgbtRed*0.393+image[i][j].rgbtGreen*0.769+image[i][j].rgbtBlue*0.189));
    int green =limit(round(image[i][j].rgbtRed*0.349+image[i][j].rgbtGreen*0.686+image[i][j].rgbtBlue*0.168));
    int blue=limit(round(image[i][j].rgbtRed*0.272+image[i][j].rgbtGreen*0.534+image[i][j].rgbtBlue*0.131));
    image[i][j].rgbtRed=red;
    image[i][j].rgbtGreen=green;
    image[i][j].rgbtBlue=blue;
}

    }

return;
}

// Reflect image horizontally


void reflect(int height, int width, RGBTRIPLE image[height][width])
{
      for (int i = 0; i < height; i++)
      {
          for (int j = 0; j < round(width*0.5); j++)
          {
            int red=image[i][j].rgbtRed;
            image[i][j].rgbtRed=image[i][width-j].rgbtRed;
            image[i][width-j].rgbtRed=red;
             int green=image[i][j].rgbtGreen;
            image[i][j].rgbtGreen=image[i][width-j].rgbtGreen;
            image[i][width-j].rgbtGreen=green;
             int blue=image[i][j].rgbtBlue;
            image[i][j].rgbtBlue=image[i][width-j].rgbtBlue;
            image[i][width-j].rgbtBlue=blue;

          }
      }

    return;
}
int getblur ( int i ,int j,int height,int width, RGBTRIPLE image[height][width],int colorposition);
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE copy[height][width];
     for (int i = 0; i < height; i++)
     {
         for (int j = 0; j < height; j++)
         {
            copy [i][j]=image[i][j];
         }
     }
            for (int i=0;i<height;i++)
            {
                for(int j=0 ; j<width;j++)
                {
            image[i][j].rgbtRed = getblur(i, j, height, width, copy, 0);
            image[i][j].rgbtGreen = getblur(i, j, height, width, copy, 1);
            image[i][j].rgbtBlue = getblur(i, j, height, width, copy, 2);
                }
            }





    return;
}
int getblur ( int i ,int j,int height,int width, RGBTRIPLE image[height][width],int colorposition)
{
    int sum =0;
    int counter = 0;
     for (int k = i-1; k < i+2; k++)
    {
        for (int l = j-1; l < j+2; l++)
        {
            if ( k < 0 || l < 0 || k >= height || l >= width)
            {
                continue;


        }
        if (colorposition == 0)
            {
                sum += image[k][l].rgbtRed;
            }
            else if (colorposition == 1)
            {
                sum += image[k][l].rgbtGreen;
            }
            else
            {
                sum += image[k][l].rgbtBlue;
            }
            counter++;

        }
    }
    return round(sum/counter);
    }
