/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:11 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBPaymentsReceiptExtensionViewDelegate.h>
#import <Facebook/FBPaymentsTableViewSection.h>

@protocol FBPaymentsTableViewSectionDelegate, FBPaymentsNavigationDelegate, FBPaymentsReceiptTableViewSectionDelegate;
@class NSDictionary, FBPaymentsReceiptSectionViewModel, NSString;

@interface FBPaymentsReceiptTableViewSection : NSObject <FBPaymentsReceiptExtensionViewDelegate, FBPaymentsTableViewSection> {

	NSDictionary* _extensionViewFactories;
	double _preferredSectionFooterViewHeight;
	id<FBPaymentsTableViewSectionDelegate> _sectionDelegate;
	id<FBPaymentsNavigationDelegate> _navigationDelegate;
	FBPaymentsReceiptSectionViewModel* _receiptSectionViewModel;
	id<FBPaymentsReceiptTableViewSectionDelegate> _delegate;
	UIEdgeInsets _edgeInsets;

}

@property (nonatomic,copy) FBPaymentsReceiptSectionViewModel * receiptSectionViewModel;                  //@synthesize receiptSectionViewModel=_receiptSectionViewModel - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsReceiptTableViewSectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) UIEdgeInsets edgeInsets;                                                    //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsTableViewSectionDelegate> sectionDelegate;              //@synthesize sectionDelegate=_sectionDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsNavigationDelegate> navigationDelegate;                 //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
-(id)sectionHeaderViewModel;
-(id)cellForSectionRowAtIndex:(unsigned long long)arg1 ;
-(double)heightForSectionRowAtIndex:(unsigned long long)arg1 ;
-(BOOL)shouldHighlightCellForRowAtIndex:(unsigned long long)arg1 ;
-(void)handleSelectActionForRowAtIndex:(unsigned long long)arg1 ;
-(double)heightForSectionFooterViewWithWidth:(double)arg1 ;
-(double)heightForSectionHeaderViewWithWidth:(double)arg1 ;
-(void)paymentsReceiptExtensionView:(id)arg1 didSelectActionWithActionIdentifier:(id)arg2 ;
-(id)initWthExtensionViewFactories:(id)arg1 preferredSectionFooterViewHeight:(double)arg2 ;
-(FBPaymentsReceiptSectionViewModel *)receiptSectionViewModel;
-(void)setReceiptSectionViewModel:(FBPaymentsReceiptSectionViewModel *)arg1 ;
-(void)setDelegate:(id<FBPaymentsReceiptTableViewSectionDelegate>)arg1 ;
-(id<FBPaymentsReceiptTableViewSectionDelegate>)delegate;
-(UIEdgeInsets)edgeInsets;
-(unsigned long long)numberOfRows;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(id<FBPaymentsNavigationDelegate>)navigationDelegate;
-(void)setSectionDelegate:(id<FBPaymentsTableViewSectionDelegate>)arg1 ;
-(id<FBPaymentsTableViewSectionDelegate>)sectionDelegate;
-(void)setNavigationDelegate:(id<FBPaymentsNavigationDelegate>)arg1 ;
@end
