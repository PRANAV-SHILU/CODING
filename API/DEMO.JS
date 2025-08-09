var i = 0;

function timedOut() {
    i = i + 1;
    postMessage(i);
    setTimeout("timedOut()", 500);
}
timedout();