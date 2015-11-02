/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:58 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <WhatsApp/WAViewController.h>

@class UITextView;

@interface WADatabaseIntegrityCheckerViewController : WAViewController {

	UITextView* _consoleTextView;

}

@property (nonatomic,retain) UITextView * consoleTextView;              //@synthesize consoleTextView=_consoleTextView - In the implementation block
-(void)email:(id)arg1 ;
-(UITextView *)consoleTextView;
-(void)performRepairChatDatabase;
-(void)checkDatabaseIntegrity:(id)arg1 ;
-(void)repairChatDatabase:(id)arg1 ;
-(void)setConsoleTextView:(UITextView *)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
@end
