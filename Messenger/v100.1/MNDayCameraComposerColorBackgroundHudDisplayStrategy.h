/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:17 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNMontageComposerHudDisplayStrategy.h>

@class NSString;

@interface MNDayCameraComposerColorBackgroundHudDisplayStrategy : NSObject <MNMontageComposerHudDisplayStrategy> {

	BOOL _comboEnabled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)navigationConfigWithOverlayContent:(BOOL)arg1 editingWithArtPicker:(BOOL)arg2 unreadBadgeCount:(long long)arg3 selectedContentsCount:(long long)arg4 dismissOption:(unsigned long long)arg5 ;
-(BOOL)shouldShowEditControls;
-(BOOL)shouldShowSaveButton;
-(BOOL)shouldShowColorBackgroundButton;
-(BOOL)shouldShowCameraCaptureButton;
-(BOOL)shouldShowCameraControls;
-(BOOL)shouldShowBottomHintWithOverlayContent:(BOOL)arg1 ;
-(id)initWithComboEnabled:(BOOL)arg1 ;
-(BOOL)shouldShowPlaceholder;
-(BOOL)shouldShowMuteButton;
@end
