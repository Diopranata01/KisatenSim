#ifndef __CX_CUSTSERV__
    #define __CX_CUSTSERV__
    #define memberFile "membership.data"

    struct member_t {
        char* name;
        int points;
    };
    typedef struct member_t* member;

    extern void initMembership();
    extern void usePoint(char* name, int used);
    extern void addPoint(char* name, int added);
    extern void registerMember(char* name);
    extern void revokeMember(char* name);
    static int isMember(char* name);
    static void addMember(char* name);
    static void memberStatus(char* name);
    static void updateMembership();
    static int generateHash(char* name);
    static unsigned length(const unsigned long num);
#endif
