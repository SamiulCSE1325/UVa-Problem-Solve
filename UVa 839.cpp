#include <cstdio>
int ans, t;
int Func() {
  int wl, dl, wr, dr;
  scanf("%d %d %d %d", &wl, &dl, &wr, &dr);
  if (wl == 0) wl = Func();
  if (wr == 0) wr = Func();
  if (wl * dl != wr * dr) ans = 0;
  return wl + wr;
};
int main() {
  scanf("%d", &t);
  while (t--) {
    ans = 1;
    Func();
    printf("%s\n", ans ? "YES" : "NO");
    if (t) puts("");
  }
  return 0;
}
