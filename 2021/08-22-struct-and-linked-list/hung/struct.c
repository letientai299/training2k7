#include <stdio.h>

struct Manga {
    char* name;
    char* publication_date;
    char* author;
    char* type;
    int rating;
};

typedef struct Manga Manga;

typedef struct Writing_Master {
    Manga manga_info;
    char* name;
    char* Japanese;
    char* born;
    char* job;
    char* creation;
    char* another_creation;
} Writing_Master;

typedef struct About_Anime {
    Manga manga_info;
    char* name;
    char* studio;
    int episode;
    char* directed;
    char* aired;
    char* aired_to;
    float rating;
} About_Anime;

void print_manga(Manga m) {
    printf(
        "Manga %s is written by %s. %s publication date is %s. This manga type "
        "is %s and rating is %d.\n",
        m.name, m.author, m.name, m.publication_date, m.type, m.rating);
}

void print_writing_master(Writing_Master w) {
    printf(
        "%s( Japanese: %s, born %s ) is a Japanese %s. She is best known "
        "for creating the manga series %s and %s.\n",
        w.name, w.Japanese, w.born, w.job, w.creation, w.another_creation);
}

void print_about_anime(About_Anime a) {
    printf(
        "%s was made by studio %s produced a %d-episode anime adaptation "
        "directed by %s. The series aired from %s to %s. And this anime is rating %0.2f\n",
        a.name, a.studio, a.episode, a.directed, a.aired, a.aired_to,a.rating);
}

int main() {
    Manga Pandora_Hearts = {
        .name = "Pandora Hearts",
        .author = "Jun Mochizuki",
        .publication_date = "October 27, 2006",
        .type = "Horror",
        .rating = 8,
    };
    print_manga(Pandora_Hearts);

    printf("About artist:\n");

    Writing_Master Jun_Mochizuki = {
        .name = "Jun Mochizuki",
        .Japanese = "望月 淳",
        .born = "December 22",
        .job = "manga artist",
        .creation = "Pandora Hearts",
        .another_creation = "The Case Study of Vanitas",
    };
    print_writing_master(Jun_Mochizuki);

    printf("About anime:\n");

    About_Anime Pandora_Heart = {
        .name = "Pandora_Hearts",
        .studio = "Xebec",
        .episode = 25,
        .directed = "Takao Kato",
        .aired = "April 3",
        .aired_to = "September 25, 2009",
        .rating = 7.69,
    };
    print_about_anime(Pandora_Heart);
}