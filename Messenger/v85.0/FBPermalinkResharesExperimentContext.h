/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:26 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface FBPermalinkResharesExperimentContext : FBExperimentContext {

	BOOL _showShareSentence;
	BOOL _hoistConnectedReshares;
	BOOL _collapseAttachedStories;
	BOOL _useNamesInShareSentence;
	BOOL _useIconInShareSentence;
	BOOL _showResharePreview;
	BOOL _showMessageInResharePreview;
	long long _accurateShareCountUnderEqualTo;

}

@property (nonatomic,readonly) BOOL showShareSentence;                                //@synthesize showShareSentence=_showShareSentence - In the implementation block
@property (nonatomic,readonly) BOOL hoistConnectedReshares;                           //@synthesize hoistConnectedReshares=_hoistConnectedReshares - In the implementation block
@property (nonatomic,readonly) BOOL collapseAttachedStories;                          //@synthesize collapseAttachedStories=_collapseAttachedStories - In the implementation block
@property (nonatomic,readonly) BOOL useNamesInShareSentence;                          //@synthesize useNamesInShareSentence=_useNamesInShareSentence - In the implementation block
@property (nonatomic,readonly) BOOL useIconInShareSentence;                           //@synthesize useIconInShareSentence=_useIconInShareSentence - In the implementation block
@property (nonatomic,readonly) BOOL showResharePreview;                               //@synthesize showResharePreview=_showResharePreview - In the implementation block
@property (nonatomic,readonly) BOOL showMessageInResharePreview;                      //@synthesize showMessageInResharePreview=_showMessageInResharePreview - In the implementation block
@property (nonatomic,readonly) long long accurateShareCountUnderEqualTo;              //@synthesize accurateShareCountUnderEqualTo=_accurateShareCountUnderEqualTo - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
-(long long)accurateShareCountUnderEqualTo;
-(BOOL)showShareSentence;
-(BOOL)hoistConnectedReshares;
-(BOOL)collapseAttachedStories;
-(BOOL)useNamesInShareSentence;
-(BOOL)useIconInShareSentence;
-(BOOL)showResharePreview;
-(BOOL)showMessageInResharePreview;
@end
