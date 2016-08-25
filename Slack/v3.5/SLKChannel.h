/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:55 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slack/_SLKChannel.h>
#import <Slack/SLKChannelGenerics.h>
#import <Slack/SLKStarred.h>

@class NSString, NSDate, NSNumber, NSArray, SLKUser, NSManagedObjectID, NSManagedObjectContext, SLKStar;

@interface SLKChannel : _SLKChannel <SLKChannelGenerics, SLKStarred>

@property (nonatomic,readonly) SLKUser * user; 
@property (nonatomic,readonly) NSDate * topicLastSetAt; 
@property (nonatomic,readonly) NSDate * purposeLastSetAt; 
@property (nonatomic,readonly) BOOL isArchived; 
@property (nonatomic,readonly) BOOL isMember; 
@property (nonatomic,readonly) BOOL isGeneral; 
@property (nonatomic,readonly) BOOL isRandom; 
@property (nonatomic,retain) NSNumber * mentionCount; 
@property (nonatomic,readonly) BOOL hasMentions; 
@property (nonatomic,readonly) BOOL isShared; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * tsid; 
@property (nonatomic,readonly) NSString * predicateKey; 
@property (nonatomic,readonly) unsigned long long contextType; 
@property (nonatomic,readonly) NSManagedObjectID * objectID; 
@property (nonatomic,readonly) NSManagedObjectContext * managedObjectContext; 
@property (nonatomic,retain) NSNumber * starred; 
@property (nonatomic,readonly) BOOL isStarred; 
@property (nonatomic,readonly) SLKStar * star; 
@property (nonatomic,readonly) unsigned long long channelType; 
@property (nonatomic,readonly) NSString * typeString; 
@property (nonatomic,readonly) NSString * localizedTypeName; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,readonly) NSString * nameWithSymbol; 
@property (nonatomic,readonly) NSString * symbol; 
@property (nonatomic,readonly) NSString * displayTitle; 
@property (nonatomic,readonly) NSDate * createdAt; 
@property (nonatomic,readonly) NSDate * lastReadAt; 
@property (nonatomic,retain) NSString * lastRead; 
@property (nonatomic,retain) NSNumber * unreadCount; 
@property (nonatomic,retain) NSNumber * muted; 
@property (nonatomic,retain) NSNumber * isUnread; 
@property (nonatomic,retain) NSString * latest; 
@property (nonatomic,readonly) NSArray * messages; 
@property (nonatomic,retain) NSNumber * failedMessage; 
@property (assign,nonatomic) BOOL failedLoadingHistoryValue; 
@property (assign) int viewCountValue; 
@property (nonatomic,readonly) NSArray * members; 
@property (nonatomic,readonly) id<SLKMessageGenerics> lastReadMessage; 
@property (nonatomic,readonly) id<SLKMessageGenerics> oldestMessage; 
@property (nonatomic,readonly) id<SLKMessageGenerics> lastCachedMessage; 
@property (nonatomic,readonly) id<SLKMessageGenerics> previousEphemeralMessage; 
@property (nonatomic,readonly) NSNumber * pinCount; 
@property (nonatomic,readonly) id shares; 
@property (nonatomic,retain) NSNumber * hasMore; 
@property (nonatomic,readonly) NSString * creatorId; 
@property (nonatomic,readonly) BOOL isMuted; 
@property (nonatomic,readonly) BOOL canHaveChannelMentions; 
+(void)joinWithName:(id)arg1 dependencies:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)joinAndLoadHistoryChannelWithName:(id)arg1 dependencies:(id)arg2 completion:(/*^block*/id)arg3 ;
+(id)channelForId:(id)arg1 contextType:(unsigned long long)arg2 dependencies:(id)arg3 ;
+(id)validChannels:(unsigned long long)arg1 dependencies:(id)arg2 ;
+(id)generalChannel:(unsigned long long)arg1 dependencies:(id)arg2 ;
+(id)channelForName:(id)arg1 contextType:(unsigned long long)arg2 dependencies:(id)arg3 ;
+(id)channelsWithMentionsPredicate;
+(id)predicateFormatForValidChannels;
+(id)channelsForIds:(id)arg1 contextType:(unsigned long long)arg2 dependencies:(id)arg3 ;
+(id)channelsWithMentions:(unsigned long long)arg1 dependencies:(id)arg2 ;
+(id)channelsWithUnreadsPredicate;
+(void)validChannels:(unsigned long long)arg1 dependencies:(id)arg2 completion:(/*^block*/id)arg3 ;
+(id)symbol;
-(void)getPins:(/*^block*/id)arg1 ;
-(void)join:(/*^block*/id)arg1 ;
-(NSString *)predicateKey;
-(BOOL)isGeneral;
-(BOOL)isStarred;
-(BOOL)isMember;
-(NSString *)nameWithSymbol;
-(unsigned long long)channelType;
-(SLKStar *)star;
-(void)setHasMore:(NSNumber *)arg1 ;
-(BOOL)isRandom;
-(NSDate *)lastReadAt;
-(NSDate *)topicLastSetAt;
-(NSDate *)purposeLastSetAt;
-(BOOL)hasMentions;
-(SLKUser *)user;
-(NSString *)description;
-(NSString *)displayTitle;
-(NSString *)localizedTypeName;
-(NSDate *)createdAt;
-(BOOL)isShared;
-(BOOL)isArchived;
-(NSString *)typeString;
@end

