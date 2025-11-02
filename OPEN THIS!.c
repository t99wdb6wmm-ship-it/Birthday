#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>  // For sleep()

int main() {
    char response[10];
    char birthday[15];
    int valid_birthday = 0;

    printf("Hi, birthday girl! Here's a little bit of gift for yah. Hope you like it! 🎉\n\n");

    // Ask if it's their birthday
    printf("Is it your birthday today? (yes/no): ");
    fgets(response, sizeof(response), stdin);
    // Remove newline character
    response[strcspn(response, "\n")] = 0;
    // Convert to lowercase
    for (int i = 0; response[i]; i++) {
        response[i] = tolower(response[i]);
    }

    if (strcmp(response, "yes") == 0) {
        printf("Please enter your birthday in mm/dd/yyyy format: ");
        fgets(birthday, sizeof(birthday), stdin);
    } else if (strcmp(response, "no") == 0) {
        // If no, ask for birthday
        printf("Please enter your birthday in mm/dd/yyyy format: ");
        fgets(birthday, sizeof(birthday), stdin);
        birthday[strcspn(birthday, "\n")] = 0;
        // Basic validation: check length and slashes
        if (strlen(birthday) == 10 && birthday[2] == '/' && birthday[5] == '/') {
            printf("Thanks! Noting that your birthday is %s. But let's pretend it's today for fun!\n", birthday);
            valid_birthday = 1;
        } else {
            printf("Invalid format. Proceeding anyway with a surprise!\n");
        }
    } else {
        printf("Invalid response. Proceeding with a surprise!\n");
    }

    printf("\n🎂 SURPRISE! Happy Birthday, Chloe! 🎂\n\n");
    sleep(3);  // 3-second delay
    printf("18 ka naaaa!!!\n\nMay your day be filled with joy, laughter, and all your favorite things!\n\n");
    sleep(3);  // 3-second delay
    printf("Wishing and praying you a fantastic days, weeeks, months, and year ahead! 🎈🍰\n\n");
    sleep(3);  // 3-second delay
    printf("Take care always, okay!? Know that I am and will always be by your side!\n\n");
    sleep(3);  // 3-second delay
    
    printf("Now, let's sing the Happy Birthday song!\n\n");
    printf("🎶 Happy birthday to you, 🎶\n\n");
    sleep(2);
    printf("🎶 Happy birthday to you, 🎶\n\n");
    sleep(2);
    printf("🎶 Happy birthday dear Chloe, 🎶\n\n");
    sleep(2);
    printf("🎶 Happy birthday to you! 🎶\n\n");
    sleep(2);
    printf("\n🎉 Yay! 🎉\n\n");
    sleep(2);
    

    // ASCII Art: A cute character (simple cat-like figure) holding a balloon and cake
    printf("Here's a cute drawing for you:\n\n");
    printf("       .-^^---....,,--       \n");
    printf("      /          ,--         \n");
    printf("     |           |   ,|      \n");
    printf("     \\._        _./  /       \n");
    printf("      \\   `---'   /         \n");
    printf("       `.       .'          \n");
    printf("         `-----'            \n");
    printf("           |                \n");
    printf("          / \\               \n");
    printf("         /   \\              \n");
    printf("        /     \\             \n");
    printf("       |       |            \n");
    printf("       |  🎂   |            \n");
    printf("       |       |            \n");
    printf("       |       |            \n");
    printf("       |       |            \n");
    printf("       |       |            \n");
    printf("       |       |            \n");
    printf("       |       |            \n");
    printf("       |       |            \n");
    printf("       |       |            \n");
    printf("       |       |            \n");
    printf("       |       |            \n");
    printf("       |       |            \n");
    printf("       |       |            \n");
    printf("       |       |            \n");
    printf("       |       |            \n");
    printf("       |       |            \n");
    printf("       |       |            \n");
    printf("       |       |            \n");
    printf("       |       |            \n");
    printf("       |       |            \n");
   
}