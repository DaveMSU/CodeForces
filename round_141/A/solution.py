import typing as tp


def process_data(data: tp.List[int]) -> str:
    if data[0] == data[-1]:
        return "No"
    else:
        beautiful_array = [data[-1]] + [data[0]] + list(reversed(data[1:-1]))
        beautiful_array_as_line = " ".join([str(i) for i in beautiful_array])
        return f"Yes\n{beautiful_array_as_line}"


def main() -> None:
    results: tp.List[str] = []
    input_data_amount = int(input())
    for _ in range(input_data_amount):
        data_size = int(input())
        data = [int(elem) for elem in input().split()]
        results.append(process_data(data))
    print("\n".join(results))


if __name__ == "__main__":
    main()

