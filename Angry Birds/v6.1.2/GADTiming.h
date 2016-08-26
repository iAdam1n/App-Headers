/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:01:47 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/3822BE3B-29D4-4DEB-BFFF-FDA22D01C707/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AngryBirdsClassic/AngryBirdsClassic-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSString;

@interface GADTiming : NSObject <NSCopying> {

	NSMutableDictionary* _userData;
	NSObject*<OS_dispatch_queue> _lockQueue;
	BOOL _explicitEnd;
	NSString* _category;
	unsigned long long _startTimestamp;
	unsigned long long _endTimestamp;

}

@property (nonatomic,copy) NSString * category;                              //@synthesize category=_category - In the implementation block
@property (assign,nonatomic) BOOL explicitEnd;                               //@synthesize explicitEnd=_explicitEnd - In the implementation block
@property (assign,nonatomic) unsigned long long startTimestamp;              //@synthesize startTimestamp=_startTimestamp - In the implementation block
@property (assign,nonatomic) unsigned long long endTimestamp;                //@synthesize endTimestamp=_endTimestamp - In the implementation block
-(unsigned long long)elapsedMilliseconds;
-(unsigned long long)endTimestamp;
-(id)elapsedMillisecondsString;
-(BOOL)explicitEnd;
-(void)setExplicitEnd:(BOOL)arg1 ;
-(void)setEndTimestamp:(unsigned long long)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)init;
-(id)description;
-(BOOL)isActive;
-(void)setCategory:(NSString *)arg1 ;
-(NSString *)category;
-(void)reset;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)start;
-(void)end;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(void)setStartTimestamp:(unsigned long long)arg1 ;
-(unsigned long long)startTimestamp;
-(void)removeValueForKey:(id)arg1 ;
-(id)initWithCategory:(id)arg1 ;
@end
