#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

// Função para mostrar o horário atual
void mostrarHorarioAtual() {
    time_t t;
    struct tm *tm_info;

    time(&t);
    tm_info = localtime(&t);

    printf("Hora atual: %02d:%02d:%02d\n", tm_info->tm_hour, tm_info->tm_min, tm_info->tm_sec);
}

// Função para cronômetro
void cronometro() {
    int horas = 0, minutos = 0, segundos = 0;
    char ch;

    printf("Pressione Enter para iniciar o cronômetro...");
    getchar();
    getchar(); // Para pegar o Enter

    while (1) {
        printf("\rCronômetro: %02d:%02d:%02d", horas, minutos, segundos);
        fflush(stdout);
        sleep(1);
        segundos++;
        if (segundos == 60) {
            segundos = 0;
            minutos++;
        }
        if (minutos == 60) {
            minutos = 0;
            horas++;
        }
        if (kbhit()) {
            ch = getchar();
            if (ch == 'q') break;
        }
    }
    printf("\nCronômetro parado.\n");
}

// Função para temporizador
void temporizador() {
    int horas, minutos, segundos;

    printf("Defina o temporizador (horas minutos segundos): ");
    scanf("%d %d %d", &horas, &minutos, &segundos);

    while (horas > 0 || minutos > 0 || segundos > 0) {
        printf("\rTemporizador: %02d:%02d:%02d", horas, minutos, segundos);
        fflush(stdout);
        sleep(1);
        if (segundos > 0) {
            segundos--;
        } else {
            if (minutos > 0) {
                minutos--;
                segundos = 59;
            } else {
                if (horas > 0) {
                    horas--;
                    minutos = 59;
                    segundos = 59;
                }
            }
        }
    }
    printf("\nTemporizador terminado!\n");
}

// Função auxiliar para verificar se uma tecla foi pressionada
int kbhit(void) {
    struct timeval tv;
    fd_set read_fd;

    tv.tv_sec = 0;
    tv.tv_usec = 0;
    FD_ZERO(&read_fd);
    FD_SET(0, &read_fd);

    if (select(1, &read_fd, NULL, NULL, &tv) == -1) {
        return 0;
    }

    if (FD_ISSET(0, &read_fd)) {
        return 1;
    }

    return 0;
}

int main() {
    int escolha;

    while (1) {
        printf("\nRelógio\n");
        printf("1. Ver horário atual\n");
        printf("2. Cronômetro\n");
        printf("3. Temporizador\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                mostrarHorarioAtual();
                break;
            case 2:
                cronometro();
                break;
            case 3:
                temporizador();
                break;
            case 4:
                exit(0);
            default:
                printf("Opção inválida!\n");
        }
    }

    return 0;
}
