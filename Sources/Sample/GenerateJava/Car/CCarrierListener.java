
package org.elastos.GenerateJava;

//this java class will implement the elastos interface.
public class CCarrierListener implements ICarrierListener {
    private long mCarObj = 0;

    private native long native_CCarrierListener();
    private native void native_CCarrierListener_Destroy(long carobj);

    public CCarrierListener() {
        mCarObj = native_CCarrierListener();
        //TODO: Add your code here
    }

    public long getCarObject() {
        return mCarObj;
    }

    // invoke destroy to release car object
    public void destroy() {
        native_CCarrierListener_Destroy(mCarObj);
    }


    public void OnIdle() {
        //TODO: Add your code here
    }

    public void OnConnectionChanged(
        /* [in] */ boolean online) {
        //TODO: Add your code here
    }

    public void OnReady() {
        //TODO: Add your code here
    }

    public void OnFriendRequest(
        /* [in] */ String uid,
        /* [in] */ String hello) {
        //TODO: Add your code here
    }

    public void OnFriendConnetionChanged(
        /* [in] */ String uid,
        /* [in] */ boolean online) {
        //TODO: Add your code here
    }

    public boolean OnPortForwardingRequest(
        /* [in] */ String uid,
        /* [in] */ String servicePort) {
        //TODO: Add your code here
        return false;
    }

    public void OnPortForwardingResult(
        /* [in] */ String uid,
        /* [in] */ String localPort,
        /* [in] */ String remotePort,
        /* [in] */ int code) {
        //TODO: Add your code here
    }

    public void OnMessageReceived(
        /* [in] */ String uid,
        /* [in] */ byte[] message) {
        //TODO: Add your code here
    }


}
