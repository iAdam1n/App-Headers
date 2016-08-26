/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/EbayWeb.h>
#import <nautilus/ViewItemDataManagerObserver.h>

@class ViewItemDataManager, UIView, NSString;

@interface EBUViewItemDescriptionViewController : EbayWeb <ViewItemDataManagerObserver> {

	unsigned long long _displayOptions;
	ViewItemDataManager* _dataManager;
	UIView* _titleBar;
	NSString* _lastLoadedListingID;
	NSString* _productDescriptionHTML;

}

@property (nonatomic,retain) UIView * titleBar;                              //@synthesize titleBar=_titleBar - In the implementation block
@property (nonatomic,retain) NSString * lastLoadedListingID;                 //@synthesize lastLoadedListingID=_lastLoadedListingID - In the implementation block
@property (nonatomic,retain) NSString * productDescriptionHTML;              //@synthesize productDescriptionHTML=_productDescriptionHTML - In the implementation block
@property (assign,nonatomic) unsigned long long displayOptions;              //@synthesize displayOptions=_displayOptions - In the implementation block
@property (nonatomic,retain) ViewItemDataManager * dataManager;              //@synthesize dataManager=_dataManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setBackForwardState;
-(void)setDisplayOptions:(unsigned long long)arg1 ;
-(unsigned long long)displayOptions;
-(void)setTitleBar:(UIView *)arg1 ;
-(void)webViewClear;
-(void)setupForStatusBar;
-(void)makeProductDescriptionHTMLIfNeeded;
-(id)generateHTMLPage;
-(void)showHTML:(id)arg1 ;
-(void)setProductDescriptionHTML:(NSString *)arg1 ;
-(void)setLastLoadedListingID:(NSString *)arg1 ;
-(UIView *)titleBar;
-(NSString *)lastLoadedListingID;
-(NSString *)productDescriptionHTML;
-(void)setDataManager:(ViewItemDataManager *)arg1 ;
-(ViewItemDataManager *)dataManager;
-(void)dataManagerUpdated:(id)arg1 ;
-(id)init;
-(void)userActivityWillSave:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(BOOL)accessibilityPerformEscape;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3 ;
@end
