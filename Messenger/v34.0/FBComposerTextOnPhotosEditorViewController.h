/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:36 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITextViewDelegate.h>
#import <Messenger/FBDrawColorScrubberDelegate.h>
#import <Messenger/FBComposerTextOnPhotosEditorTrayViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol FBComposerTextOnPhotosEditorViewControllerDelegate;
@class NSString, UIView, FBDrawColorScrubber, FBDismissalDoneButton, FBTextOnPhotosLogger, FBComposerPhotoOverlayTextView, FBGrowingTextView, FBUserSession;

@interface FBComposerTextOnPhotosEditorViewController : UIViewController <UITextViewDelegate, FBDrawColorScrubberDelegate, FBComposerTextOnPhotosEditorTrayViewDelegate, UIGestureRecognizerDelegate> {

	NSString* _assetID;
	UIView* _overlayView;
	FBDrawColorScrubber* _colorScrubber;
	unsigned long long _currentNumberOfCharacters;
	FBDismissalDoneButton* _doneButton;
	CGRect _keyboardFrame;
	FBTextOnPhotosLogger* _logger;
	CGSize _maxTextViewSize;
	BOOL _needsUpdate;
	FBComposerPhotoOverlayTextView* _photoOverlayTextView;
	FBGrowingTextView* _textView;
	FBUserSession* _session;
	id<FBComposerTextOnPhotosEditorViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBComposerTextOnPhotosEditorViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_keyboardWillChangeFrameWithNotification:(id)arg1 ;
-(void)colorScrubber:(id)arg1 didChooseColor:(id)arg2 ;
-(void)colorScrubber:(id)arg1 didChooseSize:(double)arg2 ;
-(void)composerTextOnPhotosEditorTrayView:(id)arg1 didSwitchToFont:(id)arg2 ;
-(void)_revealTextView;
-(void)_layoutColorScrubber;
-(CGSize)_sizeForTextView:(id)arg1 ;
-(void)_layoutTextView;
-(double)_colorScrubberHeight;
-(void)composerTextOnPhotosEditorTrayView:(id)arg1 didSwitchtoTextAlignment:(long long)arg2 ;
-(id)initWithPhotoOverlayView:(id)arg1 assetID:(id)arg2 logger:(id)arg3 session:(id)arg4 ;
-(void)dealloc;
-(void)setDelegate:(id<FBComposerTextOnPhotosEditorViewControllerDelegate>)arg1 ;
-(id<FBComposerTextOnPhotosEditorViewControllerDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)viewWillLayoutSubviews;
-(id)topLayoutGuide;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)_dismiss;
-(id)_newTextView;
@end

