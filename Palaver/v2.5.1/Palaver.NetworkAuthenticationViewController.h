/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:32:45 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F45DA058-3924-4296-8466-9187DEE2ADBC/Palaver.app/Palaver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@class _TtC7Palaver34EditNetworkAuthenticationViewModel;

@interface Palaver.NetworkAuthenticationViewController : UITableViewController {

	 viewModelDisposeBag;
	 viewModel;

}

@property (retain,nonatomic) _TtC7Palaver34EditNetworkAuthenticationViewModel * viewModel; 
-(void)configureViewModel:(id)arg1 ;
-(void)handleSave;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(id)initWithStyle:(long long)arg1 ;
-(_TtC7Palaver34EditNetworkAuthenticationViewModel *)viewModel;
-(void)setViewModel:(_TtC7Palaver34EditNetworkAuthenticationViewModel *)arg1 ;
-(void)handleCancel;
@end
