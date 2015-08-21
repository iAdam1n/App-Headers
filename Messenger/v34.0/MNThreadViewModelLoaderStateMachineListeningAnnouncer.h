/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:48 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBAnnouncerBase.h>
#import <Messenger/MNThreadViewModelLoaderStateMachineListening.h>

@class NSString;

@interface MNThreadViewModelLoaderStateMachineListeningAnnouncer : FBAnnouncerBase <MNThreadViewModelLoaderStateMachineListening>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didCleanUpViewModelRequestWithId:(long long)arg1 ;
-(void)stateForViewModelRequest:(long long)arg1 didUpdateFromThreadRequestState:(unsigned long long)arg2 toThreadRequestState:(unsigned long long)arg3 userRequestState:(unsigned long long)arg4 threadViewModel:(id)arg5 error:(id)arg6 ;
-(void)stateForViewModelRequest:(long long)arg1 didUpdateFromUserRequestState:(unsigned long long)arg2 toUserRequestState:(unsigned long long)arg3 threadRequestState:(unsigned long long)arg4 threadViewModel:(id)arg5 error:(id)arg6 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

