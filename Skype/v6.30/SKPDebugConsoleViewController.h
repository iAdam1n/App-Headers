/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:38 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/SKPViewController.h>
#import <libobjc.A.dylib/MFMailComposeViewControllerDelegate.h>

@class MKTextView, NSString;

@interface SKPDebugConsoleViewController : SKPViewController <MFMailComposeViewControllerDelegate> {

	MKTextView* _textView;

}

@property (nonatomic,readonly) MKTextView * textView;               //@synthesize textView=_textView - In the implementation block
@property (nonatomic,copy) NSString * text; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didCancelConsoleView:(id)arg1 ;
-(void)didTapSendEmail:(id)arg1 ;
-(void)loadView;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)viewDidLoad;
-(MKTextView *)textView;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3 ;
@end
