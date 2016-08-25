/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/ModelObject.h>

@interface UserBundlePack : ModelObject {

	int _bundleId;
	int _endTime;
	int _bundleFlags;

}

@property (assign,nonatomic) int bundleId;                 //@synthesize bundleId=_bundleId - In the implementation block
@property (assign,nonatomic) int endTime;                  //@synthesize endTime=_endTime - In the implementation block
@property (assign,nonatomic) int bundleFlags;              //@synthesize bundleFlags=_bundleFlags - In the implementation block
+(id)mutableDictionaryTypes;
+(void)load;
-(int)bundleFlags;
-(BOOL)isBundleFlagSet:(int)arg1 ;
-(BOOL)bundleWasPurchasedBefore:(int)arg1 ;
-(BOOL)bundleWasOnlySeenBefore:(int)arg1 ;
-(void)setBundleFlags:(int)arg1 ;
-(int)bundleId;
-(void)setBundleId:(int)arg1 ;
-(int)endTime;
-(void)setEndTime:(int)arg1 ;
@end

