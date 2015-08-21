/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:23:35 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/4CADE18B-4AB7-484E-AA99-AF6CAB7B8341/Palaver.app/Palaver
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
-(PLVEditNetworkViewModel *)viewModel;
-(void)setViewModel:(PLVEditNetworkViewModel *)arg1 ;
-(void)setAuthenticationSchemes:(NSArray *)arg1 ;
-(NSArray *)authenticationSchemes;
-(void)setSelectedAuthenticationScheme:(PLVNetworkAuthenticationScheme *)arg1 ;
-(void)handleCancel;
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
@end
