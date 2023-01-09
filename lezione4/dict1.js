

pass = {}

function passAdd(key, value) {

    if (!key) return

    pass[key] = value


    console.log('pass = ', pass)


}

function passSearchOne(key) {

    return pass[key]
}

function passSearchAll(key) {

    var result = []

    var result = []

    for (const [k, value] of Object.entries(pass)) {
       
        if (k.startsWith(key)) {
            result.push({ key: k, value })
        }
    }


    return result
}