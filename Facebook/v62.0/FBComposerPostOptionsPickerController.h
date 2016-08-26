/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBComposerPostOptionsPickerViewControllerDelegate.h>
#import <Facebook/FBComposerPickerController.h>
#import <Facebook/FBComposerCompositionStateChangedListener.h>

@protocol FBComposerUpdateHandler;
@class FBComposerPostOptionsPickerViewController, NSDate, NSString;

@interface FBComposerPostOptionsPickerController : NSObject <FBComposerPostOptionsPickerViewControllerDelegate, FBComposerPickerController, FBComposerCompositionStateChangedListener> {

	FBComposerPostOptionsPickerViewController* _postOptionsViewController;
	unsigned long long _savedPostContentType;
	NSDate* _savedDate;
	unsigned long long _allowedPostContentTypeOptions;
	id<FBComposerUpdateHandler> _updateHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)composerCompositionStateChangedFromPreviousCompositionState:(id)arg1 toCurrentCompositionState:(id)arg2 ;
-(id)presentableViewController;
-(unsigned long long)popoverStyle;
-(CGSize)popoverContentSizeForOrientation:(long long)arg1 ;
-(void)dismissPopoverController;
-(void)postOptionsViewControllerDidFinishWithContentType:(unsigned long long)arg1 cancelled:(BOOL)arg2 didPickDate:(id)arg3 ;
-(id)initWithUpdateHandler:(id)arg1 ;
@end
