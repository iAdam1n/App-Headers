/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BaseDataModel : NSObject
-(void)subscribeForBeginNotification:(id)arg1 selector:(SEL)arg2 notificationName:(id)arg3 ;
-(void)unsubscribeForBeginNotification:(id)arg1 notificationName:(id)arg2 ;
-(void)subscribeForCompletedNotification:(id)arg1 selector:(SEL)arg2 notificationName:(id)arg3 ;
-(void)unsubscribeForCompletedNotification:(id)arg1 notificationName:(id)arg2 ;
-(void)sendCompletedNotification:(id)arg1 ;
-(void)sendBeginNotification:(id)arg1 ;
-(void)sendCompletedNotification:(id)arg1 nserror:(id)arg2 responseErrorString:(id)arg3 ;
@end

