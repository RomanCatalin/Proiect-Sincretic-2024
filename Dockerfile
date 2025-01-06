FROM gcc:latest
WORKDIR /usr/src/proiect
COPY proiect.cpp .
RUN gcc -o proiect proiect.cpp -lstdc++
CMD ["./proiect"]