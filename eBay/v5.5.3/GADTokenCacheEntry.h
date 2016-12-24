/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:16 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
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
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)token;
-(void)setToken:(NSString *)arg1 ;
-(double)lifespanInSeconds;
-(void)setLifespanInSeconds:(double)arg1 ;
-(void)setLastAccess:(NSDate *)arg1 ;
-(NSDate *)lastAccess;
-(void)setExpiration:(NSDate *)arg1 ;
-(NSDate *)expiration;
@end
