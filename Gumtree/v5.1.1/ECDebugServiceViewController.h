/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@class ECSectionMapDataSource, NSArray, ECBaseViewController;

@interface ECDebugServiceViewController : UITableViewController {

	ECSectionMapDataSource* _dataSource;
	NSArray* _services;
	ECBaseViewController* _targetViewController;

}

@property (nonatomic,retain) ECSectionMapDataSource * dataSource;                    //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,copy) NSArray * services;                                       //@synthesize services=_services - In the implementation block
@property (nonatomic,copy) ECBaseViewController * targetViewController;              //@synthesize targetViewController=_targetViewController - In the implementation block
+(id)displayOptionsForViewController:(id)arg1 ;
-(void)updateSectionMapAnimated:(BOOL)arg1 ;
-(id)initWithServices:(id)arg1 ;
-(void)setTargetViewController:(ECBaseViewController *)arg1 ;
-(void)setDataSource:(ECSectionMapDataSource *)arg1 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(ECSectionMapDataSource *)dataSource;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)close;
-(NSArray *)services;
-(void)setServices:(NSArray *)arg1 ;
-(ECBaseViewController *)targetViewController;
-(void)switchAction:(id)arg1 ;
@end

