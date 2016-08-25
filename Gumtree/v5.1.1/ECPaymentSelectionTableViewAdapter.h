/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol ECPaymentSelectionTableViewAdapterDelegate;
@class UITableView, ECPaymentManager, ECAppConfig, ECAd, NSString;

@interface ECPaymentSelectionTableViewAdapter : NSObject <UITableViewDataSource, UITableViewDelegate> {

	id<ECPaymentSelectionTableViewAdapterDelegate> _delegate;
	UITableView* _tableView;
	ECPaymentManager* _paymentManager;
	ECAppConfig* _appConfig;
	ECAd* _ad;

}

@property (assign,nonatomic,__weak) UITableView * tableView;                                              //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic,__weak) ECPaymentManager * paymentManager;                                    //@synthesize paymentManager=_paymentManager - In the implementation block
@property (assign,nonatomic,__weak) ECAppConfig * appConfig;                                              //@synthesize appConfig=_appConfig - In the implementation block
@property (nonatomic,retain) ECAd * ad;                                                                   //@synthesize ad=_ad - In the implementation block
@property (assign,nonatomic,__weak) id<ECPaymentSelectionTableViewAdapterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAd:(ECAd *)arg1 ;
-(BOOL)acceptsPayPal;
-(ECPaymentManager *)paymentManager;
-(BOOL)acceptsCreditCard;
-(BOOL)isCreditCardRow:(id)arg1 ;
-(BOOL)isPayPalRow:(id)arg1 ;
-(id)initWithTableView:(id)arg1 ad:(id)arg2 paymentManager:(id)arg3 appConfig:(id)arg4 ;
-(double)tableViewHeight;
-(void)setPaymentManager:(ECPaymentManager *)arg1 ;
-(void)setDelegate:(id<ECPaymentSelectionTableViewAdapterDelegate>)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id<ECPaymentSelectionTableViewAdapterDelegate>)delegate;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(ECAppConfig *)appConfig;
-(void)setAppConfig:(ECAppConfig *)arg1 ;
-(ECAd *)ad;
@end

