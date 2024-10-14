export function newton_sqrt(number){
    let first = number;
    let latest = number;
    i = 1;
    while (i < 1000 && (latest * latest - first) > 0.0001) {
        latest = 0.5 * (latest + first / latest);
        i++;
    }
    return latest;
}