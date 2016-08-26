/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBRtmpSessionDelegate <NSObject>
@required
-(void)rtmpSession:(id)arg1 didDropPackets:(shared_ptr<std::__1::vector<FBDroppedFrame, std::__1::allocator<FBDroppedFrame> > >*)arg2 dropReason:(id)arg3;
-(void)rtmpSessionDidFinish:(id)arg1 sendEndOfStreamError:(id)arg2;
-(void)rtmpSessionDidFail:(id)arg1 withError:(id)arg2;
-(void)rtmpSession:(id)arg1 didUpdateStreamingInfo:(compressed_pair<NSInvocation *__strong **, std::__1::allocator<NSInvocation *__strong *> >)arg2;
-(void)rtmpSessionWillReconnect:(id)arg1 dueToError:(id)arg2;
-(void)rtmpSession:(id)arg1 completedSpeedTestWithStatus:(FBNetworkSpeedTestStatus)arg2;
-(void)rtmpSessionDidStart:(id)arg1 withSpeedTestStatus:(FBNetworkSpeedTestStatus)arg2;
-(void)rtmpSessionWriteDidTimeout:(id)arg1;

@end
