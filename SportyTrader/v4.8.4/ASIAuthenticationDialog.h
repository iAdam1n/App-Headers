/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:45:08 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/5A964037-04EE-4DC1-9951-0A6265E75908/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/ASIAutorotatingViewController.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class ASIHTTPRequest, UITableView, UIViewController, NSString;

@interface ASIAuthenticationDialog : ASIAutorotatingViewController <UIActionSheetDelegate, UITableViewDelegate, UITableViewDataSource> {

	ASIHTTPRequest* request;
	int type;
	UITableView* tableView;
	UIViewController* presentingController;
	BOOL didEnableRotationNotifications;

}

@property (retain) UITableView * tableView; 
@property (retain) ASIHTTPRequest * request; 
@property (assign) int type; 
@property (assign) BOOL didEnableRotationNotifications; 
@property (nonatomic,retain) UIViewController * presentingController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)presentAuthenticationDialogForRequest:(id)arg1 ;
+(void)initialize;
+(void)dismiss;
-(void)setDidEnableRotationNotifications:(BOOL)arg1 ;
-(BOOL)didEnableRotationNotifications;
-(id)textFieldInRow:(unsigned long long)arg1 section:(unsigned long long)arg2 ;
-(void)presentNextDialog;
-(void)cancelAuthenticationFromDialog:(id)arg1 ;
-(void)loginWithCredentialsFromDialog:(id)arg1 ;
-(UIViewController *)presentingController;
-(id)requestsRequiringTheseCredentials;
-(id)usernameField;
-(id)domainField;
-(void)setPresentingController:(UIViewController *)arg1 ;
-(id)init;
-(void)show;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(ASIHTTPRequest *)request;
-(void)setType:(int)arg1 ;
-(int)type;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(UITableView *)tableView;
-(void)dismiss;
-(id)passwordField;
-(void)setRequest:(ASIHTTPRequest *)arg1 ;
-(void)showTitle;
-(void)keyboardWillShow:(id)arg1 ;
-(void)orientationChanged:(id)arg1 ;
@end
