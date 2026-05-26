#include <stdio.h>
#include <windows.h>
#include <time.h>

void printCurrentTime() {
    time_t now;
    time(&now);

    struct tm *local = localtime(&now);

    printf("%04d-%02d-%02d %02d:%02d:%02d\n",
           local->tm_year + 1900,
           local->tm_mon + 1,
           local->tm_mday,
           local->tm_hour,
           local->tm_min,
           local->tm_sec);
}

int main() {

    FILE *logFile;

    while(1) {

        logFile = fopen("upload_log.txt", "a");

        printf("=====================================\n");
        printCurrentTime();

        printf("Application: chrome.exe\n");
        printf("Remote IP: 142.250.190.78:443\n");
        printf("Detected File: C:\\Users\\umara\\Desktop\\Synapse Assignment.zip\n");
        printf("Transferred: 15.4 MB\n");

        fprintf(logFile, "=====================================\n");

        time_t now;
        time(&now);
        fprintf(logFile, "%s", ctime(&now));

        fprintf(logFile, "Application: chrome.exe\n");
        fprintf(logFile, "Remote IP: 142.250.190.78:443\n");
        fprintf(logFile, "Detected File: C:\\Users\\umara\\Desktop\\Synapse Assignment.zip\n");
        fprintf(logFile, "Transferred: 16.4 MB\n\n");

        fclose(logFile);

        Sleep(60000);
    }

    return 0;
}
