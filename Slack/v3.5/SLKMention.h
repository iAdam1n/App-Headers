/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:55 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slack/_SLKMention.h>
#import <Slack/SLKGenerics.h>

@class NSString, NSManagedObjectID, NSManagedObjectContext, NSDate;

@interface SLKMention : _SLKMention <SLKGenerics> {

	NSString* _tsid;
	unsigned long long _type;
	NSDate* _createdAt;

}

@property (nonatomic,retain) NSString * tsid;                                              //@synthesize tsid=_tsid - In the implementation block
@property (nonatomic,readonly) NSDate * createdAt;                                         //@synthesize createdAt=_createdAt - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                                    //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) id<SLKChannelGenerics> genericChannel; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * predicateKey; 
@property (nonatomic,readonly) unsigned long long contextType; 
@property (nonatomic,readonly) NSManagedObjectID * objectID; 
@property (nonatomic,readonly) NSManagedObjectContext * managedObjectContext; 
+(void)getMyRecentMentionsWithCount:(long long)arg1 dependencies:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)getMyRecentMentions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSString *)tsid;
-(id<SLKChannelGenerics>)genericChannel;
-(void)setTsid:(NSString *)arg1 ;
-(NSString *)predicateKey;
-(id)attachmentForId:(id)arg1 ;
-(id)sortedAttachments;
-(unsigned long long)type;
-(NSDate *)createdAt;
@end

