export HERE="$(dirname "$(readlink -f "${0}")")"
export VITASDK="$HERE/vendor/vitasdk"
export LD_LIBRARY_PATH="${HERE}/vendor/vitasdk/arm-vita-eabi/lib"
export LD_="$HERE/vendor/vitasdk/bin":"$HERE/vendor/vitasdk/arm-vita-eabi/bin":"${PATH}"
export PATH="$HERE/vendor/vitasdk/bin":"${PATH}"

cmake .
make
