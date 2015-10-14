/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:41:48 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/3A543D9E-77DF-4DA3-955A-044E51462F63/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <PTHCommon/PTHViewController.h>
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
-(void)changePostInBackground:(id)arg1 ;
-(id)modalCancelButtonTitle;
-(long long)preferredStatusBarStyle;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3 ;
@end

