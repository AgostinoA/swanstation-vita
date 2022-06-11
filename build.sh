export HERE="$(dirname "$(readlink -f "${0}")")"
export VITASDK="$HERE/vendor/vitasdk"
export PATH="$HERE/vendor/vitasdk/bin":"${PATH}"

cmake .
make
