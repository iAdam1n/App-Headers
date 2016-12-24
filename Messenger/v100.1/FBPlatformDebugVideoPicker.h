/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:20 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIImagePickerControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@class UIViewController, NSString;

@interface FBPlatformDebugVideoPicker : NSObject <UIImagePickerControllerDelegate, UINavigationControllerDelegate> {

	/*^block*/id _completion;
	UIViewController* _viewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_addSourceType:(long long)arg1 withTitle:(id)arg2 toAlertController:(id)arg3 ;
-(void)_completeWithInfo:(id)arg1 ;
-(void)_showImagePickerWithSourceType:(long long)arg1 ;
-(void)showFromViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
@end
