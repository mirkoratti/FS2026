// .h
friend std::ostream& operator<<(std::ostream& os, const TString& s);
// .cpp
std::ostream& operator<<(std::ostream& os, const TString& s) {
  os << s.getString(); // oder direkter Zugriff auf Attribute
  return os;
}
