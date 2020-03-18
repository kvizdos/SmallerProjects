const scrollDown = () => {
    $([document.documentElement, document.body]).animate({
        scrollTop: $("header").height()
    }, 500);
}