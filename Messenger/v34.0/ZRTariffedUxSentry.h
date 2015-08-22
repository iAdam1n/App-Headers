/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:33 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/ZRTariffedSessionTaskDelegate.h>
#import <Messenger/NSCopying.h>

@protocol ZRTariffedUxSessionFence;
@class ZRTariffedUxSessionManager, NSMutableSet, ZRTariffedSessionTask, NSString;

@interface ZRTariffedUxSentry : NSObject <ZRTariffedSessionTaskDelegate, NSCopying> {

	ZRTariffedUxSessionManager* _sessionManager;
	id<ZRTariffedUxSessionFence> _fence;
	NSMutableSet* _delegates;
	ZRTariffedSessionTask* _task;
	BOOL _currentlyValidatingSession;
	BOOL _maskActivation;

}

@property (nonatomic,retain,readonly) ZRTariffedUxSessionManager * sessionManager;              //@synthesize sessionManager=_sessionManager - In the implementation block
@property (nonatomic,retain,readonly) id<ZRTariffedUxSessionFence> fence;                       //@synthesize fence=_fence - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sentryWithSessionName:(id)arg1 fencePrefKey:(id)arg2 urlFilter:(id)arg3 delegate:(id)arg4 ;
-(void)nonZeroRatedSessionTaskMayActivate:(id)arg1 ;
-(void)nonZeroRatedSessionTaskMustDeactivate:(id)arg1 ;
-(id)initWithSessionManager:(id)arg1 fence:(id)arg2 delegate:(id)arg3 ;
-(BOOL)isUserConsentRequired;
-(void)enterSession:(/*^block*/id)arg1 ;
-(BOOL)isCurrentlyValidatingSession;
-(id<ZRTariffedUxSessionFence>)fence;
-(void)addDelegate:(id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(ZRTariffedUxSessionManager *)sessionManager;
@end
