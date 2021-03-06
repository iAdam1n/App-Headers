/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:10 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBSearchResultsUserConfig, FBSearchResultsEventConfig, FBSearchResultsGroupConfig, FBSearchResultsPagesConfig;

@interface FBSearchResultsEntitiesConfig : FBValueObject <NSCopying> {

	BOOL _enableMultilineResultsCompactModule;
	FBSearchResultsUserConfig* _userConfig;
	FBSearchResultsEventConfig* _eventConfig;
	FBSearchResultsGroupConfig* _groupConfig;
	FBSearchResultsPagesConfig* _pagesConfig;

}

@property (nonatomic,copy,readonly) FBSearchResultsUserConfig * userConfig;                //@synthesize userConfig=_userConfig - In the implementation block
@property (nonatomic,copy,readonly) FBSearchResultsEventConfig * eventConfig;              //@synthesize eventConfig=_eventConfig - In the implementation block
@property (nonatomic,copy,readonly) FBSearchResultsGroupConfig * groupConfig;              //@synthesize groupConfig=_groupConfig - In the implementation block
@property (nonatomic,copy,readonly) FBSearchResultsPagesConfig * pagesConfig;              //@synthesize pagesConfig=_pagesConfig - In the implementation block
@property (nonatomic,readonly) BOOL enableMultilineResultsCompactModule;                   //@synthesize enableMultilineResultsCompactModule=_enableMultilineResultsCompactModule - In the implementation block
-(BOOL)enableMultilineResultsCompactModule;
-(FBSearchResultsPagesConfig *)pagesConfig;
-(FBSearchResultsUserConfig *)userConfig;
-(FBSearchResultsEventConfig *)eventConfig;
-(FBSearchResultsGroupConfig *)groupConfig;
-(id)initWithUserConfig:(id)arg1 eventConfig:(id)arg2 groupConfig:(id)arg3 pagesConfig:(id)arg4 enableMultilineResultsCompactModule:(BOOL)arg5 ;
@end

