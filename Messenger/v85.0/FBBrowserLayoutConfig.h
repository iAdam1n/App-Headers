/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:25 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBBrowserLayoutHeaderViewConfig, FBBrowserLayoutFooterViewConfig, FBBrowserLayoutDismissGlyphConfig;

@interface FBBrowserLayoutConfig : FBValueObject <NSCopying> {

	BOOL _hasDismissButton;
	BOOL _hasShareButton;
	BOOL _hasSaveButton;
	BOOL _hasSwitcherButton;
	long long _statusBarStyle;
	FBBrowserLayoutHeaderViewConfig* _headerViewConfig;
	FBBrowserLayoutFooterViewConfig* _footerViewConfig;
	FBBrowserLayoutDismissGlyphConfig* _dismissGlyphConfig;

}

@property (nonatomic,readonly) BOOL hasDismissButton;                                                    //@synthesize hasDismissButton=_hasDismissButton - In the implementation block
@property (nonatomic,readonly) BOOL hasShareButton;                                                      //@synthesize hasShareButton=_hasShareButton - In the implementation block
@property (nonatomic,readonly) BOOL hasSaveButton;                                                       //@synthesize hasSaveButton=_hasSaveButton - In the implementation block
@property (nonatomic,readonly) BOOL hasSwitcherButton;                                                   //@synthesize hasSwitcherButton=_hasSwitcherButton - In the implementation block
@property (nonatomic,readonly) long long statusBarStyle;                                                 //@synthesize statusBarStyle=_statusBarStyle - In the implementation block
@property (nonatomic,copy,readonly) FBBrowserLayoutHeaderViewConfig * headerViewConfig;                  //@synthesize headerViewConfig=_headerViewConfig - In the implementation block
@property (nonatomic,copy,readonly) FBBrowserLayoutFooterViewConfig * footerViewConfig;                  //@synthesize footerViewConfig=_footerViewConfig - In the implementation block
@property (nonatomic,copy,readonly) FBBrowserLayoutDismissGlyphConfig * dismissGlyphConfig;              //@synthesize dismissGlyphConfig=_dismissGlyphConfig - In the implementation block
-(id)initWithHasDismissButton:(BOOL)arg1 hasShareButton:(BOOL)arg2 hasSaveButton:(BOOL)arg3 hasSwitcherButton:(BOOL)arg4 statusBarStyle:(long long)arg5 headerViewConfig:(id)arg6 footerViewConfig:(id)arg7 dismissGlyphConfig:(id)arg8 ;
-(FBBrowserLayoutHeaderViewConfig *)headerViewConfig;
-(FBBrowserLayoutDismissGlyphConfig *)dismissGlyphConfig;
-(BOOL)hasSaveButton;
-(BOOL)hasSwitcherButton;
-(BOOL)hasShareButton;
-(FBBrowserLayoutFooterViewConfig *)footerViewConfig;
-(long long)statusBarStyle;
-(BOOL)hasDismissButton;
@end
