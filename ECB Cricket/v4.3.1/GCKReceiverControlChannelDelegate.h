/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:44:04 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/DE3331E2-1165-4E9B-8894-BDF4D69820B5/ECBCricketApp.app/ECBCricketApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol GCKReceiverControlChannelDelegate <NSObject>
@required
-(void)receiverControlChannel:(id)arg1 didLaunchCastApplication:(id)arg2;
-(void)receiverControlChannel:(id)arg1 didFailToLaunchCastApplicationWithError:(id)arg2;
-(void)receiverControlChannel:(id)arg1 requestDidFailWithID:(long long)arg2 error:(id)arg3;
-(void)receiverControlChannel:(id)arg1 didReplaceRequestWithID:(long long)arg2;
-(void)receiverControlChannel:(id)arg1 didReceiveReceiverStatus:(id)arg2 applicationStatus:(id)arg3 requestID:(long long)arg4;
-(void)receiverControlChannel:(id)arg1 didReceiveAppAvailability:(id)arg2;

@end
