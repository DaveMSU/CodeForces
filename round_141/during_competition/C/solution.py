import typing as tp


def process_data(
        available_time: int,
        oponents_complexities: tp.List[int]
) -> int:
    oponents_complexities: tp.List[tp.Dict[str, int]] = [
        {
            "name": i + 1,  # Main player ~ 0.
            "complexity": oponents_complexities[i]
        }
            for i in range(len(oponents_complexities))
    ]

    competitors = {i + 1: i for i in range(len(oponents_complexities))}
    competitors.update({0: 0})

    for player in sorted(
            oponents_complexities,
            key=lambda item: item["complexity"]
    ):
        if available_time >= player["complexity"]:
            available_time -= player["complexity"]
            competitors[0] += 1
        else:
            competitors[player["name"]] += 1

    winners_list = {
        item[0]: i for i, item in enumerate(
            sorted(
                sorted(
                    competitors.items(),
                    key=lambda item: item[0]
                ),
                key=lambda item: item[1],
                reverse=True
            )
        )
    }

    return winners_list[0] + 1


def main() -> None:
    imput_data_amount = int(input())
    for _ in range(imput_data_amount):
        data_portion_size, available_time = [int(elem) for elem in input().split()]
        data = [int(elem) for elem in input().split()]
        print(process_data(available_time, data))


if __name__ == "__main__":
    main()

