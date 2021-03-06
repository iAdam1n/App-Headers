/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:28:00 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSNumber, NSString, NSDictionary;

@interface ATInteractionUsageData : NSObject {

	NSNumber* _timeSinceInstallTotal;
	NSNumber* _timeSinceInstallVersion;
	NSNumber* _timeSinceInstallBuild;
	NSString* _applicationVersion;
	NSString* _applicationBuild;
	NSString* _sdkVersion;
	NSString* _sdkDistribution;
	NSString* _sdkDistributionVersion;
	NSNumber* _isUpdateVersion;
	NSNumber* _isUpdateBuild;
	NSDictionary* _codePointInvokesTotal;
	NSDictionary* _codePointInvokesVersion;
	NSDictionary* _codePointInvokesBuild;
	NSDictionary* _codePointInvokesTimeAgo;
	NSDictionary* _interactionInvokesTotal;
	NSDictionary* _interactionInvokesVersion;
	NSDictionary* _interactionInvokesBuild;
	NSDictionary* _interactionInvokesTimeAgo;
	NSNumber* _currentTime;

}

@property (nonatomic,retain) NSNumber * timeSinceInstallTotal;                      //@synthesize timeSinceInstallTotal=_timeSinceInstallTotal - In the implementation block
@property (nonatomic,retain) NSNumber * timeSinceInstallVersion;                    //@synthesize timeSinceInstallVersion=_timeSinceInstallVersion - In the implementation block
@property (nonatomic,retain) NSNumber * timeSinceInstallBuild;                      //@synthesize timeSinceInstallBuild=_timeSinceInstallBuild - In the implementation block
@property (nonatomic,copy) NSString * applicationVersion;                           //@synthesize applicationVersion=_applicationVersion - In the implementation block
@property (nonatomic,copy) NSString * applicationBuild;                             //@synthesize applicationBuild=_applicationBuild - In the implementation block
@property (nonatomic,copy) NSString * sdkVersion;                                   //@synthesize sdkVersion=_sdkVersion - In the implementation block
@property (nonatomic,copy) NSString * sdkDistribution;                              //@synthesize sdkDistribution=_sdkDistribution - In the implementation block
@property (nonatomic,copy) NSString * sdkDistributionVersion;                       //@synthesize sdkDistributionVersion=_sdkDistributionVersion - In the implementation block
@property (nonatomic,retain) NSNumber * currentTime;                                //@synthesize currentTime=_currentTime - In the implementation block
@property (nonatomic,retain) NSNumber * isUpdateVersion;                            //@synthesize isUpdateVersion=_isUpdateVersion - In the implementation block
@property (nonatomic,retain) NSNumber * isUpdateBuild;                              //@synthesize isUpdateBuild=_isUpdateBuild - In the implementation block
@property (nonatomic,retain) NSDictionary * codePointInvokesTotal;                  //@synthesize codePointInvokesTotal=_codePointInvokesTotal - In the implementation block
@property (nonatomic,retain) NSDictionary * codePointInvokesVersion;                //@synthesize codePointInvokesVersion=_codePointInvokesVersion - In the implementation block
@property (nonatomic,retain) NSDictionary * codePointInvokesBuild;                  //@synthesize codePointInvokesBuild=_codePointInvokesBuild - In the implementation block
@property (nonatomic,retain) NSDictionary * codePointInvokesTimeAgo;                //@synthesize codePointInvokesTimeAgo=_codePointInvokesTimeAgo - In the implementation block
@property (nonatomic,retain) NSDictionary * interactionInvokesTotal;                //@synthesize interactionInvokesTotal=_interactionInvokesTotal - In the implementation block
@property (nonatomic,retain) NSDictionary * interactionInvokesVersion;              //@synthesize interactionInvokesVersion=_interactionInvokesVersion - In the implementation block
@property (nonatomic,retain) NSDictionary * interactionInvokesBuild;                //@synthesize interactionInvokesBuild=_interactionInvokesBuild - In the implementation block
@property (nonatomic,retain) NSDictionary * interactionInvokesTimeAgo;              //@synthesize interactionInvokesTimeAgo=_interactionInvokesTimeAgo - In the implementation block
+(id)usageData;
-(id)predicateEvaluationDictionary;
-(NSNumber *)timeSinceInstallTotal;
-(NSNumber *)timeSinceInstallVersion;
-(NSNumber *)timeSinceInstallBuild;
-(NSString *)applicationBuild;
-(NSString *)sdkDistribution;
-(NSString *)sdkDistributionVersion;
-(NSNumber *)isUpdateVersion;
-(NSNumber *)isUpdateBuild;
-(NSDictionary *)codePointInvokesTotal;
-(NSDictionary *)codePointInvokesVersion;
-(NSDictionary *)codePointInvokesBuild;
-(NSDictionary *)codePointInvokesTimeAgo;
-(NSDictionary *)interactionInvokesTotal;
-(NSDictionary *)interactionInvokesVersion;
-(NSDictionary *)interactionInvokesBuild;
-(NSDictionary *)interactionInvokesTimeAgo;
-(void)setTimeSinceInstallTotal:(NSNumber *)arg1 ;
-(void)setTimeSinceInstallVersion:(NSNumber *)arg1 ;
-(void)setTimeSinceInstallBuild:(NSNumber *)arg1 ;
-(void)setApplicationBuild:(NSString *)arg1 ;
-(void)setSdkVersion:(NSString *)arg1 ;
-(void)setSdkDistribution:(NSString *)arg1 ;
-(void)setSdkDistributionVersion:(NSString *)arg1 ;
-(void)setIsUpdateVersion:(NSNumber *)arg1 ;
-(void)setIsUpdateBuild:(NSNumber *)arg1 ;
-(void)setCodePointInvokesTotal:(NSDictionary *)arg1 ;
-(void)setCodePointInvokesVersion:(NSDictionary *)arg1 ;
-(void)setCodePointInvokesBuild:(NSDictionary *)arg1 ;
-(void)setCodePointInvokesTimeAgo:(NSDictionary *)arg1 ;
-(void)setInteractionInvokesTotal:(NSDictionary *)arg1 ;
-(void)setInteractionInvokesVersion:(NSDictionary *)arg1 ;
-(void)setInteractionInvokesBuild:(NSDictionary *)arg1 ;
-(void)setInteractionInvokesTimeAgo:(NSDictionary *)arg1 ;
-(NSString *)sdkVersion;
-(void)setCurrentTime:(NSNumber *)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setApplicationVersion:(NSString *)arg1 ;
-(NSString *)applicationVersion;
-(NSNumber *)currentTime;
@end

