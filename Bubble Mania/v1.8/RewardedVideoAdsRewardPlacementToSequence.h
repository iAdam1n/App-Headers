/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/ModelObject.h>

@interface RewardedVideoAdsRewardPlacementToSequence : ModelObject {

	long long _bucketId;
	long long _placementId;
	long long _sequenceId;

}

@property (assign,nonatomic) long long bucketId;                 //@synthesize bucketId=_bucketId - In the implementation block
@property (assign,nonatomic) long long placementId;              //@synthesize placementId=_placementId - In the implementation block
@property (assign,nonatomic) long long sequenceId;               //@synthesize sequenceId=_sequenceId - In the implementation block
+(id)mutableDictionaryTypes;
+(void)load;
-(long long)bucketId;
-(void)setBucketId:(long long)arg1 ;
-(long long)placementId;
-(void)setPlacementId:(long long)arg1 ;
-(long long)sequenceId;
-(void)setSequenceId:(long long)arg1 ;
@end
