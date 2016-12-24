/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:27 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol FBNavigationCoordinator, FBIntentHandler;
@class FBUserSession, NSString, FBScenePath, FBFontFoundry, FBFeedCustomizationSet, UITraitCollection;

@interface FBFeedToolbox : NSObject <NSCopying> {

	FBUserSession* _session;
	id<FBNavigationCoordinator> _navigationCoordinator;
	id<FBIntentHandler> _intentHandler;
	unsigned long long _layoutIdiom;
	NSString* _analyticsModule;
	FBScenePath* _scenePath;
	FBFontFoundry* _fontFoundry;
	FBFeedCustomizationSet* _feedCustomizationSet;
	UITraitCollection* _traitCollection;

}

@property (nonatomic,readonly) FBUserSession * session;                                        //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) id<FBNavigationCoordinator> navigationCoordinator;              //@synthesize navigationCoordinator=_navigationCoordinator - In the implementation block
@property (nonatomic,readonly) id<FBIntentHandler> intentHandler;                              //@synthesize intentHandler=_intentHandler - In the implementation block
@property (nonatomic,readonly) unsigned long long layoutIdiom;                                 //@synthesize layoutIdiom=_layoutIdiom - In the implementation block
@property (nonatomic,copy,readonly) NSString * analyticsModule;                                //@synthesize analyticsModule=_analyticsModule - In the implementation block
@property (nonatomic,copy,readonly) FBScenePath * scenePath;                                   //@synthesize scenePath=_scenePath - In the implementation block
@property (nonatomic,readonly) FBFontFoundry * fontFoundry;                                    //@synthesize fontFoundry=_fontFoundry - In the implementation block
@property (nonatomic,readonly) FBFeedCustomizationSet * feedCustomizationSet;                  //@synthesize feedCustomizationSet=_feedCustomizationSet - In the implementation block
@property (nonatomic,copy,readonly) UITraitCollection * traitCollection;                       //@synthesize traitCollection=_traitCollection - In the implementation block
+(id)newWithSession:(id)arg1 navigationCoordinator:(id)arg2 intentHandler:(id)arg3 layoutIdiom:(unsigned long long)arg4 analyticsModule:(id)arg5 scenePath:(id)arg6 fontFoundry:(id)arg7 feedCustomizationSet:(id)arg8 ;
-(NSString *)analyticsModule;
-(id<FBNavigationCoordinator>)navigationCoordinator;
-(id<FBIntentHandler>)intentHandler;
-(FBScenePath *)scenePath;
-(FBFeedCustomizationSet *)feedCustomizationSet;
-(unsigned long long)layoutIdiom;
-(id)videoPlayerOrigin;
-(FBFontFoundry *)fontFoundry;
-(id)experimentCache;
-(id)valueFromTransformer:(/*function pointer*/void*)arg1 parameter:(id)arg2 ;
-(UITraitCollection *)traitCollection;
-(id)copyWithZone:(NSZone*)arg1 ;
-(FBUserSession *)session;
@end
