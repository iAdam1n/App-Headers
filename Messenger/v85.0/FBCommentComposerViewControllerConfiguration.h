/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:23 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBMemTextWithEntities;

@interface FBCommentComposerViewControllerConfiguration : FBValueObject <NSCopying> {

	BOOL _shouldActivateCommentComposer;
	BOOL _shouldDockComposerAfterLastComment;
	BOOL _shouldComposerClipToBounds;
	BOOL _useFloatingViewMentionsPicker;
	unsigned long long _theme;
	NSString* _composerActivationSource;
	FBMemTextWithEntities* _composerPrefillText;

}

@property (nonatomic,readonly) unsigned long long theme;                                      //@synthesize theme=_theme - In the implementation block
@property (nonatomic,readonly) BOOL shouldActivateCommentComposer;                            //@synthesize shouldActivateCommentComposer=_shouldActivateCommentComposer - In the implementation block
@property (nonatomic,copy,readonly) NSString * composerActivationSource;                      //@synthesize composerActivationSource=_composerActivationSource - In the implementation block
@property (nonatomic,copy,readonly) FBMemTextWithEntities * composerPrefillText;              //@synthesize composerPrefillText=_composerPrefillText - In the implementation block
@property (nonatomic,readonly) BOOL shouldDockComposerAfterLastComment;                       //@synthesize shouldDockComposerAfterLastComment=_shouldDockComposerAfterLastComment - In the implementation block
@property (nonatomic,readonly) BOOL shouldComposerClipToBounds;                               //@synthesize shouldComposerClipToBounds=_shouldComposerClipToBounds - In the implementation block
@property (nonatomic,readonly) BOOL useFloatingViewMentionsPicker;                            //@synthesize useFloatingViewMentionsPicker=_useFloatingViewMentionsPicker - In the implementation block
-(id)initWithTheme:(unsigned long long)arg1 shouldActivateCommentComposer:(BOOL)arg2 composerActivationSource:(id)arg3 composerPrefillText:(id)arg4 shouldDockComposerAfterLastComment:(BOOL)arg5 shouldComposerClipToBounds:(BOOL)arg6 useFloatingViewMentionsPicker:(BOOL)arg7 ;
-(BOOL)shouldActivateCommentComposer;
-(NSString *)composerActivationSource;
-(FBMemTextWithEntities *)composerPrefillText;
-(BOOL)shouldDockComposerAfterLastComment;
-(BOOL)shouldComposerClipToBounds;
-(BOOL)useFloatingViewMentionsPicker;
-(unsigned long long)theme;
@end
