BEGIN{
count=0
sent1=0;
sent2=0
recived=0;
}
{
if($1=="d")
{
count++;
}
else if($1=="+"&&$3==&&$4==2)
{
sent1++;
}
else if($1=="+"&&$3==0&&$4==2)
{
sent2++;
}
else if($1=="r"&&$3==2&&$4==3)
{
recived++;
}
}
END{
printf "\npacket sent from source node 1 is:%d",sent1;
printf "\npacket sent from source node 2 is:%d",sent2;
printf "\npacket recived:%d",recived;sent=sent1+sent2;
printf "\npacket delivery ratio:%2f\n",(recived/sent)*100;
}
