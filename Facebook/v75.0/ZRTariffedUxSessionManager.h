/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:24 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/ZRTariffedUxSessionDelegate.h>
#import <Facebook/FBUserSessionClassProvidable.h>

@protocol NSLocking;
@class ZRTariffedUxSessionTombstone, NSMutableSet, NSMutableArray, ZRApplicationState, NSObject, NSString;

@interface ZRTariffedUxSessionManager : NSObject <ZRTariffedUxSessionDelegate, FBUserSessionClassProvidable> {

	ZRTariffedUxSessionTombstone* _lastInvalidatedSession;
	unsigned long long _activeSessionCount;
	NSMutableSet* _validSessionsInternal;
	NSMutableArray* _shownFences;
	ZRApplicationState* _zeroRatingState;
	NSObject*<NSLocking> _sharedZeroTokenDataLock;

}

@property (nonatomic,copy) NSMutableSet * validSessionsInternal;                                 //@synthesize validSessionsInternal=_validSessionsInternal - In the implementation block
@property (nonatomic,retain) NSMutableArray * shownFences;                                       //@synthesize shownFences=_shownFences - In the implementation block
@property (nonatomic,retain) ZRApplicationState * zeroRatingState;                               //@synthesize zeroRatingState=_zeroRatingState - In the implementation block
@property (nonatomic,retain) ZRTariffedUxSessionTombstone * lastInvalidatedSession;              //@synthesize lastInvalidatedSession=_lastInvalidatedSession - In the implementation block
@property (nonatomic,retain) NSObject*<NSLocking> sharedZeroTokenDataLock;                       //@synthesize sharedZeroTokenDataLock=_sharedZeroTokenDataLock - In the implementation block
@property (nonatomic,readonly) unsigned long long activeSessionCount;                            //@synthesize activeSessionCount=_activeSessionCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(ZRApplicationState *)zeroRatingState;
-(void)setZeroRatingState:(ZRApplicationState *)arg1 ;
-(id)invalidSessionNamed:(id)arg1 filter:(id)arg2 ;
-(id)initWithZeroRatingState:(id)arg1 ;
-(BOOL)enterTariffedSessionWith:(/*^block*/id)arg1 throughFence:(id)arg2 ;
-(void)sessionDidValidate:(id)arg1 ;
-(id)initWithSharedZeroTokenDataLock:(id)arg1 zeroRatingState:(id)arg2 ;
-(unsigned long long)validSessionCount;
-(void)setLastInvalidatedSession:(ZRTariffedUxSessionTombstone *)arg1 ;
-(id)validSessions;
-(BOOL)isUserInTariffedSession;
-(ZRTariffedUxSessionTombstone *)lastInvalidatedSession;
-(unsigned long long)activeSessionCount;
-(NSMutableSet *)validSessionsInternal;
-(void)setValidSessionsInternal:(NSMutableSet *)arg1 ;
-(NSMutableArray *)shownFences;
-(void)setShownFences:(NSMutableArray *)arg1 ;
-(NSObject*<NSLocking>)sharedZeroTokenDataLock;
-(void)setSharedZeroTokenDataLock:(NSObject*<NSLocking>)arg1 ;
-(void)dealloc;
-(void)sessionDidInvalidate:(id)arg1 ;
@end
