/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:22 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
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
