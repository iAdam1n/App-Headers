/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/ModelObject.h>

@class NSString;

@interface RewardedVideoAdsRewardSequenceEntry : ModelObject {

	long long _sequenceId;
	long long _sequenceIndex;
	NSString* _rewardType;
	long long _rewardId;
	long long _quantity;

}

@property (assign,nonatomic) long long sequenceId;                 //@synthesize sequenceId=_sequenceId - In the implementation block
@property (assign,nonatomic) long long sequenceIndex;              //@synthesize sequenceIndex=_sequenceIndex - In the implementation block
@property (nonatomic,retain) NSString * rewardType;                //@synthesize rewardType=_rewardType - In the implementation block
@property (assign,nonatomic) long long rewardId;                   //@synthesize rewardId=_rewardId - In the implementation block
@property (assign,nonatomic) long long quantity;                   //@synthesize quantity=_quantity - In the implementation block
+(id)mutableDictionaryTypes;
+(void)load;
-(long long)rewardId;
-(long long)sequenceId;
-(void)setSequenceId:(long long)arg1 ;
-(long long)sequenceIndex;
-(void)setSequenceIndex:(long long)arg1 ;
-(NSString *)rewardType;
-(void)setRewardType:(NSString *)arg1 ;
-(void)setRewardId:(long long)arg1 ;
-(void)dealloc;
-(void)setQuantity:(long long)arg1 ;
-(long long)quantity;
@end

