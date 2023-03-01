function sumArray(v) {
    
    var sum=0
    for(var i=0;i<v.length;i++) {
        sum+=v[i]
    }

    return sum
}

function mediaArray(v) {
    
    var sum=0
    for(var i=0;i<v.length;i++) {
        sum+=v[i]
    }

    return sum/v.length
}

function maxArray(v) {
    
    var max=-10000
    for(var i=0;i<v.length;i++) {
        if(v[i]>max) max=v[i]
    }

    return max
}

function minArray(v) {
    
    var min=10000
    for(var i=0;i<v.length;i++) {
        if(v[i]<min) min=v[i]
    }

    return min
}