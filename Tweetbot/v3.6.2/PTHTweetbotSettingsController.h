/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:06:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/ECBB6493-3CD3-4031-8AE5-B625F29152BF/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/PTHViewController.h>
#import <Tweetbot/MFMailComposeViewControllerDelegate.h>

@class NSString;

@interface PTHTweetbotSettingsController : PTHViewController <MFMailComposeViewControllerDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)nameForSoundType:(long long)arg1 ;
+(id)nameForQuoteFormatType:(long long)arg1 ;
+(id)nameForRightSwipeType:(long long)arg1 ;
+(void)initialize;
-(id)modalCancelButtonTitle;
-(void)showSoundSettings:(id)arg1 ;
-(void)showDisplaySettings:(id)arg1 ;
-(void)showStreamingSettings:(id)arg1 ;
-(void)showQuoteFormatSettings:(id)arg1 ;
-(void)showRightSwipeSettings:(id)arg1 ;
-(void)showBrowserSettings:(id)arg1 ;
-(void)showAccountSettings:(id)arg1 ;
-(void)showAbout:(id)arg1 ;
-(void)showEmailOptions:(id)arg1 ;
-(void)_showDeveloperSettings:(id)arg1 ;
-(void)changeImportACAccounts:(id)arg1 ;
-(void)changePostInBackground:(id)arg1 ;
-(void)changeTimeFormat:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3 ;
@end
