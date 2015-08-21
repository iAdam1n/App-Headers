/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:50 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/NSCopying.h>

@class MNComposerImageLoader, UIColor;

@interface MNComposerTabBarIcon : FBValueObject <NSCopying> {

	BOOL _usesCircularMask;
	BOOL _usesBackgroundSelection;
	MNComposerImageLoader* _normalComposerImageLoader;
	MNComposerImageLoader* _selectedComposerImageLoader;
	UIColor* _iconColor;

}

@property (nonatomic,copy,readonly) MNComposerImageLoader * normalComposerImageLoader;                //@synthesize normalComposerImageLoader=_normalComposerImageLoader - In the implementation block
@property (nonatomic,copy,readonly) MNComposerImageLoader * selectedComposerImageLoader;              //@synthesize selectedComposerImageLoader=_selectedComposerImageLoader - In the implementation block
@property (nonatomic,readonly) BOOL usesCircularMask;                                                 //@synthesize usesCircularMask=_usesCircularMask - In the implementation block
@property (nonatomic,readonly) BOOL usesBackgroundSelection;                                          //@synthesize usesBackgroundSelection=_usesBackgroundSelection - In the implementation block
@property (nonatomic,copy,readonly) UIColor * iconColor;                                              //@synthesize iconColor=_iconColor - In the implementation block
-(BOOL)usesCircularMask;
-(UIColor *)iconColor;
-(id)initWithNormalComposerImageLoader:(id)arg1 selectedComposerImageLoader:(id)arg2 usesCircularMask:(BOOL)arg3 usesBackgroundSelection:(BOOL)arg4 iconColor:(id)arg5 ;
-(MNComposerImageLoader *)normalComposerImageLoader;
-(MNComposerImageLoader *)selectedComposerImageLoader;
-(BOOL)usesBackgroundSelection;
@end

