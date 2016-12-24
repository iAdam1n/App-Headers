/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, FBRecentVPV;

@interface FBFeedVPVdDeduplicationKey : NSObject {

	NSString* _qid;
	double _timestamp;
	NSString* _deduplicationKey;
	FBRecentVPV* _inputObject;

}

@property (nonatomic,copy,readonly) NSString * deduplicationKey;              //@synthesize deduplicationKey=_deduplicationKey - In the implementation block
@property (nonatomic,copy,readonly) FBRecentVPV * inputObject;                //@synthesize inputObject=_inputObject - In the implementation block
-(NSString *)deduplicationKey;
-(id)initWithDeduplicationKey:(id)arg1 qid:(id)arg2 timestamp:(double)arg3 ;
-(FBRecentVPV *)inputObject;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end
