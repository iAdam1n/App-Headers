/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:20 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBWebRTCInstantCallViewDelegate <NSObject>
@required
-(void)callView:(id)arg1 didChangePeerVideoOrientation:(unsigned long long)arg2;
-(void)callView:(id)arg1 didChangeSelfVideoOrientation:(unsigned long long)arg2;
-(void)callViewDidRequestAcceptVideo:(id)arg1;
-(void)callViewDidRequestToggleSendingVideo:(id)arg1;
-(void)callViewDidRequestToggleMicrophone:(id)arg1;
-(void)callViewDidRequestToggleCamera:(id)arg1;
-(void)callViewDidRequestRetryVideo:(id)arg1;
-(void)callViewDidRequestEndCall:(id)arg1;

@end
