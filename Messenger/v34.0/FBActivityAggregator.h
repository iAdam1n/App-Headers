/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:10 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Messenger/Messenger-Structs.h>
@class NSCountedSet, NSObject;

@interface FBActivityAggregator : NSObject {

	NSCountedSet* _activities;
	RecursiveMutex _lock;
	double _endHysteresis;
	BOOL _active;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (assign,getter=isActive,nonatomic) BOOL active;                     //@synthesize active=_active - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) double endHysteresis;                            //@synthesize endHysteresis=_endHysteresis - In the implementation block
+(BOOL)automaticallyNotifiesObserversOfActive;
-(void)_updateActivity:(BOOL)arg1 ;
-(void)_updateActivity:(BOOL)arg1 delay:(double)arg2 ;
-(void)beginActivity:(id)arg1 ;
-(double)endHysteresis;
-(void)setEndHysteresis:(double)arg1 ;
-(BOOL)_isActive;
-(void)dealloc;
-(id)init;
-(id)debugDescription;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)endActivity:(id)arg1 ;
@end

