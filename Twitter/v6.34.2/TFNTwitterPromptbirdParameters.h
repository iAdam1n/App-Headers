/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:44 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/NSCopying.h>

@class NSArray, NSString, NSDictionary;

@interface TFNTwitterPromptbirdParameters : NSObject <NSCopying> {

	BOOL _forceFatigueOnOverride;
	NSArray* _formats;
	NSArray* _tweetIDs;
	NSString* _forceCampaign;
	NSString* _forceCampaigns;
	NSString* _forceCookie;

}

@property (nonatomic,readonly) NSDictionary * parameterDictionary; 
@property (nonatomic,copy) NSArray * formats;                                   //@synthesize formats=_formats - In the implementation block
@property (nonatomic,copy) NSArray * tweetIDs;                                  //@synthesize tweetIDs=_tweetIDs - In the implementation block
@property (nonatomic,copy) NSString * forceCampaign;                            //@synthesize forceCampaign=_forceCampaign - In the implementation block
@property (nonatomic,copy) NSString * forceCampaigns;                           //@synthesize forceCampaigns=_forceCampaigns - In the implementation block
@property (nonatomic,copy) NSString * forceCookie;                              //@synthesize forceCookie=_forceCookie - In the implementation block
@property (assign,nonatomic) BOOL forceFatigueOnOverride;                       //@synthesize forceFatigueOnOverride=_forceFatigueOnOverride - In the implementation block
+(id)parametersWithFormat:(id)arg1 ;
-(void)setFormats:(NSArray *)arg1 ;
-(NSArray *)tweetIDs;
-(NSString *)forceCampaign;
-(NSString *)forceCampaigns;
-(BOOL)forceFatigueOnOverride;
-(NSString *)forceCookie;
-(void)setTweetIDs:(NSArray *)arg1 ;
-(void)setForceCampaign:(NSString *)arg1 ;
-(void)setForceCampaigns:(NSString *)arg1 ;
-(void)setForceFatigueOnOverride:(BOOL)arg1 ;
-(void)setForceCookie:(NSString *)arg1 ;
-(NSDictionary *)parameterDictionary;
-(NSArray *)formats;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

