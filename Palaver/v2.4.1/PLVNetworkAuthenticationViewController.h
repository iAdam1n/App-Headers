/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:21:52 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6DE74A4E-11EF-47B8-8E27-4C42F9CB282C/Palaver.app/Palaver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@class PLVEditNetworkViewModel, NSArray, PLVNetworkAuthenticationScheme;

@interface PLVNetworkAuthenticationViewController : UITableViewController {

	PLVEditNetworkViewModel* _viewModel;
	NSArray* _authenticationSchemes;
	PLVNetworkAuthenticationScheme* _selectedAuthenticationScheme;

}

@property (nonatomic,retain) NSArray * authenticationSchemes;                                            //@synthesize authenticationSchemes=_authenticationSchemes - In the implementation block
@property (nonatomic,retain) PLVNetworkAuthenticationScheme * selectedAuthenticationScheme;              //@synthesize selectedAuthenticationScheme=_selectedAuthenticationScheme - In the implementation block
@property (nonatomic,retain) PLVEditNetworkViewModel * viewModel;                                        //@synthesize viewModel=_viewModel - In the implementation block
-(void)setAuthenticationSchemes:(NSArray *)arg1 ;
-(NSArray *)authenticationSchemes;
-(void)setSelectedAuthenticationScheme:(PLVNetworkAuthenticationScheme *)arg1 ;
-(void)handleSave;
-(void)updateValidationState;
-(PLVNetworkAuthenticationScheme *)selectedAuthenticationScheme;
-(id)tableView:(id)arg1 cellForServiceAtIndex:(long long)arg2 ;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)viewDidLoad;
-(PLVEditNetworkViewModel *)viewModel;
-(void)setViewModel:(PLVEditNetworkViewModel *)arg1 ;
-(void)handleCancel;
@end

