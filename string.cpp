const String& opretaor +(const String$str)
{
  String p;
  p.len = len+ str.len ;
  p.rep = new char[p.len+1]
 strcpy(p.rep,rep);
 strcat(p.rep,str.rep)
 return p;
}
const String& opretaor +=(const String$str)
{
char*p = rep ;
int lenth  = len+str.len;

p=new char[lenth+1]
strcpy(rep,p);
strcat(rep,str.rep);
    len = lenth
    delete p
return *this;
}
