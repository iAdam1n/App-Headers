/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <BubbleMania/BubbleMania-Structs.h>
@interface CommonUtil : NSObject
+(void)playErrorSound;
+(void)playBgMusic:(id)arg1 ;
+(void)doFacebookLoginIfNeeded;
+(id)formatTruncatedCashForDisplay:(long long)arg1 ;
+(id)formatExperienceForDisplay:(long long)arg1 ;
+(long long)randForMax:(long long)arg1 ;
+(id)formatCashForDisplay:(long long)arg1 ;
+(id)formatCashForDisplay:(long long)arg1 withNumDigits:(int)arg2 ;
+(void)preventLocking:(BOOL)arg1 ;
+(void)shuffleArray:(id)arg1 ;
+(long long)randWithRange:(long long)arg1 max:(long long)arg2 ;
+(id)friendlyFormattedTime:(int)arg1 detailed:(BOOL)arg2 ;
+(id)rewardTierKeys;
+(id)rewardTierForFriendshipPoints:(int)arg1 ;
+(int)calculateCurrentFriendshipPoints:(int)arg1 ;
+(id)nextRewardLevelForFriendshipPoints:(int)arg1 ;
+(id)formatCashForDisplayWholeNumber:(long long)arg1 ;
+(void)stopBgMusic;
+(void)reverseArray:(id)arg1 ;
+(void)debugLog:(id)arg1 ;
+(long long)nextLevelExp:(long long)arg1 ;
+(id)friendlyFormattedTime:(int)arg1 ;
+(id)friendlyDetailedFormattedTime:(int)arg1 ;
+(id)friendlyDateFromTimeStamp:(int)arg1 ;
+(Color)colorFromDict:(id)arg1 ;
+(int)nextRewardRequirementForFriendshipPoints:(int)arg1 ;
+(int)nextRewardLootIdForFriendshipPoints:(int)arg1 ;
@end
