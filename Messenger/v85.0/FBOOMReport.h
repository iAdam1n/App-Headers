/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, FBApplicationStatusSnapshot;

@interface FBOOMReport : FBValueObject <NSCopying> {

	NSArray* _lastStates;
	FBApplicationStatusSnapshot* _statusSnapshot;
	double _timestamp;

}

@property (nonatomic,copy,readonly) NSArray * lastStates;                                      //@synthesize lastStates=_lastStates - In the implementation block
@property (nonatomic,copy,readonly) FBApplicationStatusSnapshot * statusSnapshot;              //@synthesize statusSnapshot=_statusSnapshot - In the implementation block
@property (nonatomic,readonly) double timestamp;                                               //@synthesize timestamp=_timestamp - In the implementation block
-(NSArray *)lastStates;
-(FBApplicationStatusSnapshot *)statusSnapshot;
-(id)initWithLastStates:(id)arg1 statusSnapshot:(id)arg2 timestamp:(double)arg3 ;
-(double)timestamp;
@end
