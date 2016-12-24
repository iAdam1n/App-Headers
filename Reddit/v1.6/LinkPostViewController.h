/*
* This header is generated by classdump-dyld 1.0
* on Friday, September 2, 2016 at 11:33:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/B5820A38-022A-49BE-9A80-72DC946299E2/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reddit/Reddit-Structs.h>
#import <Reddit/PostViewController.h>
#import <UIKit/UITextViewDelegate.h>
#import <Reddit/BaseTextViewDelegate.h>

@class BaseScrollView, BaseTextView, NSString;

@interface LinkPostViewController : PostViewController <UITextViewDelegate, BaseTextViewDelegate> {

	BaseScrollView* _wrapperScrollView;
	BaseTextView* _linkView;
	BaseTextView* _titleView;
	BaseTextView* _titleCharacterLimitIndicatorView;
	NSString* _prefilledLinkUrl;
	NSString* _prefilledTitle;

}

@property (nonatomic,retain) BaseScrollView * wrapperScrollView;                           //@synthesize wrapperScrollView=_wrapperScrollView - In the implementation block
@property (nonatomic,retain) BaseTextView * linkView;                                      //@synthesize linkView=_linkView - In the implementation block
@property (nonatomic,retain) BaseTextView * titleView;                                     //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,retain) BaseTextView * titleCharacterLimitIndicatorView;              //@synthesize titleCharacterLimitIndicatorView=_titleCharacterLimitIndicatorView - In the implementation block
@property (nonatomic,copy) NSString * prefilledLinkUrl;                                    //@synthesize prefilledLinkUrl=_prefilledLinkUrl - In the implementation block
@property (nonatomic,copy) NSString * prefilledTitle;                                      //@synthesize prefilledTitle=_prefilledTitle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didTapPostButton:(id)arg1 ;
-(void)moveCaretIfPossibleInScrollView:(id)arg1 ;
-(BaseTextView *)linkView;
-(BOOL)textViewShouldChangeSize:(id)arg1 ;
-(void)textView:(id)arg1 didChangeToNewSize:(CGSize)arg2 ;
-(void)setLinkView:(BaseTextView *)arg1 ;
-(BaseScrollView *)wrapperScrollView;
-(BaseTextView *)titleCharacterLimitIndicatorView;
-(void)layoutTextFieldsInScroller;
-(void)setWrapperScrollView:(BaseScrollView *)arg1 ;
-(void)setTitleCharacterLimitIndicatorView:(BaseTextView *)arg1 ;
-(NSString *)prefilledTitle;
-(NSString *)prefilledLinkUrl;
-(void)setPrefilledTitle:(NSString *)arg1 ;
-(void)setPrefilledLinkUrl:(NSString *)arg1 ;
-(void)prefillWithTitle:(id)arg1 linkURL:(id)arg2 ;
-(id)init;
-(BOOL)resignFirstResponder;
-(void)viewWillLayoutSubviews;
-(BaseTextView *)titleView;
-(void)setTitleView:(BaseTextView *)arg1 ;
-(void)viewDidLoad;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textViewDidChange:(id)arg1 ;
@end
