FROM gcc:latest

COPY main.cpp .

RUN g++ -o programa main.cpp

CMD ["./programa"]
