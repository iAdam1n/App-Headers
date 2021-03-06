/*
* This header is generated by classdump-dyld 1.0
* on Friday, September 2, 2016 at 11:33:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/B5820A38-022A-49BE-9A80-72DC946299E2/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reddit/BNCServerRequest.h>

@class NSString;

@interface BranchRedeemRewardsRequest : BNCServerRequest {

	long long _amount;
	NSString* _bucket;
	/*^block*/id _callback;

}

@property (assign,nonatomic) long long amount;               //@synthesize amount=_amount - In the implementation block
@property (nonatomic,retain) NSString * bucket;              //@synthesize bucket=_bucket - In the implementation block
@property (nonatomic,copy) id callback;                      //@synthesize callback=_callback - In the implementation block
-(id)initWithAmount:(long long)arg1 bucket:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)processResponse:(id)arg1 error:(id)arg2 ;
-(void)makeRequest:(id)arg1 key:(id)arg2 callback:(/*^block*/id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setAmount:(long long)arg1 ;
-(long long)amount;
-(id)callback;
-(void)setCallback:(id)arg1 ;
-(void)setBucket:(NSString *)arg1 ;
-(NSString *)bucket;
@end

