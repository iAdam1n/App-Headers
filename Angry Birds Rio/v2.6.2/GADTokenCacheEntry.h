/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:59:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/2A9FB5F5-F793-4429-94C0-AF0877EC9D65/AngryBirdsRio.app/AngryBirdsRio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSDate;

@interface GADTokenCacheEntry : NSObject <NSCoding> {

	NSString* _token;
	NSDate* _lastAccess;
	NSDate* _expiration;
	double _lifespanInSeconds;

}

@property (nonatomic,copy) NSString * token;                        //@synthesize token=_token - In the implementation block
@property (nonatomic,copy) NSDate * lastAccess;                     //@synthesize lastAccess=_lastAccess - In the implementation block
@property (nonatomic,copy) NSDate * expiration;                     //@synthesize expiration=_expiration - In the implementation block
@property (assign,nonatomic) double lifespanInSeconds;              //@synthesize lifespanInSeconds=_lifespanInSeconds - In the implementation block
-(NSDate *)lastAccess;
-(void)setLastAccess:(NSDate *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)token;
-(void)setToken:(NSString *)arg1 ;
-(double)lifespanInSeconds;
-(void)setLifespanInSeconds:(double)arg1 ;
-(void)setExpiration:(NSDate *)arg1 ;
-(NSDate *)expiration;
@end

