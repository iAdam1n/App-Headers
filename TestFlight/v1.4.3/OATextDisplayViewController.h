/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:48:08 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/C8BBB3B7-A738-4D43-8A19-90B2CFB12AE1/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class OASSessionContext, UITextView, UIActivityIndicatorView;

@interface OATextDisplayViewController : UIViewController {

	OASSessionContext* _sessionContext;
	UITextView* _textView;
	UIActivityIndicatorView* _activityIndicatorView;

}

@property (nonatomic,retain) OASSessionContext * sessionContext;                           //@synthesize sessionContext=_sessionContext - In the implementation block
@property (nonatomic,retain) UITextView * textView;                                        //@synthesize textView=_textView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicatorView;              //@synthesize activityIndicatorView=_activityIndicatorView - In the implementation block
-(OASSessionContext *)sessionContext;
-(void)setSessionContext:(OASSessionContext *)arg1 ;
-(id)initWithSessionContext:(id)arg1 ;
-(void)loadTextWithURL:(id)arg1 ;
-(id)_parseTextFromResponse:(id)arg1 ;
-(void)didReceiveMemoryWarning;
-(void)loadView;
-(void)setTextView:(UITextView *)arg1 ;
-(void)viewDidLoad;
-(UITextView *)textView;
-(void)_displayError:(id)arg1 ;
-(UIActivityIndicatorView *)activityIndicatorView;
-(void)setActivityIndicatorView:(UIActivityIndicatorView *)arg1 ;
@end
