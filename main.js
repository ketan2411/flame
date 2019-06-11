function clicked2() { var count=0; var total
		var  first=document.getElementById("first").value;
		var second=document.getElementById("second").value;
		
		for(var i=0;i< first.length;i++)
		{
			for(var j=0;j < second.length;j++)
		{
			if(first[i]==second[j]) count++;
			else ; 
		}}
		total=first.length+second.length-count-count;
		window.alert(count);
		console.log(total);
		total=total%5;
			console.log(total);
if(total==1)
{console.log("friends");}
if(total==2)
{console.log("love");}
if(total==3)
{console.log("affection");}
if(total==4)
{console.log("marriage"); } ///shreysh //ikit
if(total==5)
{console.log("enimes");}


}
	