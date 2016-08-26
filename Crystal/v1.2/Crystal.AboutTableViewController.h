/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:12:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/CF12D463-F5F0-40C2-A761-CC2E709AB052/Crystal.app/Crystal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <Crystal/SFSafariViewControllerDelegate.h>
#import <Crystal/MFMailComposeViewControllerDelegate.h>

@class NSArray, UILabel;

@interface Crystal.AboutTableViewController : UITableViewController <SFSafariViewControllerDelegate, MFMailComposeViewControllerDelegate> {

	 imageDataModel;
	 mainLabelDataModel;
	 subLabelDataModel;
	 versionLabel;

}

@property (readonly,nonatomic) NSArray * mainLabelDataModel; 
@property (copy,nonatomic) NSArray * subLabelDataModel; 
@property (assign,__weak,nonatomic) UILabel * versionLabel; 
-(NSArray *)mainLabelDataModel;
-(NSArray *)subLabelDataModel;
-(void)setSubLabelDataModel:(NSArray *)arg1 ;
-(UILabel *)versionLabel;
-(void)setVersionLabel:(UILabel *)arg1 ;
-(void)showWebview:(id)arg1 ;
-(id)configuredMailComposeViewController;
-(id)initWithCoder:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)didReceiveMemoryWarning;
-(id)initWithStyle:(long long)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3 ;
-(void)safariViewControllerDidFinish:(id)arg1 ;
@end
