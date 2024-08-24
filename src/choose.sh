
result="$4"

case "$1" in
  *c*) ./compile $2.c 1>&2 || result="$3" ;;
esac

case "$1" in
  *l*) ./load $2 1>&2 || result="$3" ;;
esac

case "$1" in
  *r*) ./$2 1>&2 || result="$3" ;;
esac

rm -f $2.o $2

exec cat "$result"
