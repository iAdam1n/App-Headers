/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:51:08 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/AA3738EF-C276-423D-BBB1-85BEAAD70331/Crystal.app/Crystal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Crystal/ANSEvent.h>

@class NSDate;

@interface ANSCrashEvent : ANSEvent {

	NSDate* _crashTimestamp;
	unsigned long long _crashState;

}

@property (nonatomic,retain) NSDate * crashTimestamp;                    //@synthesize crashTimestamp=_crashTimestamp - In the implementation block
@property (assign,nonatomic) unsigned long long crashState;              //@synthesize crashState=_crashState - In the implementation block
-(id)initWithTimestamp:(id)arg1 crashState:(unsigned long long)arg2 ;
-(NSDate *)crashTimestamp;
-(unsigned long long)crashState;
-(id)payloadStringForCrashState:(unsigned long long)arg1 ;
-(void)setCrashTimestamp:(NSDate *)arg1 ;
-(void)setCrashState:(unsigned long long)arg1 ;
-(id)timestamp;
-(id)name;
-(id)dictionaryRepresentation;
@end
