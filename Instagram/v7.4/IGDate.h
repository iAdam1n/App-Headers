/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:18 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/NSCoding.h>

@class NSString;

@interface IGDate : NSObject <NSCoding> {

	long long _microseconds;

}

@property (nonatomic,readonly) long long microseconds;                   //@synthesize microseconds=_microseconds - In the implementation block
@property (nonatomic,copy,readonly) NSString * stringValue; 
-(long long)microseconds;
-(id)initWithMicroseconds:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(long long)compare:(id)arg1 ;
-(id)date;
-(double)timeIntervalSinceNow;
-(id)initWithString:(id)arg1 ;
-(NSString *)stringValue;
-(double)timeIntervalSince1970;
-(id)initWithObject:(id)arg1 ;
-(id)initWithTimeInterval:(double)arg1 ;
@end
