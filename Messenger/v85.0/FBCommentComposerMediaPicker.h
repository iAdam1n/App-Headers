/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:23 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBCommentComposerMediaController.h>
#import <Messenger/FBMediaAttachmentPickerControllerDelegate.h>

@class FBMediaAttachmentPickerController, UIViewController, NSString;

@interface FBCommentComposerMediaPicker : FBCommentComposerMediaController <FBMediaAttachmentPickerControllerDelegate> {

	FBMediaAttachmentPickerController* _mediaPickerController;
	UIViewController* _presentedPhotoPicker;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)mediaAttachmentPickerController:(id)arg1 didSelectMediaAttachments:(id)arg2 fromSource:(long long)arg3 ;
-(void)mediaAttachmentPickerControllerDidCancel:(id)arg1 ;
-(void)mediaAttachmentPickerControllerPermissionDenied:(id)arg1 ;
-(void)mediaAttachmentPickerControllerDidClearMediaAttachments:(id)arg1 ;
-(void)presentMediaPicker:(id)arg1 ;
-(void)_dismissPhotoPicker;
@end
