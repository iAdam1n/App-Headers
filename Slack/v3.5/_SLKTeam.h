/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class SLKTeamID, NSString, NSNumber, NSSet;

@interface _SLKTeam : NSManagedObject

@property (nonatomic,readonly) SLKTeamID * objectID; 
@property (nonatomic,retain) NSString * authUserId; 
@property (nonatomic,retain) NSNumber * cacheTs; 
@property (assign) long long cacheTsValue; 
@property (nonatomic,retain) NSNumber * commandsCacheTs; 
@property (assign) double commandsCacheTsValue; 
@property (nonatomic,retain) NSString * domain; 
@property (nonatomic,retain) NSString * emailDomain; 
@property (nonatomic,retain) NSNumber * emojiCacheTs; 
@property (assign) double emojiCacheTsValue; 
@property (nonatomic,retain) NSString * enterpriseId; 
@property (nonatomic,retain) NSString * eventTs; 
@property (nonatomic,retain) NSString * icon102Url; 
@property (nonatomic,retain) NSString * icon132Url; 
@property (nonatomic,retain) NSString * icon34Url; 
@property (nonatomic,retain) NSString * icon44Url; 
@property (nonatomic,retain) NSString * icon68Url; 
@property (nonatomic,retain) NSString * icon88Url; 
@property (nonatomic,retain) NSString * iconOriginalUrl; 
@property (nonatomic,retain) NSNumber * loadCount; 
@property (assign) int loadCountValue; 
@property (nonatomic,retain) NSNumber * markedForDeletion; 
@property (assign) BOOL markedForDeletionValue; 
@property (nonatomic,retain) NSString * mostRecentReadTs; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) NSString * plan; 
@property (nonatomic,retain) NSString * tsid; 
@property (nonatomic,retain) NSSet * channels; 
@property (nonatomic,retain) NSSet * groups; 
@property (nonatomic,retain) NSSet * ims; 
+(id)entityName;
+(id)entityInManagedObjectContext:(id)arg1 ;
+(id)insertInManagedObjectContext:(id)arg1 ;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(BOOL)markedForDeletionValue;
-(void)setMarkedForDeletionValue:(BOOL)arg1 ;
-(BOOL)primitiveMarkedForDeletionValue;
-(void)setPrimitiveMarkedForDeletionValue:(BOOL)arg1 ;
-(long long)cacheTsValue;
-(void)setCacheTsValue:(long long)arg1 ;
-(long long)primitiveCacheTsValue;
-(void)setPrimitiveCacheTsValue:(long long)arg1 ;
-(double)commandsCacheTsValue;
-(void)setCommandsCacheTsValue:(double)arg1 ;
-(double)primitiveCommandsCacheTsValue;
-(void)setPrimitiveCommandsCacheTsValue:(double)arg1 ;
-(double)emojiCacheTsValue;
-(void)setEmojiCacheTsValue:(double)arg1 ;
-(double)primitiveEmojiCacheTsValue;
-(void)setPrimitiveEmojiCacheTsValue:(double)arg1 ;
-(int)loadCountValue;
-(void)setLoadCountValue:(int)arg1 ;
-(int)primitiveLoadCountValue;
-(void)setPrimitiveLoadCountValue:(int)arg1 ;
-(id)channelsSet;
-(id)groupsSet;
-(id)imsSet;
-(SLKTeamID *)objectID;
@end

