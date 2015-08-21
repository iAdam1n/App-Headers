/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:33 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNBlockDataViewAdapter.h>
#import <Twitter/TFNHTMLTextViewDelegate.h>
#import <Twitter/T1CommerceProfileModule.h>

@class UIViewController, NSString, TFNItemsDataViewAdapter, NSArray;

@interface T1CommerceLegalPolicyModule : TFNBlockDataViewAdapter <TFNHTMLTextViewDelegate, T1CommerceProfileModule> {

	UIViewController* _parentController;
	NSString* _twitterTermsURLString;
	NSString* _sellerTermsURLString;
	NSString* _sellerPrivacyURLString;

}

@property (assign,nonatomic,__weak) UIViewController * parentController;               //@synthesize parentController=_parentController - In the implementation block
@property (nonatomic,readonly) NSString * twitterTermsURLString;                       //@synthesize twitterTermsURLString=_twitterTermsURLString - In the implementation block
@property (nonatomic,readonly) NSString * sellerTermsURLString;                        //@synthesize sellerTermsURLString=_sellerTermsURLString - In the implementation block
@property (nonatomic,readonly) NSString * sellerPrivacyURLString;                      //@synthesize sellerPrivacyURLString=_sellerPrivacyURLString - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) TFNItemsDataViewAdapter * dataViewAdapter; 
@property (nonatomic,readonly) NSArray * moduleDataItems; 
-(id)dataViewController:(id)arg1 tableViewCellForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4 ;
-(double)dataViewController:(id)arg1 tableViewHeightForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4 ;
-(TFNItemsDataViewAdapter *)dataViewAdapter;
-(BOOL)dataViewController:(id)arg1 shouldSelectItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4 ;
-(BOOL)dataViewController:(id)arg1 shouldHighlightItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4 ;
-(void)htmlTextView:(id)arg1 didTapLink:(id)arg2 ;
-(void)htmlTextViewHandleUserAccessibilityTap:(id)arg1 ;
-(void)_goToTermsForUrlString:(id)arg1 ;
-(NSString *)twitterTermsURLString;
-(NSString *)sellerTermsURLString;
-(NSString *)sellerPrivacyURLString;
-(id)initWithMarketPlaceId:(id)arg1 ;
-(id)_legalTextViewForCell;
-(UIViewController *)parentController;
-(void)setParentController:(UIViewController *)arg1 ;
@end

