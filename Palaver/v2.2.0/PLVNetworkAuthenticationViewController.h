/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:50:29 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/34410EF6-4E83-412E-A9C2-1231076AA068/Palaver.app/Palaver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@class PLVEditNetworkViewModel, NSArray, PLVNetworkAuthenticationScheme;

@interface PLVNetworkAuthenticationViewController : UITableViewController {

	PLVEditNetworkViewModel* _viewModel;
	NSArray* _authenticationSchemes;
	PLVNetworkAuthenticationScheme* _selectedAuthenticationScheme;

}

@property (nonatomic,retain) PLVEditNetworkViewModel * viewModel;                                        //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,retain) NSArray * authenticationSchemes;                                            //@synthesize authenticationSchemes=_authenticationSchemes - In the implementation block
@property (nonatomic,retain) PLVNetworkAuthenticationScheme * selectedAuthenticationScheme;              //@synthesize selectedAuthenticationScheme=_selectedAuthenticationScheme - In the implementation block
-(void)setAuthenticationSchemes:(NSArray *)arg1 ;
-(NSArray *)authenticationSchemes;
-(void)setSelectedAuthenticationScheme:(PLVNetworkAuthenticationScheme *)arg1 ;
-(void)handleSave;
-(void)updateValidationState;
-(PLVNetworkAuthenticationScheme *)selectedAuthenticationScheme;
-(id)tableView:(id)arg1 cellForServiceAtIndex:(long long)arg2 ;
-(void)handleCancel;
-(PLVEditNetworkViewModel *)viewModel;
-(void)setViewModel:(PLVEditNetworkViewModel *)arg1 ;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)viewDidLoad;
@end
