/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class FBPaymentsTableFooterView, FBPaymentsFooterErrorView, NSString;

@interface FBPaymentsFooterWrapperView : UIView {

	FBPaymentsTableFooterView* _footerView;
	FBPaymentsFooterErrorView* _errorView;
	NSString* _errorDescription;

}

@property (nonatomic,copy) NSString * errorDescription;              //@synthesize errorDescription=_errorDescription - In the implementation block
-(id)initWithTitle:(id)arg1 buttonTitles:(id)arg2 buttonActionBlock:(/*^block*/id)arg3 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setErrorDescription:(NSString *)arg1 ;
-(NSString *)errorDescription;
@end
