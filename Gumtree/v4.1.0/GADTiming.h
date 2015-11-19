/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:12 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
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
-(id)initWithCategory:(id)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(void)removeValueForKey:(id)arg1 ;
-(void)setStartTimestamp:(unsigned long long)arg1 ;
-(unsigned long long)startTimestamp;
@end

