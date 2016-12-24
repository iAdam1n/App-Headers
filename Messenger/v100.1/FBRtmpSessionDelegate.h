/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBRtmpSessionDelegate <NSObject>
@required
-(void)rtmpSession:(id)arg1 didDropPackets:(shared_ptr<std::__1::vector<FBDroppedFrame, std::__1::allocator<FBDroppedFrame> > >*)arg2 dropReason:(id)arg3;
-(void)rtmpSessionDidFinish:(id)arg1 sendEndOfStreamError:(id)arg2;
-(void)rtmpSessionDidFail:(id)arg1 withError:(id)arg2;
-(void)rtmpSession:(id)arg1 didUpdateStreamingInfo:(compressed_pair<FBUFICountComponent *__strong *, std::__1::allocator<FBUFICountComponent *> >)arg2;
-(void)rtmpSessionWillReconnect:(id)arg1 dueToError:(id)arg2;
-(void)rtmpSession:(id)arg1 completedSpeedTestWithStatus:(FBNetworkSpeedTestStatus)arg2;
-(void)rtmpSessionDidStart:(id)arg1 withSpeedTestStatus:(FBNetworkSpeedTestStatus)arg2;
-(void)rtmpSessionWriteDidTimeout:(id)arg1;

@end
