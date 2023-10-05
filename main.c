#include <stdio.h>
#include <stdlib.h>

struct person {
    char* first_name;
    char* last_name;
    char* race;
    char* gender;
    unsigned int age;
};

struct person* new_person(char* first_name, char* last_name, char* race,
                          char* gender, unsigned int age) {
    struct person* p = malloc(sizeof(struct person));
    p->first_name = first_name;
    p->last_name = last_name;
    p->age = age;
    p->race = race;
    p->gender = gender;
    return p;
}

void delete_person(struct person* p) {
    free(p->first_name);
    free(p->last_name);
    free(p->race);
    free(p->gender);
    free(p);
}

int main() {
    struct person* jenny = new_person("jenny", "sinha", "korean", "female", 21);
    delete_person(jenny);
    return 0;
}
