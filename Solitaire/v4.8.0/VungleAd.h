/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSArray, NSString, NSDictionary, NSDate;

@interface VungleAd : NSObject <NSCoding> {

	NSArray* _parts;
	NSString* _campaign;
	BOOL _viewed;
	NSString* _appId;
	NSDictionary* _tpatEvents;
	NSString* _user;
	NSDate* _expireDate;
	int _preventPlayDelay;

}

@property (nonatomic,readonly) NSArray * parts;                      //@synthesize parts=_parts - In the implementation block
@property (nonatomic,readonly) NSString * campaign;                  //@synthesize campaign=_campaign - In the implementation block
@property (assign,nonatomic) BOOL viewed;                            //@synthesize viewed=_viewed - In the implementation block
@property (nonatomic,copy) NSString * appId;                         //@synthesize appId=_appId - In the implementation block
@property (nonatomic,retain) NSDictionary * tpatEvents;              //@synthesize tpatEvents=_tpatEvents - In the implementation block
@property (nonatomic,copy) NSString * user;                          //@synthesize user=_user - In the implementation block
@property (nonatomic,copy) NSDate * expireDate;                      //@synthesize expireDate=_expireDate - In the implementation block
@property (assign,nonatomic) int preventPlayDelay;                   //@synthesize preventPlayDelay=_preventPlayDelay - In the implementation block
-(BOOL)viewed;
-(void)setExpireDate:(NSDate *)arg1 ;
-(void)setPreventPlayDelay:(int)arg1 ;
-(NSString *)campaign;
-(NSDate *)expireDate;
-(NSDictionary *)tpatEvents;
-(void)setTpatEvents:(NSDictionary *)arg1 ;
-(int)preventPlayDelay;
-(NSString *)user;
-(void)setUser:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)appId;
-(void)setAppId:(NSString *)arg1 ;
-(void)fetch;
-(void)save;
-(NSArray *)parts;
-(void)setViewed:(BOOL)arg1 ;
@end

