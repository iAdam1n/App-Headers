/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:01 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface FlurryPulseEventTrigger : NSObject <NSCoding, NSCopying> {

	NSString* _eventName;
	NSString* _eventParamName;
	NSArray* _eventParamValues;

}

@property (nonatomic,retain) NSString * eventName;                    //@synthesize eventName=_eventName - In the implementation block
@property (nonatomic,retain) NSString * eventParamName;               //@synthesize eventParamName=_eventParamName - In the implementation block
@property (nonatomic,retain) NSArray * eventParamValues;              //@synthesize eventParamValues=_eventParamValues - In the implementation block
-(void)setEventParamName:(NSString *)arg1 ;
-(void)setEventParamValues:(NSArray *)arg1 ;
-(id)dataDictionary;
-(NSString *)eventParamName;
-(NSArray *)eventParamValues;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)eventName;
-(void)setEventName:(NSString *)arg1 ;
@end

