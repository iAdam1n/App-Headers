/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:44 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@interface FBSouvenirsPromptDesignExperimentContext : FBExperimentContext {

	BOOL _promptsProviderEnabled_v55;
	BOOL _promptsProviderShouldCreatePrompts_v55;
	BOOL _promptSouvenirCountsLoggingEnabled;
	BOOL _promptBlockPreviouslyDisplayedPrompt;
	BOOL _promptShouldFilterOutVideosV51;
	unsigned long long _promptMaximumStoryAgeInDays;
	unsigned long long _promptMinimumPhotosWithFaces;
	unsigned long long _promptMinimumAssetCount;
	unsigned long long _promptBlockPromptAfterDismissPeriodInHours;

}

@property (nonatomic,readonly) BOOL promptsProviderEnabled_v55;                                            //@synthesize promptsProviderEnabled_v55=_promptsProviderEnabled_v55 - In the implementation block
@property (nonatomic,readonly) BOOL promptsProviderShouldCreatePrompts_v55;                                //@synthesize promptsProviderShouldCreatePrompts_v55=_promptsProviderShouldCreatePrompts_v55 - In the implementation block
@property (nonatomic,readonly) BOOL promptSouvenirCountsLoggingEnabled;                                    //@synthesize promptSouvenirCountsLoggingEnabled=_promptSouvenirCountsLoggingEnabled - In the implementation block
@property (nonatomic,readonly) unsigned long long promptMaximumStoryAgeInDays;                             //@synthesize promptMaximumStoryAgeInDays=_promptMaximumStoryAgeInDays - In the implementation block
@property (nonatomic,readonly) unsigned long long promptMinimumPhotosWithFaces;                            //@synthesize promptMinimumPhotosWithFaces=_promptMinimumPhotosWithFaces - In the implementation block
@property (nonatomic,readonly) unsigned long long promptMinimumAssetCount;                                 //@synthesize promptMinimumAssetCount=_promptMinimumAssetCount - In the implementation block
@property (nonatomic,readonly) BOOL promptBlockPreviouslyDisplayedPrompt;                                  //@synthesize promptBlockPreviouslyDisplayedPrompt=_promptBlockPreviouslyDisplayedPrompt - In the implementation block
@property (nonatomic,readonly) unsigned long long promptBlockPromptAfterDismissPeriodInHours;              //@synthesize promptBlockPromptAfterDismissPeriodInHours=_promptBlockPromptAfterDismissPeriodInHours - In the implementation block
@property (nonatomic,readonly) BOOL promptShouldFilterOutVideosV51;                                        //@synthesize promptShouldFilterOutVideosV51=_promptShouldFilterOutVideosV51 - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
-(BOOL)promptShouldFilterOutVideosV51;
-(BOOL)promptsProviderShouldCreatePrompts_v55;
-(BOOL)promptSouvenirCountsLoggingEnabled;
-(BOOL)promptsProviderEnabled_v55;
-(unsigned long long)promptMaximumStoryAgeInDays;
-(unsigned long long)promptMinimumPhotosWithFaces;
-(unsigned long long)promptMinimumAssetCount;
-(BOOL)promptBlockPreviouslyDisplayedPrompt;
-(unsigned long long)promptBlockPromptAfterDismissPeriodInHours;
@end
