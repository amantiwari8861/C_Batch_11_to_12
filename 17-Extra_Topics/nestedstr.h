#ifndef __NESTEDSTR_H
#define __NESTEDSTR_H

struct address
{
    char city[50];
    char state[50];
    int pincode;
};
typedef struct User
{
    int id;
    char name[20];
    struct address addr;
}user;

#endif