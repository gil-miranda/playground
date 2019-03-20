var n = 60085147513;
var i;
var k;
var d;

for (i = n-1; i>=1; i--) {
    d = n % i;


    if(d==0) {
       k = verifica_primalidade(d);
    }
    if(k==1) {
        console.log(i);
        break;
    }
}

function verifica_primalidade(p) {
    var j = 0;

    for(i=1;i<=p;i++) {

        var div = p%i;
        if(div == 0) {j++}
    }

    if(j>2) {
        return 0;
    } else {
        return 1;
    }

}

