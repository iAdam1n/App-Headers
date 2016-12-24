/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:10 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBPaymentsTableViewSection.h>

@protocol FBPaymentsTableViewSectionDelegate, FBPaymentsNavigationDelegate;
@class FBPaymentsCartItemQuantitySelectionView, NSString;

@interface FBPaymentsCartItemQuantitySelectionSection : NSObject <FBPaymentsTableViewSection> {

	FBPaymentsCartItemQuantitySelectionView* _quantitySelectionView;
	id<FBPaymentsTableViewSectionDelegate> _sectionDelegate;
	id<FBPaymentsNavigationDelegate> _navigationDelegate;
	unsigned long long _selectedQuantity;
	UIEdgeInsets _edgeInsets;

}

@property (assign,nonatomic) unsigned long long selectedQuantity;                                        //@synthesize selectedQuantity=_selectedQuantity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) UIEdgeInsets edgeInsets;                                                    //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsTableViewSectionDelegate> sectionDelegate;              //@synthesize sectionDelegate=_sectionDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsNavigationDelegate> navigationDelegate;                 //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
-(unsigned long long)selectedQuantity;
-(id)sectionHeaderViewModel;
-(id)cellForSectionRowAtIndex:(unsigned long long)arg1 ;
-(double)heightForSectionRowAtIndex:(unsigned long long)arg1 ;
-(BOOL)shouldHighlightCellForRowAtIndex:(unsigned long long)arg1 ;
-(void)handleSelectActionForRowAtIndex:(unsigned long long)arg1 ;
-(void)setSelectedQuantity:(unsigned long long)arg1 ;
-(id)initWithSelectedQuantity:(unsigned long long)arg1 minimumQuantity:(unsigned long long)arg2 maximalQuantity:(unsigned long long)arg3 ;
-(UIEdgeInsets)edgeInsets;
-(unsigned long long)numberOfRows;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(id<FBPaymentsNavigationDelegate>)navigationDelegate;
-(void)setSectionDelegate:(id<FBPaymentsTableViewSectionDelegate>)arg1 ;
-(id<FBPaymentsTableViewSectionDelegate>)sectionDelegate;
-(void)setNavigationDelegate:(id<FBPaymentsNavigationDelegate>)arg1 ;
@end
