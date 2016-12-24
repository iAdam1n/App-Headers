/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 7:32:38 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/7A9B3F5D-7CE0-4395-B5B1-42A1050C3CA9/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AngryBirdsClassic/AngryBirdsClassic-Structs.h>
#import <UIKit/UIDocumentInteractionControllerDelegate.h>

@class UIViewController, UIDocumentInteractionController, NSString;

@interface ShareDelegate : NSObject <UIDocumentInteractionControllerDelegate> {

	UIViewController* m_vc;
	function<void ()>* m_callback;
	BOOL m_imageShared;
	UIDocumentInteractionController* _m_controller;

}

@property (nonatomic,retain) UIDocumentInteractionController * m_controller;              //@synthesize m_controller=_m_controller - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setM_controller:(UIDocumentInteractionController *)arg1 ;
-(UIDocumentInteractionController *)m_controller;
-(void)openFileFromView:(id)arg1 name:(id)arg2 path:(id)arg3 callback:(function<void ()>*)arg4 ;
-(void)openImageFromView:(id)arg1 name:(id)arg2 path:(id)arg3 callback:(function<void ()>*)arg4 ;
-(void)previewDocumentWithURL:(id)arg1 ;
-(id)init;
-(id)documentInteractionControllerViewControllerForPreview:(id)arg1 ;
-(CGRect)documentInteractionControllerRectForPreview:(id)arg1 ;
-(id)documentInteractionControllerViewForPreview:(id)arg1 ;
-(void)documentInteractionControllerDidEndPreview:(id)arg1 ;
-(void)documentInteractionControllerDidDismissOptionsMenu:(id)arg1 ;
-(void)documentInteractionControllerDidDismissOpenInMenu:(id)arg1 ;
@end
