/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:12 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol IGDirectKeyboardTextViewControllerDelegate <NSObject>
@optional
-(BOOL)keyboardTextViewController:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3;
-(void)keyboardTextViewController:(id)arg1 textViewWillBeginEditing:(id)arg2;
-(void)keyboardTextViewController:(id)arg1 textViewDidBeginEditing:(id)arg2;
-(void)keyboardTextViewController:(id)arg1 textViewDidEndEditing:(id)arg2;
-(void)keyboardTextViewController:(id)arg1 textViewDidChange:(id)arg2;
-(void)keyboardTextViewController:(id)arg1 didObserveKeyboardFrameChangingToFrame:(CGRect)arg2;

@required
-(void)keyboardTextViewController:(id)arg1 didTapSendWithText:(id)arg2;
-(void)keyboardTextViewControllerDidTapCamera:(id)arg1;
-(void)keyboardTextViewControllerDidTapLike:(id)arg1;
-(void)keyboardTextViewController:(id)arg1 didChangeContentHeightToHeight:(double)arg2;
-(void)keyboardTextViewControllerDidDismissCamera:(id)arg1;
-(void)keyboardTextViewControllerDidTapCameraBackButton:(id)arg1;

@end

