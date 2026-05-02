FROM debian:bookworm AS builder

RUN apt-get update && \
    apt-get install -y --no-install-recommends \
        g++ \
        make \
    && rm -rf /var/lib/apt/lists/*

WORKDIR /build

COPY . .

RUN make

FROM debian:bookworm-slim

WORKDIR /app

COPY --from=builder /build/program .

RUN chmod +x ./program

ENTRYPOINT ["./program"]
