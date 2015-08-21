/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:42 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBAnnouncerBase.h>
#import <Messenger/MNUserRequestListener.h>

@class NSString;

@interface MNUserRequestListenerAnnouncer : FBAnnouncerBase <MNUserRequestListener>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)singleUserRequest:(long long)arg1 didFailWithError:(id)arg2 ;
-(void)multipleUserRequest:(long long)arg1 didFailWithError:(id)arg2 ;
-(void)singleUserRequest:(long long)arg1 didSucceedWithResult:(id)arg2 ;
-(void)multipleUserRequest:(long long)arg1 didSucceedWithResult:(id)arg2 ;
-(void)multipleUserRequest:(long long)arg1 didUpdatePreliminaryResult:(id)arg2 longOperationDidBegin:(BOOL)arg3 ;
-(void)singleUserRequest:(long long)arg1 didUpdatePreliminaryResult:(id)arg2 longOperationDidBegin:(BOOL)arg3 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

