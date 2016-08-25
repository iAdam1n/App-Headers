/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:42 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/SolitaireFree-Structs.h>
#import <SolitaireFree/MWPViewController.h>
#import <UIKit/UINavigationControllerDelegate.h>

@class UIView, MWFlatButton, UISlider, UILabel, UITextView, UIWebView, UIImageView, NSString;

@interface WinPercent : MWPViewController <UINavigationControllerDelegate> {

	unsigned char loaded;
	UIView* cview;
	MWFlatButton* doneButton;
	UISlider* percentCtl;
	UILabel* winLabel;
	UILabel* randomLabel;
	UITextView* descLabel;
	UIWebView* webView;
	UIImageView* topLine;
	UILabel* percentLabel;
	UILabel* slideHelpLabel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithMain:(id)arg1 ;
-(CGSize)suggestedSize:(long long)arg1 ;
-(void)doneAction:(id)arg1 ;
-(void)moveControls:(long long)arg1 ;
-(void)loadWebView;
-(void)sliderAction:(id)arg1 ;
-(void)setPercentLabelText:(int)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
@end

