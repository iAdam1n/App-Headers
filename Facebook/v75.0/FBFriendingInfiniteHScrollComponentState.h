/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:07 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface FBFriendingInfiniteHScrollComponentState : NSObject {

	unsigned long long _endReason;
	unsigned long long _lastCompletedLoadIdentifier;
	NSArray* _allObjects;

}

@property (nonatomic,readonly) unsigned long long endReason;                                //@synthesize endReason=_endReason - In the implementation block
@property (nonatomic,readonly) unsigned long long lastCompletedLoadIdentifier;              //@synthesize lastCompletedLoadIdentifier=_lastCompletedLoadIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allObjects;                                   //@synthesize allObjects=_allObjects - In the implementation block
+(id)newWithEndReason:(unsigned long long)arg1 allObjects:(id)arg2 lastCompletedLoadIdentifier:(unsigned long long)arg3 ;
-(unsigned long long)lastCompletedLoadIdentifier;
-(id)initWithEndReason:(unsigned long long)arg1 allObjects:(id)arg2 lastCompletedLoadIdentifier:(unsigned long long)arg3 ;
-(NSArray *)allObjects;
-(unsigned long long)endReason;
@end
