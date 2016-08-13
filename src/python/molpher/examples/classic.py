import os
import sys

from molpher.algorithms.classic.run import run
from molpher.algorithms.pathfinder_settings import PathfinderSettings


def main(args):
    cocaine = 'CN1[C@H]2CC[C@@H]1[C@@H](C(=O)OC)[C@@H](OC(=O)c1ccccc1)C2'
    procaine = 'O=C(OCCN(CC)CC)c1ccc(N)cc1'
    storage_dir = None
    if len(args) == 2:
        storage_dir = os.path.abspath(args[1])
    else:
        storage_dir = 'classic_data'

    settings = PathfinderSettings(
        cocaine
        , procaine
        , storage_dir
        , max_threads=4
    )

    run(settings)

if __name__ == "__main__":
    exit(main(sys.argv))