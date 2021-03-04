﻿#include <event2/event.h>
void listenCB(struct evconnlistener * ev, evutil_socket_t t, struct sockaddr * addr, int socklen, void * arg) {
    cout << "ListenCB"  << endl;
}
const int port = 5001;
int main() {
#endif
    //初始化 libevent 上下文
    else {
        if (f & EV_FEATURE_ET)
        if (f & EV_FEATURE_FDS)
        if (f & EV_FEATURE_EARLY_CLOSE)
         * Allocate a new evconnlistener object to listen for incoming TCP connections
           on a given address.

         * @param base The event base to associate the listener with.
         * @param cb A callback to be invoked when a new connection arrives. If the
                  callback is NULL, the listener will be treated as disabled until the
                  callback is set.
         * @param ptr A user-supplied pointer to give to the callback.
         * @param flags Any number of LEV_OPT_* flags
         * @param backlog Passed to the listen() call to determine the length of the
                  acceptable connection backlog.  Set to -1 for a reasonable default.
         * @param addr The address to listen for connections on.
         * @param socklen The length of the address.

         * EVENT2_EXPORT_SYMBOL
              struct evconnlistener *evconnlistener_new_bind(struct event_base *base,
                  evconnlistener_cb cb, void *ptr, unsigned flags, int backlog,
                  const struct sockaddr *sa, int socklen);
         */
        evconnlistener * ev = evconnlistener_new_bind(base, listenCB, base, 10,
                                                      LEV_OPT_CLOSE_ON_FREE|LEV_OPT_REUSEABLE,
                                                      (sockaddr*) &sin, sizeof(sin));
        event_base_dispatch(base);

