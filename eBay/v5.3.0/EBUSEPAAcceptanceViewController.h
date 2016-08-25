/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@protocol SEPAAcceptanceDelegate;
@class NSMutableArray, NSString, NSURL, EBNCheckoutDataManager;

@interface EBUSEPAAcceptanceViewController : UITableViewController {

	id<SEPAAcceptanceDelegate> _delegate;
	NSMutableArray* _tableSections;
	NSString* _primaryButtonTitle;
	NSString* _secondaryButtonTitle;
	NSString* _disclaimerText;
	NSURL* _urlForTerms;
	EBNCheckoutDataManager* _dataManager;

}

@property (assign,nonatomic,__weak) id<SEPAAcceptanceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSMutableArray * tableSections;                          //@synthesize tableSections=_tableSections - In the implementation block
@property (nonatomic,retain) NSString * primaryButtonTitle;                           //@synthesize primaryButtonTitle=_primaryButtonTitle - In the implementation block
@property (nonatomic,retain) NSString * secondaryButtonTitle;                         //@synthesize secondaryButtonTitle=_secondaryButtonTitle - In the implementation block
@property (nonatomic,retain) NSString * disclaimerText;                               //@synthesize disclaimerText=_disclaimerText - In the implementation block
@property (nonatomic,retain) NSURL * urlForTerms;                                     //@synthesize urlForTerms=_urlForTerms - In the implementation block
@property (nonatomic,retain) EBNCheckoutDataManager * dataManager;                    //@synthesize dataManager=_dataManager - In the implementation block
+(id)viewControllerWithDelegate:(id)arg1 dataManager:(id)arg2 ;
-(NSMutableArray *)tableSections;
-(void)setTableSections:(NSMutableArray *)arg1 ;
-(void)setupCancelButton;
-(void)setupSections;
-(void)setupFromCheckoutCart:(id)arg1 ;
-(void)setPrimaryButtonTitle:(NSString *)arg1 ;
-(void)setUrlForTerms:(NSURL *)arg1 ;
-(void)viewURL;
-(NSURL *)urlForTerms;
-(id)setupButtonFooter;
-(void)setDataManager:(EBNCheckoutDataManager *)arg1 ;
-(EBNCheckoutDataManager *)dataManager;
-(NSString *)disclaimerText;
-(void)setDisclaimerText:(NSString *)arg1 ;
-(void)cancel;
-(void)setDelegate:(id<SEPAAcceptanceDelegate>)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id<SEPAAcceptanceDelegate>)delegate;
-(void)didReceiveMemoryWarning;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)accept;
-(NSString *)secondaryButtonTitle;
-(void)setSecondaryButtonTitle:(NSString *)arg1 ;
-(NSString *)primaryButtonTitle;
@end

