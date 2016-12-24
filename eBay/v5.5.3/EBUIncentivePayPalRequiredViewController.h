/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:15 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ComponentUI/EUIViewController.h>

@class NSString, UILabel, UIImageView;

@interface EBUIncentivePayPalRequiredViewController : EUIViewController {

	NSString* _errorText;
	UILabel* _errorLabel;
	UIImageView* _errorImage;

}

@property (nonatomic,retain) NSString * errorText;                         //@synthesize errorText=_errorText - In the implementation block
@property (assign,nonatomic,__weak) UILabel * errorLabel;                  //@synthesize errorLabel=_errorLabel - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * errorImage;              //@synthesize errorImage=_errorImage - In the implementation block
+(id)viewControllerWithErrorText:(id)arg1 ;
-(void)setupNavBar;
-(void)setupCancelButton;
-(void)setupImage;
-(void)setupErrorText;
-(void)setErrorImage:(UIImageView *)arg1 ;
-(UIImageView *)errorImage;
-(void)setErrorText:(NSString *)arg1 ;
-(void)cancel;
-(void)didReceiveMemoryWarning;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(int)horizontalPadding;
-(int)verticalPadding;
-(void)setupConstraints;
-(NSString *)errorText;
-(UILabel *)errorLabel;
-(void)setErrorLabel:(UILabel *)arg1 ;
@end
