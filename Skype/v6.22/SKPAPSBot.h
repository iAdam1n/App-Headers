/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:41 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/SKPLazyPropertyContainer.h>

@class NSString, NSArray, NSNumber, UIImage;

@interface SKPAPSBot : SKPLazyPropertyContainer {

	BOOL _isTrusted;
	NSString* _displayName;
	NSString* _userTileStaticUrl;
	NSArray* _supportedLocales;
	NSString* _botDescription;
	NSString* _webpage;
	NSNumber* _starRating;
	NSString* _botId;
	NSArray* _capabilities;
	NSString* _agentType;
	NSString* _privacyStatement;
	NSString* _termsOfUse;
	NSString* _developer;
	UIImage* _avatarImage;

}

@property (nonatomic,retain) UIImage * avatarImage;                   //@synthesize avatarImage=_avatarImage - In the implementation block
@property (nonatomic,copy) NSString * displayName;                    //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * userTileStaticUrl;              //@synthesize userTileStaticUrl=_userTileStaticUrl - In the implementation block
@property (nonatomic,retain) NSArray * supportedLocales;              //@synthesize supportedLocales=_supportedLocales - In the implementation block
@property (nonatomic,copy) NSString * botDescription;                 //@synthesize botDescription=_botDescription - In the implementation block
@property (nonatomic,copy) NSString * webpage;                        //@synthesize webpage=_webpage - In the implementation block
@property (nonatomic,retain) NSNumber * starRating;                   //@synthesize starRating=_starRating - In the implementation block
@property (nonatomic,copy) NSString * botId;                          //@synthesize botId=_botId - In the implementation block
@property (assign,nonatomic) BOOL isTrusted;                          //@synthesize isTrusted=_isTrusted - In the implementation block
@property (nonatomic,retain) NSArray * capabilities;                  //@synthesize capabilities=_capabilities - In the implementation block
@property (nonatomic,copy) NSString * agentType;                      //@synthesize agentType=_agentType - In the implementation block
@property (nonatomic,copy) NSString * privacyStatement;               //@synthesize privacyStatement=_privacyStatement - In the implementation block
@property (nonatomic,copy) NSString * termsOfUse;                     //@synthesize termsOfUse=_termsOfUse - In the implementation block
@property (nonatomic,copy) NSString * developer;                      //@synthesize developer=_developer - In the implementation block
+(id)lazyLoadedPropertiesKeypaths;
-(id)fetchOperationForLazyProperty:(id)arg1 fetchQueueIdentifier:(id*)arg2 ;
-(void)setAvatarImage:(UIImage *)arg1 ;
-(UIImage *)avatarImage;
-(BOOL)flushLazyProperty:(id)arg1 ;
-(id)fetchAvatarImageOperation;
-(NSString *)botDescription;
-(NSString *)userTileStaticUrl;
-(void)setUserTileStaticUrl:(NSString *)arg1 ;
-(void)setSupportedLocales:(NSArray *)arg1 ;
-(void)setBotDescription:(NSString *)arg1 ;
-(void)setBotId:(NSString *)arg1 ;
-(void)setAgentType:(NSString *)arg1 ;
-(void)setPrivacyStatement:(NSString *)arg1 ;
-(void)setTermsOfUse:(NSString *)arg1 ;
-(void)setDeveloper:(NSString *)arg1 ;
-(NSString *)developer;
-(NSString *)privacyStatement;
-(NSString *)termsOfUse;
-(NSString *)botId;
-(id)init;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setStarRating:(NSNumber *)arg1 ;
-(void)setCapabilities:(NSArray *)arg1 ;
-(NSArray *)capabilities;
-(NSNumber *)starRating;
-(BOOL)isTrusted;
-(void)setWebpage:(NSString *)arg1 ;
-(NSString *)webpage;
-(NSString *)agentType;
-(NSArray *)supportedLocales;
-(void)setIsTrusted:(BOOL)arg1 ;
@end
