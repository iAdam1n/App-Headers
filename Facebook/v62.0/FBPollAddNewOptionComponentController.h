/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKStatefulViewComponentController.h>
#import <UIKit/UITextViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UITapGestureRecognizer, CKTextKitContext, NSString;

@interface FBPollAddNewOptionComponentController : CKStatefulViewComponentController <UITextViewDelegate, UIGestureRecognizerDelegate> {

	UITapGestureRecognizer* _textViewDismissalGestureRecognizer;
	CKTextKitContext* _textKitContext;

}

@property (nonatomic,readonly) CKTextKitContext * textKitContext;              //@synthesize textKitContext=_textKitContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newStatefulView:(id)arg1 ;
+(void)configureStatefulView:(id)arg1 forComponent:(id)arg2 ;
-(void)didAcquireStatefulView:(id)arg1 ;
-(void)willRelinquishStatefulView:(id)arg1 ;
-(BOOL)canRelinquishStatefulView;
-(id)_insetManager;
-(void)_sizeTextView;
-(CKTextKitContext *)textKitContext;
-(void)_textViewDismissalTriggered:(id)arg1 ;
-(void)_layoutTextViewOnTopOfKeyboard;
-(BOOL)_shouldDismissOnKeyboardEnter;
-(void)dealloc;
-(id)init;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)_cleanup;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(BOOL)textViewShouldBeginEditing:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textViewDidChange:(id)arg1 ;
-(id)textView;
@end
