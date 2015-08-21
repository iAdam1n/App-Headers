/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:43 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@class NSString, UIColor;

@interface FBGraphSearchTypeaheadExperimentContext : FBExperimentContext {

	BOOL _restyledSuggestionsEnabled;
	BOOL _showIconOutlineCircle;
	BOOL _bucketizeEntities;
	NSString* _blendedTASuggestionOrder;
	NSString* _rankingExperimentName;
	NSString* _keywordSuggestionIconTintColorHex;

}

@property (nonatomic,readonly) BOOL restyledSuggestionsEnabled;                                //@synthesize restyledSuggestionsEnabled=_restyledSuggestionsEnabled - In the implementation block
@property (nonatomic,readonly) UIColor * keywordSuggestionIconTintColor; 
@property (nonatomic,readonly) BOOL showIconOutlineCircle;                                     //@synthesize showIconOutlineCircle=_showIconOutlineCircle - In the implementation block
@property (nonatomic,copy,readonly) NSString * blendedTASuggestionOrder;                       //@synthesize blendedTASuggestionOrder=_blendedTASuggestionOrder - In the implementation block
@property (nonatomic,readonly) BOOL bucketizeEntities;                                         //@synthesize bucketizeEntities=_bucketizeEntities - In the implementation block
@property (nonatomic,copy,readonly) NSString * rankingExperimentName;                          //@synthesize rankingExperimentName=_rankingExperimentName - In the implementation block
@property (nonatomic,copy,readonly) NSString * keywordSuggestionIconTintColorHex;              //@synthesize keywordSuggestionIconTintColorHex=_keywordSuggestionIconTintColorHex - In the implementation block
+(id)experimentName;
+(id)parameterConfigurations;
-(NSString *)keywordSuggestionIconTintColorHex;
-(UIColor *)keywordSuggestionIconTintColor;
-(BOOL)restyledSuggestionsEnabled;
-(BOOL)showIconOutlineCircle;
-(NSString *)blendedTASuggestionOrder;
-(BOOL)bucketizeEntities;
-(NSString *)rankingExperimentName;
@end

