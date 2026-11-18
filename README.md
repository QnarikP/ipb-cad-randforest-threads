# Random Forest with Pthreads

POSIX threads implementation of a serial random forest.

Qnarik Poghosyan and Lusine Atshemyan.

`main` holds the shared setup. Work continues on `qnarik` and `lusine`.

## Layout

- `randforest-serial/` — given sources, unchanged
- `randforest-serial-opt/` — optimized serial version
- `randforest-serial-opt-instr/` — optimized serial version, prints F
- `randforest-par/` — Pthreads version
- `scripts/` — benchmark, bootstrap, and plot scripts
- `data/` — CSV results
- `profiles/` — gprofng output
- `report/` — report and figures

## Build

```sh
cd randforest-serial
make
./random-forest wdbc.csv --seed 0
```

Parameters: `k_folds=20`, `n_estimators=20`, `max_depth=7`, `min_samples_leaf=3`, `max_features=10`, `--seed 0`.
