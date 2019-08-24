#include <stdio.h>
#include <string.h>

int main()
{
    char temp, ext[7];

    while (temp != '.')
    {
        scanf("%c", &temp);
    }

    scanf("%s", ext);

    if (strncmp(ext, "dib", 3) == 0)
    {
        printf("Paint.Picture");
    }
    else if (strncmp(ext, "docx", 4) == 0)
    {
        printf("Word.Document.12");
    }
    else if (strncmp(ext, "doc", 3) == 0)
    {
        printf("Word.Document.8");
    }
    else if (strncmp(ext, "html", 4) == 0)
    {
        printf("htmlfile");
    }
    else if (strncmp(ext, "htm", 3) == 0)
    {
        printf("htmfile");
    }
    else if (strncmp(ext, "hwpx", 4) == 0)
    {
        printf("Hwp.Document.hwpx.96");
    }
    else if (strncmp(ext, "hwp", 3) == 0)
    {
        printf("Hwp.Document.96");
    }
    else if (strncmp(ext, "hwt", 3) == 0)
    {
        printf("Hwp.Document.hwt.96");
    }
    else if ((strncmp(ext, "jpe", 3) == 0) || (strncmp(ext, "jpeg", 4) == 0) || (strncmp(ext, "jpg", 3) == 0))
    {
        printf("jpegfile");
    }
    else if (strncmp(ext, "pptxml", 6) == 0)
    {
        printf("powerpointxmlfile");
    }
    else if (strncmp(ext, "pptx", 4) == 0)
    {
        printf("PowerPoint.Show.12");
    }
    else if (strncmp(ext, "ppt", 3) == 0)
    {
        printf("PowerPoint.Show.8");
    }
    
    return 0;
}
