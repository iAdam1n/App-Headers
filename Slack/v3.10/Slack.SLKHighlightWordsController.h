/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:38:01 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B4EAB98E-4B8F-47BB-A92B-B0524BEFEA49/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITextViewDelegate.h>

@class NSString, UIScrollView, UITextView, UILabel;

@interface Slack.SLKHighlightWordsController : UIViewController <UITextViewDelegate> {

	 footerText;
	 scrollView;
	 textView;
	 footer;
	 highlightWords;
	 dependencies;

}

@property (readonly,nonatomic) NSString * footerText; 
@property (readonly,nonatomic) UIScrollView * scrollView; 
@property (readonly,nonatomic) UITextView * textView; 
@property (readonly,nonatomic) UILabel * footer; 
@property (readonly,nonatomic) double textViewHeight; 
@property (readonly,nonatomic) double topPadding; 
@property (readonly,nonatomic) double footerPadding; 
@property (copy,nonatomic) NSString * highlightWords; 
-(void)setHighlightWords:(NSString *)arg1 ;
-(NSString *)highlightWords;
-(void)scrollViewTapped:(id)arg1 ;
-(double)textViewHeight;
-(double)footerPadding;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(UIScrollView *)scrollView;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(UITextView *)textView;
-(double)topPadding;
-(id)initWithDependencies:(id)arg1 ;
-(UILabel *)footer;
-(void)keyboardWasShown:(id)arg1 ;
-(void)keyboardWillBeHidden:(id)arg1 ;
-(NSString *)footerText;
@end
