/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:10 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBDetailComponentCell.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class UITableView, FBCrowdsourcingDuplicatesSectionComponentController, FBCrowdsourcingDuplicatesModel, NSString;

@interface FBCrowdsourcingDuplicatesSectionComponentCell : FBDetailComponentCell <UITableViewDataSource, UITableViewDelegate> {

	UITableView* _contentTableView;
	FBCrowdsourcingDuplicatesSectionComponentController* _controller;
	FBCrowdsourcingDuplicatesModel* _model;

}

@property (nonatomic,__weak,readonly) FBCrowdsourcingDuplicatesSectionComponentController * controller;              //@synthesize controller=_controller - In the implementation block
@property (nonatomic,readonly) FBCrowdsourcingDuplicatesModel * model;                                               //@synthesize model=_model - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithController:(id)arg1 model:(id)arg2 ;
-(void)updateTableSize;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(FBCrowdsourcingDuplicatesModel *)model;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(FBCrowdsourcingDuplicatesSectionComponentController *)controller;
@end
