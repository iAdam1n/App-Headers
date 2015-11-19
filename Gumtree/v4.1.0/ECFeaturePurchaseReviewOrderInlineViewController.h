/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:17 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/ECFeaturePurchaseReviewOrderViewController.h>

@class ECPostFeatureTotalButton;

@interface ECFeaturePurchaseReviewOrderInlineViewController : ECFeaturePurchaseReviewOrderViewController {

	ECPostFeatureTotalButton* _placeOrderButton;

}

@property (nonatomic,retain) ECPostFeatureTotalButton * placeOrderButton;              //@synthesize placeOrderButton=_placeOrderButton - In the implementation block
-(BOOL)shouldShowTotalField;
-(void)hideTotalField;
-(BOOL)shouldShowAdDescriptionView;
-(void)setPlaceOrderButtonTitle;
-(BOOL)isShoppingCart;
-(void)updatePlaceOrderButton;
-(ECPostFeatureTotalButton *)placeOrderButton;
-(void)setPlaceOrderButton:(ECPostFeatureTotalButton *)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(unsigned long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewDidLoad;
@end
