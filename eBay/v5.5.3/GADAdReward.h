/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:16 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDecimalNumber;

@interface GADAdReward : NSObject {

	NSString* _type;
	NSDecimalNumber* _amount;

}

@property (nonatomic,copy,readonly) NSString * type;                       //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSDecimalNumber * amount;              //@synthesize amount=_amount - In the implementation block
-(id)initWithRewardDictionary:(id)arg1 ;
-(id)initWithRewardType:(id)arg1 rewardAmount:(id)arg2 ;
-(id)init;
-(NSString *)type;
-(NSDecimalNumber *)amount;
@end
